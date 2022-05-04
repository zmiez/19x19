using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//static bool isRET;

public class SManager : MonoBehaviour
{
    public int dan;
    public int retsu;
    public int EqualNumber = 0;
//    public bool isRET;

    public Text EqualNumberText;
    public Text ProblemText;
    public Text InputText;
    public Text TitleText;

    public float elapsedTime;

    public struct DanRetsu
    {
        public int dan;
        public int retsu;

        public DanRetsu(int _dan, int _retsu)
        {
            dan = _dan;
            retsu = _retsu;
        }
    }

    DanRetsu[] ProbArr = new DanRetsu[18];

    int RetsuCounter = 0;

    // Start is called before the first frame update
    void Start()
    {
        dan = Memo.dan;
        // 11-19の段の時の初期化
        if (dan <= 19)
        {
            TitleText.text = dan.ToString() + "の段";
            InputText.text = "0";

            //       isRET = false;
            for (retsu = 2; retsu < 20; retsu++)
            {
                ProbArr[retsu - 2].dan = dan;
                ProbArr[retsu - 2].retsu = retsu;
            }
            Problem(ProbArr[0]);
        }
        // ランダム18問の時の初期化
        else
        {
            TitleText.text = "ランダム18";
            InputText.text = "0";

            for (retsu = 2; retsu <20; retsu++)
            {
                ProbArr[retsu - 2].dan = (int)UnityEngine.Random.Range(11, 20);
                ProbArr[retsu - 2].retsu = (int)UnityEngine.Random.Range(2, 20);
            }
            Problem(ProbArr[0]);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // 経過時間を計る
        elapsedTime += Time.deltaTime;
    }

    // 問題を出す
    void Problem(DanRetsu danretsu)
    {
        string NumberText = danretsu.retsu.ToString();
        ProblemText.text = danretsu.dan.ToString() + "x" + NumberText + "=";
    }

    // RETが押下された時の処理
    public void PushRETKey()
    {
        int sol;
        //        isRET = true;

        sol = ProbArr[RetsuCounter].dan * ProbArr[RetsuCounter].retsu;
        if(sol.ToString() == InputText.text)
        {
            EqualNumber += 1;
            EqualNumberText.text = EqualNumber.ToString();
        }
        InputText.text = "0";
        RetsuCounter++;
        if (RetsuCounter >= 18)
        {
            //Debug.Log(elapsedTime.ToString());
            Memo.point = EqualNumber;
            Memo.elapsedTime = elapsedTime;
            SceneManager.LoadScene("ResultScene");
//            RetsuCounter = 0;
        }
        else
        {
            Problem(ProbArr[RetsuCounter]);
        }
    }
}
