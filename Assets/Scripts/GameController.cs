using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using static UnityEditor.Timeline.TimelinePlaybackControls;

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
    void Start()
    {
        lineRenderer = gameObject.AddComponent<LineRenderer>();//设置一条线
        lineRenderer.startWidth = 0.1f;
        lineRenderer.endWidth = 0.1f;


        playerPosition_Old = player.transform.position;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //玩家的位置
        playerPosition.text = "PlayerPosition: " + player.transform.position;
        //玩家的速度
        playerVelocity_text.text = "PlayerVelocity: " + (player.transform.position - playerPosition_Old) / Time.deltaTime;

        playerPosition_Old = player.transform.position;

        pickUpsDic = new Dictionary<float, GameObject>();//初始化       
        pickUpsList = new List<float>();
        targetArr = GameObject.FindGameObjectsWithTag("PickUp");//寻找带标签的对象，做成集合

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
            //遍历获取玩家当前位置和每一个pickup位置的距离
            float dis = Vector3.Distance(targetArr[i].transform.localPosition, player.transform.position);
            //将每个距离值其加入数组
            pickUpsDic.Add(dis, targetArr[i].gameObject);
            //Debug.Log(dis);
            //将所有pickup设置为白色
            targetArr[i].GetComponent<Renderer>().material.color = Color.white;

            if (!pickUpsList.Contains(dis))
            {
                pickUpsList.Add(dis);
            }
            
        }
        pickUpsList.Sort();//对距离进行排序
        Distance.text = "Distance: " + pickUpsList[0];//显示最近的距离值
        //Debug.Log("***" + pickUpsList[0]);
        GameObject obj;
        pickUpsDic.TryGetValue(pickUpsList[0], out obj);//获取距离最近的对象
        //Debug.Log(obj.name);
        //将这个最近的pickup设置为蓝色
        obj.GetComponent<Renderer>().material.color = Color.blue;
        Debug.Log(targetArr.Length);
        
            lineRenderer.SetPosition(0, player.transform.position);
            lineRenderer.SetPosition(1, obj.transform.position);
        
        

    }

}
