#include <iostream>

using namespace std;


struct student
{
	int age;
	string name;
};

void calculate(student* s)
{
	s->age; //�����ͷ� ����ü �ȿ� �ִ� ��ҿ� �����Ϸ��� ->�� �̿��Ͽ� ������ �����ϴ�.
}

int main()
{
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pnum = num;
	int sum = 0;
	//for(int i = 0; i < 10; i++)
	//{
	//	sum += *(pnum + i);
	//}
	while(pnum-num<10)//�����Ͱ� �迭�� ���� ���� ���������� �ݺ�
	{
		sum += *pnum;
		pnum++;
	}
	cout << "�հ�� : " << sum << endl;

}