/*
Struct
<����ü>
-����ü�� �������� ������ ���� �ϳ��� ������ ������ �����ϴ� ����� ���� ������ �����̴�.
-����ü�� ������ ������ ����� ������ �̷��� ������� ���� �ٸ� ������ Ÿ���ϼ� �ִ�.
-C++������ �Լ��� ������ �����ϴ�.

	struct(����ü��� ���� ����) MyStruct(����ü �̸�)
	{

	};



����
�Լ� , ����ü , ����Ÿ��
������ , ���ھ߱�
�ɰ��� ������ŭ �ɰ�����
�Լ��� ������

ī�带 ��Ÿ���� ����ü
������ ��Ÿ���� ������

����ȭ ����


*/

#include <iostream>

using namespace std;
//Ű���� | ����ü �̸�
struct Student 
{
	string name;// �л��̸�
	int age;
	int phoneNumber;

};
struct Test
{
	short a;//2����Ʈ
	int b;  //4����Ʈ
	char c; //1����Ʈ
};
//CPU -> 4byte�� ����ϴ°��� ������. 4����Ʈ�� ���� ������ , short �� 4����Ʈ�� �����ϰ� �ǰ� , char�� 4����Ʈ�� �����ϰ� �Ǽ� �� ����� 12����Ʈ�� �ȴ�.
struct Point
{
	int x;
	int y;
	void Print();//C++������ �Լ��� ����� �����ϴ�

};
struct Person
{
	string name;
	string phoneNumber;
	int age;
};
struct Point1
{
	double x;
	double y;
};
double CalculateDistance(Point1 p1, Point1 p2)
{
	double deltaX = p2.x - p1.x;
	double deltaY = p2.y - p1.y;

	return sqrt(deltaX * deltaX + deltaY * deltaY);//�������� �����ִ� �Լ�
}
struct StudentInfo
{
	string name;
	int age;
	int math;
	int english;
	int science;
	void calculatePoints();
	
};

void calculatePoints(int math, int english , int science)
{
	int res;
	res = 0;
	res = (math + english + science) / 3;
	cout << "��� ������" << (math + english + science) / 3 << endl;
}
int main()
{
	//����ü ���� ����
	Student st;

	//����ü ����� ���� �Ҵ�
	st.name = "ȫ�浿";
	st.age = 10;
	st.phoneNumber = 1234;

	//����� �Ҵ�� ������ ���
	cout << "�̸� : " << st.name << endl;
	cout << "���� : " << st.age << endl;
	cout << "��ȭ��ȣ : " << st.phoneNumber << endl;

	cout << "=================================================" << endl;
	Point p;
	p.x = 10;
	p.y = 20;
	cout << "����ü p.x�� �� : " << p.x << endl;
	cout << "����ü p.y�� �� : " << p.y << endl;
	p.Print();
	cout << "����ü ����� ���� �ʱ�ȭ" << endl;
	Point p1 = { 50,120 };
	cout << "����ü p.x�� �� : " << p.x << endl;
	cout << "����ü p.y�� �� : " << p.y << endl;
	
	Person per[3];

	per[0].name = "��1��";
	per[0].phoneNumber = "010-1131-1111";
	per[0].age = 11;

	per[1].name = "��2��";
	per[1].phoneNumber = "010-1311-1111";
	per[1].age = 12;

	per[2].name = "��3��";
	per[2].phoneNumber = "010-3111-1111";
	per[2].age = 13;

	cout << per[0].name << per[0].phoneNumber << per[0].age << endl;

	Person st1[3] =
	{
		{"��","12139-113234",60},
		{"��","12133-113234",20},
		{"��","12132-113234",70}
	};
	for (int i = 0;i<3;i++)
	{
		cout << st1[i].name << st1[i].phoneNumber << st1[i].age << endl;
	}

	Point1 point1 = { 1.0,2.0 };
	Point1 point2 = { 4.0,6.0 };

	double distance = CalculateDistance(point1, point2);

	cout << "���������� �Ÿ� " << distance << endl;

	//�л� ���� ���� ������(����ü)
	//�̸�, ����, ����(����, ����, ����)
	//����� ���ϴ� �Լ� �����
	//ex) ȫ�浿 20
	//���� : 20
	//���� : 30
	//���� : 50
	//�� ���� �հ�� ��� ���

	StudentInfo sti;

	sti.name = "ȫ�浿";
	sti.math = 50;
	sti.english = 70;
	sti.science = 80;
	
	cout << "���� : " << sti.name << endl;
	cout << "���� ���� : " << sti.math << endl;
	cout << "���� ���� : " << sti.english << endl;
	cout << "���� ���� : " << sti.science << endl;
	calculatePoints(sti.math, sti.english, sti.science);
 
}
void Point::Print()
{
	cout << "���� Point ����ü�� ����Լ��̴�." << endl;
}
