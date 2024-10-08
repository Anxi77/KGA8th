/*
==================================================================================
*������ ������(Operator Overloading)
- ����� ���� �ڷ����̳� Ŭ������ �����ڸ� ������ �Ͽ� ���� �ǹ̷� ����Ѵ�.
- ��ü���� �������, ��, ���� ���� �����ϰ� �Ѵ�.
- ��, �Ϻ� �����ڴ� �����ε��� �� �� ����.

<������ ������>
//��ȯ�� operator�����ڱ�ȣ(�Ű�����){�Լ�����}
//�⺻ �������� ������ �Լ��� �������Ͽ� ����� ����
==================================================================================
const : ��� (������ �ʴ� ��)
��const int(�ڷ���) num(������)
�������Ͱ� ������� �ʵ��� ��ȣ���ش�.
���ǵ����� ���� ������ ������ ����
�������� , ������ , ���� ��� �پ��� ���� ����� �����ϴ� .
*/




#include <iostream>

const int MAX = 10;

using namespace std;

struct Point
{
	float x;
	float y;

	Point(float x, float y) //������ C++������ ������
	{
		this->x = x; // this : �� �ڽ��� ����Ű�� ������
		this->y = y;
	}
	//1.����Լ��� ���� ������ ������
	Point operator+(const Point& other)
	{
		return Point(this->x + other.x, this->y + other.y);
	}
	void Test()const
	{
	}
	//Point ����ü�� ����Լ�
	void Print()const //const�� ����� �Լ� ���ο����� const�� ������� ���� �Լ��� ȣ���� �� ����.
	{
		Test();
		cout << "(" << x << " , " << y << ")" << endl;
	}
	float GetX()const //�б����� �Լ��� �����Ѵٴ� ��(��������� �������� �ʰڴ�)
	{
		return this->x;
	}
};


//2.�����Լ��� ���� ������ ������
Point operator-(const Point& left,const Point& right)
{
	return Point(left.x - right.x, left.y - right.y);
}

void PrintArr(const int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	//arr[0] = 5; �迭 ���� �Ұ�

	int* n = new int n;
}


int main()
{
	int arr[MAX];

	for (int i = 0; i < MAX; i++)
	{

	}

	Point vec1 = Point(2, 1);
	Point vec2 = Point(3, 1);

	Point add = vec1 + vec2;
	Point sub = vec1 - vec2;

	add.Print();
	sub.Print();



}