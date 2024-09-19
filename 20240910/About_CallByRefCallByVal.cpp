/*

*/


#include <iostream>
using namespace std;

//���� ���� ���� -> callByValue
//�Լ��� �μ��� �����Ҷ� �μ��� ���� ����Ǿ� �Լ��� �Ű������� ���޵ȴ�.
//�Լ� ���ο��� �Ű������� �����ϴ���, ȣ���� �Լ��� ���� �μ��� ������ �ʴ´�.

void Value(int n);


//������ ���� ȣ��
//�Լ� ȣ��� �μ��� ������ �ּҸ� �����ϴ� ���
//�Լ��� �Ű������� ���� ������ ���� ���� �μ��� ���� ���� ���� �����ϴ�.
//�Լ� ���ο��� �Ű������� ���� �����ϸ� ȣ���� �Լ��� ���� �μ��� �����͵� �����.
//���� �����ϴ� ��� �ּҸ� �����ϹǷ� �޸𸮿� ����ȿ���� ���� .
//C style
void Address(int* n);
//C++ Style ������ �ٸ� �̸�(����)�� ����� �Լ��� �ش� ������ ���������Ϳ� ���� �����ϰ� ���������ϰ� �����.
void Reference(int& n);

struct Mystruct
{


};

void T(Mystruct& m); // <- ����ü�� �ѱ�� ���� 

/*
* , & ���� ����� ����?
* -> ������ �޸� �ּҸ� �����ϸ� �Լ� ���ο��� �����͸� ���� ���� ����
 �� �Լ� ȣ��� ������ �ּҸ� ��������� ����
 �� �����ʹ� nullptr �Ǵ� null�� ���� �� �� �ִ�.
 �� �߸��� ���� ��ȿ���� ���� �޸� �������� ���� �߻�����
& -> ������ ��Ī�� �����ϸ� ���ο��� ������ ���� ���� ���� ����
 ���Լ� ȣ��� ������ ������ �Ͻ������� ���� . �� �����ϰ� ��� ����
*/

void Swap(int a, int b);
void Swap_Address(int* a, int* b);
void Swap_Reference(int& a, int& b);

int main()
{
	int* p = nullptr; // ������ ������ �ʱ�ȭ
	int num = 30;
	Value(num);//n=num ���·� ����
	cout << "num�� �� : " << num << endl;
	cout << "num�� �ּҰ� : " << &num << endl;
	cout << "============================" << endl;

	int num1 = 30;
	Address(&num1);
	cout << "num1�� �� : " << num1 << endl;
	cout << "num1�� �ּҰ� : " << &num1 << endl;
	cout << "============================" << endl;

	int num2 = 20;
	Reference(num2);
	cout << "num2�� �� : " << num2 << endl;
	cout << "num2�� �ּҰ� : " << &num2 << endl;
	cout << "============================" << endl;

	int num3 = 10;
	int num4 = 20;
	cout << "���� �� ������ : " << num3 << " , " << num4 << endl;
	Swap(num3, num4);
	cout << "���� �� ������ : " << num3 << " , " << num4 << endl;
	cout << "============================" << endl;

	int swapAddressNum1 = 10;
	int swapAddressNum2 = 20;
	cout << "���� �� ������ : " << swapAddressNum1 << " , " << swapAddressNum2 << endl;
	Swap_Address(&swapAddressNum1, &swapAddressNum2);
	cout << "���� �� ������ : " << swapAddressNum1 << " , " << swapAddressNum2 << endl;
	cout << "===================================================================" << endl;

	int swapRefNum1 = 30;
	int swapRefNum2 = 50;
	cout << "���� �� ������ : " << swapAddressNum1 << " , " << swapAddressNum2 << endl;
	Swap_Address(&swapAddressNum1, &swapAddressNum2);
	cout << "���� �� ������ : " << swapAddressNum1 << " , " << swapAddressNum2 << endl;
	cout << "===================================================================" << endl;

}

void Value(int n)
{
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

void Address(int* n)
{
	*n = 10;
	cout << "n�� �� : " << *n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

void Reference(int& n)
{
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;

}
//�Ʒ��� ���� ���´� ������ �ƴ϶� ���簡 �Ǳ� ������
//num3, num4�� ���� ����� 10,20�� ����ȴ�.
//swap ���ο����� �������� �̷������ main�Լ��� �ִ� num3,num4 ������ ���� �ʴ´�.
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()�Լ� ������ �� : ";
	cout << a << " , " << b << endl;
}
//�ּҰ��� �Ű������� �����ؼ� �����Ϸ��� ������ ����
void Swap_Address(int* a, int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//�������
//&�ּҸ� ��ȯ�ϴ� �����ڰ� �ƴ�
//������ ������ ���� -> �����Ϸ��� �޸𸮸� ����
//������ �ٲ��(������)�����ϴ� ������ ���� ����ȴ�.
void Swap_Reference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}