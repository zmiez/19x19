using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ResultManager : MonoBehaviour
{
    public Text PointText;
    public Text TimeText;


    // Start is called before the first frame update
    void Start()
    {
        double Time1;
        double Time2;

        //        Debug.Log("start");
        PointText.text = Memo.point.ToString() + " pt.";

        Time1 = (double)Memo.elapsedTime;
        Time2 = Math.Round(Time1, 2);

        TimeText.text = Time2.ToString() + " sec.";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void PushReturnButton()
    {
//        Debug.Log("ƒeƒXƒg");
        SceneManager.LoadScene("TitleScene");
    }
}
