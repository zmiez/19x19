using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PushStartButton(int dan)
    {
        Memo.dan = dan;
        SceneManager.LoadScene("GameScene");
        //        Obj.name.Replace('ButtonStart', '')
//        Debug.Log(dan);

    }
}
