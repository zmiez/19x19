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

        // �Q�[���f�[�^�̃��[�h&&���_�̍X�V&&�\��&&�Z�[�u
        string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
        if (File.Exists(saveFilePath))
        {
            SV = SaveManager.Load("Save.json");
        }
        else
        {
            Debug.Log("�Z�[�u�f�[�^���j�����Ă��܂��D");
        }
/*
        // ���_�̍X�V(�^�C�g��������ŗ����ꍇ�͂��Ȃ�����)
        if (dan != 10)
        {
            // ������Ԃ̎��͖ⓚ���p�ōX�V
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            // (���_���������^�C��������)�܂���(���_���傫��)���͍X�V
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
        }
*/
        // �\��
        for (int i = 0; i < 10; i++)
        {
            // ���_�łȂ��ꍇ�͌o�ߎ��Ԃ͕\�����Ȃ�
            if (SV.PtTimeArr[i].point != 18)
            {
                TimeText[i].text = "N/A";
            }
            // ���_�̏ꍇ�͌o�ߎ��Ԃ�\������
            else
            {
                TimeText[i].text = SV.PtTimeArr[i].time.ToString() + " sec.";
            }
            PointText[i].text = SV.PtTimeArr[i].point.ToString() + " pt.";
        }
        // �Q�[���f�[�^�̃Z�[�u
 //       SaveManager.Save("Save.json", SV);

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PushReturnButton()
    {
        //        Debug.Log("�e�X�g");
        SceneManager.LoadScene("TitleScene");
    }
}
