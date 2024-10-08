#include "SceneManager.h"
/*

system("cls")�� C�� C++���� �ܼ� ȭ���� ����� �� ���Ǵ� ��ɾ�

*/

#include <iostream>
#include <map>

using namespace std;

class Armor
{

public:

	Armor() :name(""), def(0) {}
	Armor(const string n, int d) : name(n), def(d) {}


	string GetName()const { return name; }
	int GetDef()const { return def; }

private:

	string name;
	int def;
};

class Scene
{
private:

	string desc;

public:

	Scene() :desc("") {}
	Scene(const string& d) : desc(d) {}

	string GetDescription()const { return desc; }
};

class SceneManager
{
private:
	//���� �̸��� Ű�� �ϰ� �� �����͸� ������ �����ϴ� map
	map<string, Scene*>scenes;
	Scene* currentScene; //���� ���� ����Ű�� ������
	string currentSceneName; //���� ���� �̸�


public:

	SceneManager() :currentScene(nullptr), currentSceneName("") {}
	~SceneManager()
	{
		//map �� ����� ��� ���� ���鼭 ����
		for (auto& pair : scenes)
		{
			delete pair.second;
		}
	}

public:

	//���� �߰��ϴ� �Լ�
	void AddScene(const string& name, Scene* scene)
	{
		scenes[name] = scene; //���� �̸��� Ű������ �ϰ� �����͸� ������ ����
	}

	//���� �����ϴ� �Լ�
	void RemoveScene(const string& name)
	{
		auto it = scenes.find(name);//�� �̸����� map���� ã��.
		//���� �����ϸ�
		if (it != scenes.end())
		{
			delete it->second;//�������� �Ҵ�� �� ��ü ����
			scenes.erase(it);//map ���� ����
		}
	}

	void SceneManager::AddScene(const std::string& name, const std::string& desc)
	{
	}

	//���� �����ϴ� �Լ�
	void SetCurrentScene(const string& name)
	{
		auto it = scenes.find(name);//�� �̸��� map���� ã��.

		if (it != scenes.end())
		{
			currentScene = it->second;
			currentSceneName = name;
		}
		else
		{
			cout << "ã�� �� ���� ! " << endl;
		}

	}


	//����ϴ� �Լ�

	void ShowCurrentScene() const
	{
		if (!currentSceneName.empty())
		{
			cout << "���� ��: " << currentSceneName << endl;
			cout << "����: " << currentScene->GetDescription() << endl;
		}
		else
		{
			cout << "���� ������ ���� �����ϴ�." << endl;
		}
	}


};



int main()
{
	//key == string , �� == Armor��ü
	//map<string, Armor>armorMap;
	//armorMap.insert(make_pair("helmet", Armor("ö����", 5)));
	//armorMap.insert(make_pair("sheild", Armor("��������", 5)));
	//armorMap.insert(make_pair("greaves", Armor("�Ź�", 5)));
	//armorMap.insert(make_pair("������", Armor("����", 5)));

	//cout << "��ü �� ��� : " << endl;
	//for (const auto& pair : armorMap)
	//{
	//	cout << "Ű�� : " << pair.first << endl;
	//	cout << "�� �̸� : " << pair.second.GetName() << endl;
	//	cout << "���� : " << pair.second.GetDef() << endl;
	//	cout << endl;
	//}
	//cout << "========================================================" << endl;

	//string searchKey;
	//cout << "�˻��� ���� Ű�� �Է��ض� : ";
	//cin >> searchKey;

	//auto it = armorMap.find(searchKey);

	//if(it !=armorMap.end())
	//{
	//	cout << "ã�� ��" << endl;
	//	cout << "�̸� : " << it->second.GetName() << endl;
	//	cout << "���� : " << it->second.GetDef() << endl;
	//}
	//else
	//{
	//	cout << "���� ã�� �� ���� ! " << endl;
	//}


	SceneManager* sceneManager = new SceneManager();

	sceneManager->AddScene("Main Menu", new Scene("���� �޴� : ���� , �ɼ� , ����"));
	sceneManager->AddScene("Level 1", new Scene("���� 1 : ù��° ����"));

	sceneManager->SetCurrentScene("Main Menu");
	sceneManager->ShowCurrentScene();

	sceneManager->SetCurrentScene("Level 1");
	sceneManager->ShowCurrentScene();

	sceneManager->RemoveScene("Main Menu");

	sceneManager->SetCurrentScene("oooo");
	sceneManager->ShowCurrentScene();

}