/*
*���ڹ迭*

-�� �״�� ���ڸ� �����ϴ� �迭.
-���ڿ��� �����Ҷ��� �迭�� �������� null ���ڸ� �߰��Ͽ� ���ڿ��� ���� ǥ���ؾ���.


**C ��Ÿ���� ���ڿ� �Լ� ����
 -strlen(const char* str) : ���ڿ��� ���̸� ��ȯ�Ѵ�.
 -strcpy(char* dest, char* src) : ���ڿ� ����.
 -strcat : ���ڿ� ����
 -strcmp : ���ڿ� ũ�� ��
*/
#include <iostream>


using namespace std;


int main()
{
	//char str[6];
	//char str1[6] = {'H','e', 'l', 'l', 'o','\0'};//'\0' �ι��ڷ� ���ڿ��� �������� ǥ���Ѵٴ� ���̴�.

	//for (int i = 0; i < 6; i++) 
	//{
	//	cout << str1[i];
	//}
	//
	//char str2[] = "Hello"; //�ڵ����� �迭�� ũ�� ���� , �ι��ڵ� ����.

	//for(int i = 0; i < str2[i]!='\0'; i++)
	//{

	//}

	//char str3[] = "�ѱ�"; //�ѱ��� �� ���ڴ� 2����Ʈ�� �����Ѵ�.

	char str1[20] = "Hello";
	char str2[10] = "Kyungil";
	char str3[10];

	cout << "str1�� ���� : " << strlen(str1) << endl;
	cout << "str2�� ���� : " << strlen(str2) << endl;
	cout << endl;
	strcpy_s(str3, str1);
	cout << "strcpy : " << str3 << endl;
	strcat_s(str1, str2);
	cout << "strcat_s : " << str1 << endl;

}