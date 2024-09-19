/*
string
-C++���� �����ϴ� ���ڿ��� �ٷ�� ���� Ŭ����
-C ��Ÿ���� ���ڹ迭���� ���� �����ϰ� �����ϴ�.
-���ڿ��� ũ�⸦ �ڵ����� ����
-���ڿ� �� ���� ���� �˻� ���� �پ��� ��� �Լ����� �����Ѵ�.

*/

#include <iostream>

using namespace std;

int main()
{
	string str = "Hello";
	string name = "Kyungil";
	string result;
	cout << "string Ŭ������ ����� ��� : " << str << endl;
	
	//���ڿ��� ���� ���(���� ��ȯ)
	cout << "str�� ���� : " << str.length() << endl;
	cout << "str�� ���� : " << str.size() << endl;
	
	//���ڿ��� ����
	result = str + " , " + name + " !! ";
	cout << "������ : " << result << endl;
	//substr : �κ� ���ڿ� ���� : Ư�� ��ġ���� ������ ���̸�ŭ �κ� ���ڿ��� �����Ѵ�.
	string sub = result.substr(0, 5);
	cout << sub << endl;
	cout << endl;
	//replace : ���ڿ� ��ü(���ڿ��� Ư�� �κ��� �ٸ� ���ڿ��� ��ü)
	//.replace(0(������ġ),3(�ٲ� ����),"Hi"(��ü�� ���ڿ�))
	result.replace(0, 3, "Hi");
	cout << result << endl;
	cout << endl;
	//.empty : �ش� ���ڿ��� ����ִ��� Ȯ��
	if(str.empty())
	{
		cout << "�������"<<endl;
	}
	else
	{
		cout << "������� �ʴ�"<<endl;
	}
	cout << endl;
	//append : ���ڿ��� ���� �ٸ� ���ڿ� �߰�
	result.append("game");
	cout << result << endl;
	cout << endl;
	string test = "Hello World";
	//insert : ���ڿ��� ������ ��ġ�� �ٸ� ���ڿ� ����
	test.insert(5, "-");
	cout << "insert : " << test << endl;
	//erase : ���ڿ��� ������ ��ġ�� ������ ���̸�ŭ�� ���ڿ� ����
	test.erase(5, 2);
	cout << "erase : " << test << endl;
}
