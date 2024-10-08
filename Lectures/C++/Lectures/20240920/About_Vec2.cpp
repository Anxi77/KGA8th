/*
����
1. ���͸� �̿��� ĳ���� ���� ����ϱ�(�ݺ��� ���)



*/

#include <iostream>
#include <vector>

using namespace std;

class Weapon
{
public:
	Weapon(const string& name, int damage)
		:name(name), damage(damage) {}
	void Print()const
	{
		cout << "�̸� : " << name << " , ���ݷ� : " << damage << endl;
	}
private:
	string name;
	int damage;
};


//���͸� ������ �����ϴ� �Լ��� ����ٸ�

void PrintVectorValue(vector<int> vec)
{
	for(auto& vec : vec)
	{
		cout << vec << endl;
	}
}

//���͸� ������ �����ϴ� �Լ�

void PrintVectorRef(vector<int>& vec)
{
	for (auto& vec : vec)
	{
		cout << vec << endl;
	}
}



int main()
{
	//���� ��ü�� ������ ���ͻ���
	vector<Weapon> weapon;

	weapon.push_back(Weapon("���", 50));
	weapon.push_back(Weapon("ȭ��", 50));
	weapon.push_back(Weapon("����", 50));
	weapon.push_back(Weapon("�ܰ�", 50));

	cout << "�������� " << endl;
	//������ ��� ���� ���� ���
	for (const auto& w : weapon)
	{
		w.Print();
	}
	cout << endl;
	vector<Weapon*> weapons;
	weapons.push_back(new Weapon("q��", 10));
	weapons.push_back(new Weapon("����", 10));
	weapons.push_back(new Weapon("����", 10));
	weapons.push_back(new Weapon("����", 10));
	weapons.push_back(new Weapon("����", 10000));

	for(const auto& weapon : weapons)
	{
		weapon->Print();
	}
	for(auto& weapon : weapons)
	{
		delete weapon;
	}

}