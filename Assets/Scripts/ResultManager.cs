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

        // �\��
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

    // �Q�[���f�[�^�̃��[�h&&���_�̍X�V&&�\��&&�Z�[�u
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
            Debug.Log("�Z�[�u�f�[�^���j�����Ă��܂��D");
        }

        // ���_�̍X�V
        // ������Ԃ̎��͖ⓚ���p�ōX�V
        if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
        {
            SV.PtTimeArr[dan - 11].time = (float)Time2;
            SV.PtTimeArr[dan - 11].point = point;

            // �Q�[���f�[�^�̃Z�[�u
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
        // (���_���������^�C��������)�܂���(���_���傫��)���͍X�V
        else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
        {
            SV.PtTimeArr[dan - 11].time = (float)Time2;
            SV.PtTimeArr[dan - 11].point = point;

            // �Q�[���f�[�^�̃Z�[�u
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
        //        Debug.Log("�e�X�g");
        SceneManager.LoadScene("RecordScene");
    }
*/
    public void PushReturnButton()
    {
//        Debug.Log("�e�X�g");
        SceneManager.LoadScene("TitleScene");
    }
}
