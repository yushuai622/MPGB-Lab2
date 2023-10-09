using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameController : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject player;
    private LineRenderer lineRenderer;
    public TextMeshProUGUI playerPosition;
    public TextMeshProUGUI playerVelocity_text;
    public TextMeshProUGUI Distance;
    public Vector3 playerPosition_Old;
    public float playerVelocity;

    private GameObject[] targetArr;
    private List<float> pickUpsList;
    private Dictionary<float, GameObject> pickUpsDic;

    bool isDebug = true;
    void Start()
    {
        lineRenderer = gameObject.AddComponent<LineRenderer>();//����һ����
        lineRenderer.startWidth = 0.1f;
        lineRenderer.endWidth = 0.1f;


        playerPosition_Old = player.transform.position;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (isDebug)
            {
                playerPosition.gameObject.SetActive(false);
                playerVelocity_text.gameObject.SetActive(false);
                Distance.gameObject.SetActive(false);
                lineRenderer.positionCount = 0;
                isDebug = false;
            }
            else
            {
                playerPosition.gameObject.SetActive(true);
                playerVelocity_text.gameObject.SetActive(true);
                Distance.gameObject.SetActive(true);
                lineRenderer.positionCount = 2;
                isDebug = true;
            }
        }
    }
    void FixedUpdate()
    {
        playerPosition.text = "PlayerPosition: " + player.transform.position;
        playerVelocity_text.text = "PlayerVelocity: " + (player.transform.position - playerPosition_Old) / Time.deltaTime;

        playerPosition_Old = player.transform.position;

        pickUpsDic = new Dictionary<float, GameObject>();//设置一个字典数组      
        pickUpsList = new List<float>();
        targetArr = GameObject.FindGameObjectsWithTag("PickUp");//获取所有PickUp标签对象

        if (targetArr.Length == 0)
        {
            lineRenderer.positionCount = 0;
        }
        else
        {
            CountDistacne();
        }

    }


    void CountDistacne()
    {
        for (int i = 0; i < targetArr.Length; i++)
        {
            //挨个计算玩家到目标对象的距离
            float dis = Vector3.Distance(targetArr[i].transform.localPosition, player.transform.position);
            //将每个距离加入到数组
            pickUpsDic.Add(dis, targetArr[i].gameObject);
            //Debug.Log(dis);
            //将所有目标对象设置为白色
            targetArr[i].GetComponent<Renderer>().material.color = Color.white;

            if (!pickUpsList.Contains(dis))
            {
                pickUpsList.Add(dis);
            }

        }
        pickUpsList.Sort();//对数组进行排序
        Distance.text = "Distance: " + pickUpsList[0];
        GameObject nearestObj;
        pickUpsDic.TryGetValue(pickUpsList[0], out nearestObj);//将最近的对象导出

        if (isDebug)
        {
            nearestObj.GetComponent<Renderer>().material.color = Color.blue;
            lineRenderer.SetPosition(0, player.transform.position);
            lineRenderer.SetPosition(1, nearestObj.transform.position);
        }
        else
        {
            nearestObj.GetComponent<Renderer>().material.color = Color.green;
            nearestObj.transform.LookAt(player.transform);
        }
    }
}
