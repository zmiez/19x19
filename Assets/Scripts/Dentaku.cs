using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dentaku : MonoBehaviour
{
    public Text SolutionText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    // RETkeyà»äOÇÃÉLÅ[Ç™âüÇ≥ÇÍÇΩéûÇÃèàóù(RETkeyÇÕSManagerÇ≈èàóù)
    public void Push7Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "7";
        } else
        {
            SolutionText.text = SolutionText.text + "7";
        }
    }
    public void Push8Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "8";
        }
        else
        {
            SolutionText.text = SolutionText.text + "8";
        }
    }
    public void Push9Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "9";
        }
        else
        {
            SolutionText.text = SolutionText.text + "9";
        }
    }
    public void Push4Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "4";
        }
        else
        {
            SolutionText.text = SolutionText.text + "4";
        }
    }
    public void Push5Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "5";
        }
        else
        {
            SolutionText.text = SolutionText.text + "5";
        }
    }
    public void Push6Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "6";
        }
        else
        {
            SolutionText.text = SolutionText.text + "6";
        }
    }
    public void Push1Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "1";
        }
        else
        {
            SolutionText.text = SolutionText.text + "1";
        }
    }
    public void Push2Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "2";
        }
        else
        {
            SolutionText.text = SolutionText.text + "2";
        }
    }
    public void Push3Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "3";
        }
        else
        {
            SolutionText.text = SolutionText.text + "3";
        }
    }
    public void Push0Key()
    {
        if (SolutionText.text == "0")
        {
            SolutionText.text = "0";
        }
        else
        {
            SolutionText.text = SolutionText.text + "0";
        }
    }
    public void PushDELKey()
    {
        SolutionText.text = "0";
    }
//    public void PushRETKey()
//    {
//       isRET = true;
//    }
}
