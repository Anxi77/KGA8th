#include <iostream>

using namespace std;

//������ ��� �ʱ�ȭ ����Ʈ
//��������� ������ ���� �ȿ��� �ʱ�ȭ �Ǳ� ���� ���� �ʱ�ȭ
//��������� ���� �����ǰ� ���߿� ���� �����ϴ� �ͺ��� ȿ�����̴�.
//������ �Ű����� �ڿ� ���� ':' �ݷ����� ������ ���� �ʱ�ȭ �� �� �������� ��ǥ�� �����Ͽ� �����Ѵ�.
//��� , ���� ��������� �ִٸ� �ݵ�� ����ʱ�ȭ ����Ʈ�� ����Ͽ� �ʱ�ȭ�� �����ؾ� �Ѵ� .


//destructor(�Ҹ���)
//��ü�� �Ҹ�ɶ� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�.
//���� �޸𸮸� �Ҵ� �����Ҷ� ����Ѵ�.
//�Ű������� ���� �� ���� . ��ȯ�� X �����ε��� �Ұ���


class Exam
{
public:
	//const
	const int num;

	//����
	int& score;
	//Exam()//���ȭ �Ǿ��ִ� ������ , ����Ÿ���� ��쿣 �������� �ʱ�ȭ�� �Ұ����ϴ� .  �ʱ�ȭ ����Ʈ�� ���� �ؾ��Ѵ�.
	//{
	//	//num = 1;
	//	score = 2;
	//}
	
	//����� ����������� �ݵ�� �Ʒ��� ���� ��� �ʱ�ȭ ����Ʈ�� Ȱ��.
	Exam(int num, int scord):num(num), score(score)
	{

	}
	
};

class MyClass
{
public:
	MyClass(int size);
	~MyClass();

private:
	int* data;
};

MyClass::MyClass(int size)
{
	data = new int[size]; //��ü�� ������ �迭�� �Ѵ� . 
	cout << "���� ������ ����" << endl;
}

MyClass::~MyClass()
{
	delete[] data;//�ݳ��ϰڴٴ� ��.
	data = nullptr;
	cout << "���� �Ҹ��� ����" << endl;

}

class Monster 
{
private:

	string name;
	int mAtk;
	int mHealth;

public:
	//������ ���� �� ��� �ʱ�ȭ ����Ʈ
	Monster(const string& monsterName, int monsterAtk, int monsterHealth)
		: name(monsterName), mAtk(monsterAtk), mHealth(monsterHealth)
	{
		//���⼭ ���� �ʱ�ȭ �� �ʿ䰡 ���� .
	};
};

int main()
{
	MyClass* m = new MyClass(10);

	delete m;
	m = nullptr;

}