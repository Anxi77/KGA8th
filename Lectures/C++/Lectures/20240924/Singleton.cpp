/*
- singleton
������ �Ѱ��� �ν��Ͻ����� ������ ����
���� �ƹ��� ���� ��ü�� �����ص� �� �ϳ��� �ν��Ͻ����� �����ѰͰ� ����.
��Ŭ������ ��ü�� ���簡 �Ǹ� X. 
*/
#include<iostream>

using namespace std;
class Singleton 
{
private:
	Singleton() {
		cout << "�̱��� �ν��Ͻ� ����" << endl;
	}
	~Singleton(){}

	//��������ڿ� ���Կ����� ���
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
public:

	static Singleton& GetInstance() 
	{
		static Singleton inst;
		return inst;
	 }

	void Print() {
		cout << "���� �̱����̶����" << endl;
	}
};

int main() {

	Singleton& s1 = Singleton::GetInstance();
	s1.Print();

	Singleton& s2 = Singleton::GetInstance();
	s1.Print();

	if (&s1 == &s2) {
		cout << "���ƿ�!@" << endl;
	}


}
