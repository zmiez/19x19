using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ResultManager : MonoBehaviour
{
    public Text PointText;
    public Text TimeText;
    public Text NewRecord;

    public int dan;
    public int point;

    // Start is called before the first frame update
    void Start()
    {
        double Time1;
        double Time2;

        bool UpTime;

        // 表示
        PointText.text = Memo.point.ToString() + " pt.";

        Time1 = (double)Memo.elapsedTime;
        Time2 = Math.Round(Time1, 2, MidpointRounding.AwayFromZero);
        TimeText.text = Time2.ToString() + " sec.";

        UpTime = UpdateRecord(Time2);

        if (UpTime)
        {
            NewRecord.text = "New Record!";
        }
        else
        {
            NewRecord.text = "";
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // ゲームデータのロード&&得点の更新&&表示&&セーブ
    public bool UpdateRecord(double Time2)
    {
        dan = Memo.dan;
        point = Memo.point;

        SaveData SV = new SaveData();

        string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
        if (File.Exists(saveFilePath))
        {
            SV = SaveManager.Load("Save.json");
        }
        else
        {
            Debug.Log("セーブデータが破損しています．");
        }

        // 得点の更新
        // 初期状態の時は問答無用で更新
        if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
        {
            SV.PtTimeArr[dan - 11].time = (float)Time2;
            SV.PtTimeArr[dan - 11].point = point;

            // ゲームデータのセーブ
            SaveManager.Save("Save.json", SV);
            if (SV.PtTimeArr[dan - 11].point == 18)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        // (得点が同じかつタイムが速い)または(得点が大きい)時は更新
        else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
        {
            SV.PtTimeArr[dan - 11].time = (float)Time2;
            SV.PtTimeArr[dan - 11].point = point;

            // ゲームデータのセーブ
            SaveManager.Save("Save.json", SV);
            if (SV.PtTimeArr[dan - 11].point == 18)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
/*
    public void PushRecordButton()
    {
        //        Debug.Log("テスト");
        SceneManager.LoadScene("RecordScene");
    }
*/
    public void PushReturnButton()
    {
//        Debug.Log("テスト");
        SceneManager.LoadScene("TitleScene");
    }
}
