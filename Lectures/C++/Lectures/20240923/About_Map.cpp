/*
Map
-���������̳�, ������ �����̴�.
-���� �����̳� �� ����ϰ� ����Ѵ�.
�� key �� value ������ ����ȴ� (pair)
�� �ܺ������� 2���˻� Ʈ���� �����Ǿ��ִ� (Red Black Tree)
�� ���ΰ� �ؽ����̺�� �����Ǿ� �ִ�.
�� key(������)�� �����̳ʿ� �ߺ������� �� �� ����.
*/

#include <iostream>
#include <map>

using namespace std;
int main() 
{
	map<string, int>data;
	//�ݺ���
	map<string, int>::iterator iter;

	//1.value_type�� �̿��Ͽ� ���� ����
	//�⺻���� Ű �� �� Ÿ���� ��Ÿ����. �� ����� ��������� pair ��ü�� �����Ͽ� insert�� ����
	//�������� �ټ� ������
	data.insert(map<string, int>::value_type("G", 5));

	//2.make_pair : pair ��ü�� �����ϴ� �Լ� ���ø�.
	//(make_pair("A", 7)) std::pair<string , int>Ÿ���� ��ü�� ����
	//������ ���
	//���ø� ���ڸ� �ڵ����� �߷��ϹǷ� Ÿ���� ��Ȯ���� ���� �� ����
	//������ Ÿ���� �ٷ� ������ ������� Ÿ�� ������ �ʿ��Ҽ� �ִ�.
	data.insert(make_pair("A", 7));

	//3.pair�� �̿��� ��� : Ű-�� ������ ��������� �����Ͽ� ����
	//��Ȯ�� Ÿ�� ������ ���� �������� ���� �� �ִ�.
	data.insert(pair<string, int>("��", 12));
	data.insert(pair<string, int>("ȭ", 12));
	data.insert(pair<string, int>("��", 12));
	data.insert(pair<string, int>("��", 12));
	data.insert(pair<string, int>("��", 12));

	//4. ��ü�� ���� �����ϴ� ���
	//pair�� ���ø� ���ڴ� map�� key, value Ÿ�԰� ��ġ�ؾ��Ѵ�.
	//��ü�� ������ �Ŀ� insert�� �ϱ� ������ �ʿ信 ���� ��ü�� �����ϰų� ���� �� �� �ִ�.
	pair<string, int>pt1("��", 300);
	data.insert(pt1);
	//��ü ����
	data.erase("��");
	//���
	for(auto& pair : data)
	{
		 cout << "Ű�� : " << pair.first << " , ������ : " << pair.second << endl;
	}
	
	/*
	find : �־��� key�� ã�� iterator�� ��ȯ. Ű�� �������� ������ end�� ��ȯ.
	clear : map�� ��� ��Ҹ� ����
	at : �־��� Ű�� �ش��ϴ� ���� ����
	*/

	//1.���� ����
	map<string, int>myMap;
	//2.insert�� ����Ͽ� �����͸� �߰�.
	myMap.insert(make_pair("���", 1));
	myMap.insert(make_pair("�ٳ���", 2));
	myMap.insert(make_pair("���ξ���", 3));
	myMap.insert(make_pair("����", 4));
	//�ݺ��ڸ� ����Ͽ� Ű�� ���� ���
	for(auto it = myMap.begin(); it!=myMap.end();++it)
	{
		cout << "Ű : " << it->first << " , �� : " << it->second << endl;
	}
	cout << endl;
	//�ݺ��ڸ� ����Ͽ� Ű�� ���� �������� ���
	for (auto rit = myMap.rbegin(); rit != myMap.rend(); ++rit)
	{
		cout << "Ű : " << rit->first << " , �� : " << rit->second << endl;
	}
}