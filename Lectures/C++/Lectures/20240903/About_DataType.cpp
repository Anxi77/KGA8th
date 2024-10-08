#include<iostream>

/*
=================Data Type================
- �ڷ����� �����͸� ǥ���ϴ� ���
�� ������ �������� ������ ���� �Ҵ�� �޸� ������ ������ �̸�
�� �޸� ������ �Ҵ翡 �ռ� ������ �Ǽ��� ������ ������ �����ؾ���
�� ���� �������� �����Ѵٰ� �����Ҷ� �� ����Ʈ�� ����� ������ �����ؾ���.
�� "������ ������ ���ε� ũ�⸦ 4byte�� �ϰ� �̸��� num ���� ��.

===�⺻�ڷ����� ������ �������� ǥ������===

�ڷ���			ũ�� (byte)
 ������
char			1
short			2
int				4
long			8
long long		8

 �Ǽ���
float			4
double			8

 ���� ����
bool

*CPU�� 4Byte �� ��� ����ϴ°��� ������ (int)*
*��ǻ�͵� �Ҽ��� ������ ����ϰ�Ǹ� ���� �߻� (�ԽǷ����� ���밪 ���� ����)*
*/

int main() {
	std::cout << "int �� ũ�� : " << sizeof(int) << " ����Ʈ " << std::endl;
	std::cout << "short �� ũ�� : " << sizeof(short) << " ����Ʈ " << std::endl;
	std::cout << "char �� ũ�� : " << sizeof(char) << " ����Ʈ " << std::endl;
	std::cout << "long �� ũ�� : " << sizeof(long) << " ����Ʈ " << std::endl;
	std::cout << "long long �� ũ�� : " << sizeof(long long) << " ����Ʈ " << std::endl;
	std::cout << "float �� ũ�� : " << sizeof(float) << " ����Ʈ " << std::endl;
	std::cout << "double �� ũ�� : " << sizeof(double) << " ����Ʈ " << std::endl;
	std::cout << "bool �� ũ�� : " << sizeof(bool) << " ����Ʈ " << std::endl;

	std::cout << "====================================" << std::endl;

	////ASCII �ڵ�� ���� ���� (������ <-> ������)
	//int a = 'b';
	//char num1 = 100;

	//std::cout << a << std::endl;
	//std::cout << num1 << std::endl;

	char num1 = 1;
	char num2 = 2;

	char result = 0;

	short num3 = 300;
	short num4 = 200;
	short result1 = 0;

	std::cout << " ���� num1�� ������ : " << sizeof(num1) << "����Ʈ" << std::endl;//1
	std::cout << " ���� num2�� ������ : " << sizeof(num2) << "����Ʈ" << std::endl;//1
	std::cout << " ���� result�� ������ : " << sizeof(num2) << "����Ʈ" << std::endl;//1
	std::cout << "==========================" << std::endl;
	std::cout << " ���� num3�� ������ : " << sizeof(num3) << "����Ʈ" << std::endl;//2
	std::cout << " ���� num4�� ������ : " << sizeof(num4) << "����Ʈ" << std::endl;//2
	std::cout << " ���� result1�� ������ : " << sizeof(result1) << "����Ʈ" << std::endl;//2

	std::cout << " char ���� num1+num2�� ������ " << sizeof(num1 + num2) << "����Ʈ" << std::endl;//4
	std::cout << " short ���� num3+num4�� ������ " << sizeof(num3 + num4) << "����Ʈ" << std::endl;//4

	float a = 3.141592;

	std::cout << a << std::endl;

	//PC�� 4����Ʈ�� ����� �������� , ��Ȳ�� ���� Data Type ���� �ʿ�
}