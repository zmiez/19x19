using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;


public class SaveManager
{
    public static void Save(string FileName, SaveData saveData)
    {
        string json = JsonUtility.ToJson(saveData);//JSON 形式のデータにする
//		Debug.Log(json);
		string saveFilePath = GetApplicationFilePath(FileName);
		StreamWriter streamWriter = new StreamWriter(saveFilePath);
		streamWriter.Write(json);
		streamWriter.Flush();
		streamWriter.Close();
	}
	public static SaveData Load(string FileName)
    {
		SaveData saveData;
		string saveFilePath = GetApplicationFilePath(FileName);
		if (File.Exists(saveFilePath))
		{
			StreamReader streamReader;
			streamReader = new StreamReader(saveFilePath);
			string data = streamReader.ReadToEnd();
			streamReader.Close();
//			Debug.Log(data);
			saveData = JsonUtility.FromJson<SaveData>(data);
			return saveData;
		}
		return null;
	}

	public static string GetApplicationFilePath(string filename)
	{
#if UNITY_EDITOR
	string path = Directory.GetCurrentDirectory();
#elif UNITY_WEBGL
	string path = Application.persistentDataPath.TrimEnd('\\');
#elif UNITY_ANDROID
	string path = Application.persistentDataPath.TrimEnd('\\');
#else
		// string path = AppDomain.CurrentDomain.BaseDirectory.TrimEnd('\\');
		// string path = UnityEngine.Application.persistentDataPath.TrimEnd('\\');
		string path = Application.dataPath.TrimEnd('\\');
#endif
		string absoluteFilePath = path + "/" + filename;
		return absoluteFilePath;

	}
}


