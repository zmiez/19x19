using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public struct PointTime
{
    public int point;
    public float time;

    public PointTime(int _point, float _time)
    {
        point = _point;
        time = _time;
    }
}

[System.Serializable]
public class SaveData
{
    public string Name = "Save1";
    //    public List<PointTime> pointTimeList = new List<PointTime>();
    public PointTime[] PtTimeArr = new PointTime[10]; 
}
