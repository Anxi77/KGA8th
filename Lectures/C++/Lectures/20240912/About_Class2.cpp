/*
constructor
-��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�.
-��ü�� �ʱ�ȭ�� ����Ѵ� .
-Ŭ������ ������ �̸��� ������ ��ȯŸ���� ���� .
-������ �⺻������ , �Ű������� �ִ� ������ , ��������� ���� �ִ�.

1. �⺻������
-�Ű������� ���� ������. 
-��������� �������� �ʴ´ٸ� �����Ϸ��� �ڵ����� �����Ѵ� .

�ǽ� �簢�� Ŭ���� �����
���μ���
���� ����ϴ� �Լ��� ������

*/

#include <iostream>

using namespace std;

class Player
{
private:
	string mName;
	int mAtk;
	int mDef;

public:
	//�⺻������
	Player()
	{
		cout << "���� �������� !" << endl;
	}
	//�Ű������� �ִ� ������
	Player(const string& playerName,const int playerAtk,const int playerDef)
	{
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}
	void PrintInfo()const;


};

void Player::PrintInfo() const
{
	cout << "�̸� : " << mName << endl;
	cout << "���ݷ� : " << mAtk << endl;
	cout << "���� : " << mDef << endl;
}

int main()
{
	//�����Ҵ�
	//Player p;

	//�����Ҵ�
	Player* player = new Player;//��������� �����ڸ� ����Ѱ�
	player->PrintInfo();
	Player* player1 = new Player();

	("����", 10, 20);
	player1->PrintInfo();


	delete player;
	delete player1;

	player = nullptr;//�޸� �������� ���� ������ �ϴ��� �ش� �����ʹ� �ƹ��͵� ����Ű�� �ʴ´ٶ�� ���.
	player1 = nullptr;
}