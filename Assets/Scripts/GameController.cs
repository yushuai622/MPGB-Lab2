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
        lineRenderer = gameObject.AddComponent<LineRenderer>();//����һ����
        lineRenderer.startWidth = 0.1f;
        lineRenderer.endWidth = 0.1f;


        playerPosition_Old = player.transform.position;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //��ҵ�λ��
        playerPosition.text = "PlayerPosition: " + player.transform.position;
        //��ҵ��ٶ�
        playerVelocity_text.text = "PlayerVelocity: " + (player.transform.position - playerPosition_Old) / Time.deltaTime;

        playerPosition_Old = player.transform.position;

        pickUpsDic = new Dictionary<float, GameObject>();//��ʼ��       
        pickUpsList = new List<float>();
        targetArr = GameObject.FindGameObjectsWithTag("PickUp");//Ѱ�Ҵ���ǩ�Ķ������ɼ���

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
            //������ȡ��ҵ�ǰλ�ú�ÿһ��pickupλ�õľ���
            float dis = Vector3.Distance(targetArr[i].transform.localPosition, player.transform.position);
            //��ÿ������ֵ���������
            pickUpsDic.Add(dis, targetArr[i].gameObject);
            //Debug.Log(dis);
            //������pickup����Ϊ��ɫ
            targetArr[i].GetComponent<Renderer>().material.color = Color.white;

            if (!pickUpsList.Contains(dis))
            {
                pickUpsList.Add(dis);
            }
            
        }
        pickUpsList.Sort();//�Ծ����������
        Distance.text = "Distance: " + pickUpsList[0];//��ʾ����ľ���ֵ
        //Debug.Log("***" + pickUpsList[0]);
        GameObject obj;
        pickUpsDic.TryGetValue(pickUpsList[0], out obj);//��ȡ��������Ķ���
        //Debug.Log(obj.name);
        //����������pickup����Ϊ��ɫ
        obj.GetComponent<Renderer>().material.color = Color.blue;
        Debug.Log(targetArr.Length);
        
            lineRenderer.SetPosition(0, player.transform.position);
            lineRenderer.SetPosition(1, obj.transform.position);
        
        

    }

}
