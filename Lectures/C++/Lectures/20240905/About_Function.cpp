/*
�Լ� (Functions)
- Ư�� �۾��� �����ϴ� �ڵ��� ����
- �ڵ��� ������ , ������ �����ϱ� ����.
- ������ Ŀ���� ���α׷��ϼ��� ���� , ���������� ��ƴ�.
����ɺ��� ����ȭ ��Ű�°��� �ʿ��ϴ�.
- �ڵ��� ���뼺�� ����

�⺻������ �Լ��� �Ű�����(Parameter) ��, ���� ��ȯ(return)���� ������ ���� �Լ��� 4���� ���·� ������ �ִ�.

1. �Ű������� ��ȯ���� ��� �ִ� ���
2. �Ű������� �ְ� ��ȯ���� ���� ���
3. �Ű������� ���� ��ȯ���� �ִ� ���
4. �Ű������� ��ȯ���� ��� ���� ���

*/
//1. ��������
/*
 - �߰�ȣ ���� ����Ǵ� ���� ��� �����̴� .
 - Ȱ�� ������ ������ ����� ��� �������� ��ȿ�ȴ�.
 - ���������� ����� �ִ��� �����ؾ��Ѵ� . 
*/

#include <iostream>

//1. �Ű������� ��ȯ���� ��� �ִ� ���
int Sum(int a, int b)//int (��ȯ��/����� ����) Sum(�Լ��� �̸�) int a, int b (�Ű����� / �Է°�)
{
	int res = a + b;
	//��ȯ Ÿ�Կ� �°� ��ȯ�ؾ��� e.g)int ���� str ���ڿ�
	return res;
}

//2. �Ű������� �ְ� ��ȯ���� ���� ���

void MyPrint(int num) 
{
	std::cout << num << std::endl;
}

//3. �Ű������� ���� ��ȯ���� �ִ� ���

int ReadNum() 
{
	int num;
	std::cin >> num;
	return num;
}

//4.�Ű������� ��ȯ���� ��� ���� ���

void Print() 
{
	std::cout << "�ƹ��͵� ����." << std::endl;
}

void LocalVariable()
{
	//��������
	int num = 1;
	{
		num = 2;

		int num1 = 5;
	}
	
	std::cout << num << std::endl;
	//std::cout << num1 << std::endl;
}

int GlobalVariable = 10; //��������

void GlobalVariable() 
{
	std::cout << GlobalVariable << std::endl;
}

//local global
int main() 
{
	//1.
	int result;
	result = Sum(1, 2);
	std::cout << "Sum() �Լ� ȣ�� ��� : " << result << std::endl;

	//2.
	MyPrint(5);

	//3.
}