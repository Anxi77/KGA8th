/*
����3. ���ڿ� �� �ܾ�ã��
*/

#include <iostream>
#include <string>

using namespace std;

int CountWord(const string& str)
{
	int word = 1;
	
	
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == ' ')
		{
			word++;
		}
	}

	return word;
}

int main ()
{
	string str = "���� ���￡ ��� ȫ�浿 �Դϴ� ��� �� �� �˾���";
	cout << str << endl;
	cout << "���ڿ� �� �ܾ� ������ : " << CountWord(str) << endl;
}