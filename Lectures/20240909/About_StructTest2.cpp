#include <iostream>

using namespace std;


struct student
{
	string name;
	int age;
	int phonenumber;

	void findinfobyphonenumber();
};

void findinfobyphonenumber(int phonenumber, student st[])
{
	for(int i = 0; i < 3; i++)
	{
		if(phonenumber == st[i].phonenumber)
		{
			cout << "�Է����ֽ� ��ȭ��ȣ�� �л����̸��� : " << st[i].name;
		}
	}
}

int main()
{

	
	student st[3];

	for (int i = 0; i < 3; i++) 
	{
		cout << "�л��� �̸��� �Է��� �ּ��� : ";
		cin >> st[i].name;
		cout << "�л��� ��ȭ��ȣ�� �Է��� �ּ��� : ";
		cin >> st[i].phonenumber;
	}
	
	int phonenumber = 0;
	cout << "ã���� �л��� ��ȭ��ȣ�� �Է��� �ּ��� : ";
	cin >> phonenumber;
	findinfobyphonenumber(phonenumber,st);
}