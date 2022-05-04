using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RecordManager : MonoBehaviour
{
/*    public Text PointText11;
    public Text TimeText11;
    public Text PointText12;
    public Text TimeText12;
    public Text PointText13;
    public Text TimeText13;
    public Text PointText14;
    public Text TimeText14;
    public Text PointText15;
    public Text TimeText15;
    public Text PointText16;
    public Text TimeText16;
    public Text PointText17;
    public Text TimeText17;
    public Text PointText18;
    public Text TimeText18;
    public Text PointText19;
    public Text TimeText19;
    public Text PointText20;
    public Text TimeText20;
*/
    public Text[] PointText = new Text[10];
    public Text[] TimeText = new Text[10];

    int dan;
    int point;


    // Start is called before the first frame update
    void Start()
    {
        double Time1;
        double Time2;

        dan = Memo.dan;
        point = Memo.point;
        Time1 = (double)Memo.elapsedTime;
        Time2 = Math.Round(Time1, 2, MidpointRounding.AwayFromZero);

        SaveData SV = new SaveData();

        /*        SaveData.saveData[0].point = point;
                SaveData.saveData[0].time = (float)Time2;
                SaveManager.Save("Save.json", SaveData.saveData);*/
        // ゲームデータのロード&処理&セーブ
        string saveFilePath = SaveManager.GetApplicationFilePath("Save.json");
        if (File.Exists(saveFilePath))
        {
            SV = SaveManager.Load("Save.json");
        }
        else
        {
            Debug.Log("セーブデータが破損しています．");
        }
        //            Debug.Log(SV.PtTimeArr[0].time);
        //            Debug.Log(SV.PtTimeArr[0].point);
        //            Debug.Log(SV.PtTimeArr[dan - 11].time.ToString());

        /*        switch (dan)
                    {
                        case 11:
         */
        if (dan != 10)
        {
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (SV.PtTimeArr[i].point != 18)
            {
                TimeText[i].text = "N/A";
            }
            else
            {
                TimeText[i].text = SV.PtTimeArr[i].time.ToString() + "sec.";
            }
            PointText[i].text = SV.PtTimeArr[i].point.ToString() + " pt.";
        }
/*                    break;

                case 12:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText12.text = "N/A";
            }
            else
            {
                TimeText12.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText12.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 13:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText13.text = "N/A";
            }
            else
            {
                TimeText13.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText13.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 14:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText14.text = "N/A";
            }
            else
            {
                TimeText14.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText14.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 15:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText15.text = "N/A";
            }
            else
            {
                TimeText15.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText15.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 16:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText16.text = "N/A";
            }
            else
            {
                TimeText16.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText16.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 17:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText17.text = "N/A";
            }
            else
            {
                TimeText17.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText17.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
            break;

                case 18:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText18.text = "N/A";
            }
            else
            {
                TimeText18.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText18.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 19:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText19.text = "N/A";
            }
            else
            {
                TimeText19.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText19.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                case 20:
            if (SV.PtTimeArr[dan - 11].time.ToString() == "0")
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }
            else if ((SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan - 11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
            {
                SV.PtTimeArr[dan - 11].time = (float)Time2;
                SV.PtTimeArr[dan - 11].point = point;
            }

            if (SV.PtTimeArr[dan - 11].point != 18)
            {
                TimeText20.text = "N/A";
            }
            else
            {
                TimeText20.text = SV.PtTimeArr[dan - 11].time.ToString() + "sec.";
            }
            PointText20.text = SV.PtTimeArr[dan - 11].point.ToString() + " pt.";
                    break;

                default:
                    Debug.Log("バグがあるよ");
                    break;
        }
*/
            SaveManager.Save("Save.json", SV);


            /*            if (SV.PtTimeArr[dan - 11].point != 18 && point != 18)
                        {
                            TimeText11.text = "N/A";
                            if (SV.PtTimeArr[dan-11].point <= point)
                            {
                                SV.PtTimeArr[dan-11].point = point;
                                PointText11.text = point.ToString() + " pt.";
                            }
                            SaveManager.Save("Save.json", SV);
                        }
                        else if (SV.PtTimeArr[dan-11].time.ToString() != "0.00" || (SV.PtTimeArr[dan - 11].point == point && SV.PtTimeArr[dan-11].time > Time2) || SV.PtTimeArr[dan - 11].point < point)
                        {
                            SV.PtTimeArr[dan-11].time = (float)Time2;
                            TimeText11.text = Time2.ToString() + "sec.";
                            SV.PtTimeArr[dan-11].point = point;
                            PointText11.text = point.ToString() + " pt.";
                            SaveManager.Save("Save.json", SV);
                        } else
                        {
                            TimeText11.text = "N/A";
                            SaveManager.Save("Save.json", SV);

                        }*/
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
