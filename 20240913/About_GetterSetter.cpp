




#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
public:

	//get
	string GetName()const { return name; }

	//set
	void SetName(const string& s) { name = s; }

	int GetAge()const { return age; }
	void SetAge(int a) { age = a; }

};
//�غ���.
//�簢�� Ŭ������ �����
//get, set�� Ȱ���Ͽ� ����, ���θ� ����
// ������ ����ϴ� get �Լ��� ������.


int main() {
	Person p;
	p.SetName("ȫ�浿");
	p.SetAge(10);

	cout << "�̸� : " << p.GetName() << endl;
	cout << "���� : " << p.GetAge() << endl;
}