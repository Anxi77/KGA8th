#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int number[10];

	int dest, sour, temp;

	//�迭 �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		number[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "number[" << i << "]�ε��� : " << number[i] << endl;
	}

	//�����

	for (int i = 0; i < 1000; i++)
	{
		//dest, sour, temp;
		dest = rand() % 10;
		sour = rand() % 10;

		//���õ� �� �ε���(dest, sour)�� �ش��ϴ� �迭 ��� ��ȯ
		//temp ������ ����Ͽ� ���� �ӽ÷� ����_
		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}
	cout << "���� �� !" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "number[" << i << "]�ε��� : " << number[i] << endl;
	}
}