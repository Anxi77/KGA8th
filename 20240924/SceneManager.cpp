#include "SceneManager.h"

SceneManager::SceneManager()
{
	std::cout << " �� �Ŵ��� �ν��Ͻ� ����" << std::endl;
}

SceneManager::~SceneManager()
{

	for (auto& pair : scenes)
	{
		delete pair.second;
	}
}

void SceneManager::AddScene(const std::string& name, const std::string& desc)
{
	scenes[name] = new Scene(name, desc);
}

void SceneManager::SetCurrentScene(const std::string& name)
{
	if (scenes.find(name) != scenes.end()) {
		currentScene = scenes[name];
		std::cout << "���� ���� " << name << "����" << std::endl;
	}
	else {
		std::cout << "ã�� �� ����." << std::endl;
	}
}

void SceneManager::ShowCurrentScene() const
{
	if (currentScene) {
		currentScene->Print();
	}
	else {
		std::cout << "������ ���� ����" << std::endl;
	}
}
