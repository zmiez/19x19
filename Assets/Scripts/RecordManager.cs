using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RecordManager : MonoBehaviour
{
    public Text[] PointText = new Text[10];
    public Text[] TimeText = new Text[10];

    int dan;
    int point;


    // Start is called before the first frame update
    void Start()
    {
//        double Time1;
//        double Time2;

        dan = Memo.dan;
        point = Memo.point;
//        Time1 = (double)Memo.elapsedTime;
//        Time2 = Math.Round(Time1, 2, MidpointRounding.AwayFromZero);

        SaveData SV = new SaveData();

        // ゲームデータのロード&&得点の更新&&表示&&セーブ
        string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
        if (File.Exists(saveFilePath))
        {
            SV = SaveManager.Load("Save.json");
        }
        else
        {
            Debug.Log("セーブデータが破損しています．");
        }
/*
        // 得点の更新(タイトルから飛んで来た場合はしない処理)
        if (dan != 10)
        {
            // 初期状態の時は問答無用で更新
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            // (得点が同じかつタイムが速い)または(得点が大きい)時は更新
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
        }
*/
        // 表示
        for (int i = 0; i < 10; i++)
        {
            // 満点でない場合は経過時間は表示しない
            if (SV.PtTimeArr[i].point != 18)
            {
                TimeText[i].text = "N/A";
            }
            // 満点の場合は経過時間を表示する
            else
            {
                TimeText[i].text = SV.PtTimeArr[i].time.ToString() + " sec.";
            }
            PointText[i].text = SV.PtTimeArr[i].point.ToString() + " pt.";
        }
        // ゲームデータのセーブ
 //       SaveManager.Save("Save.json", SV);

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PushReturnButton()
    {
        //        Debug.Log("テスト");
        SceneManager.LoadScene("TitleScene");
    }
}
