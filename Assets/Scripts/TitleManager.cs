using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;

public class TitleManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    // もしセーブデータがなければ新たに作る
        string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
        if (!File.Exists(saveFilePath))
        {
            SaveData SV = new SaveData();
            for (int i = 0; i < 10; i++)
            {
                //            new PointTime(0, 0.0f);
                SV.PtTimeArr[i].point = 0;
                SV.PtTimeArr[i].time = 0.0f;
                SaveManager.Save("Save.json", SV);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PushStartButton(int dan)
    {
        Memo.dan = dan;
        if (dan == 10)
        {
            SceneManager.LoadScene("RecordScene");
        }
        else
        {
            SceneManager.LoadScene("GameScene");
        }
        //        Obj.name.Replace('ButtonStart', '')
//        Debug.Log(dan);

    }
}
