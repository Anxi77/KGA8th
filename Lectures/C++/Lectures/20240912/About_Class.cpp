/*
==========================================
class
-��ü���� ����� ����Ʈ���� ���迡 �־� ���� ������ �����ϴ� ������ ���
�������� �����ϱ� ��ٷӴ�.
-��ü
��Ŭ������ ��ü�� �����ϴ� Ʋ���� ���赵�̴�.(����� ����)
����ü�� ���赵(Ŭ����)�� ������� ��üȭ ��Ű�� ���̴�. -> �׷��� ����� �����ϴϱ�
���ν��Ͻ�ȭ : Ŭ������ ����Ͽ� ��ü�� �����ϴ� ������ �ǹ��Ѵ�.
==========================================

*/
/*
class �ڵ���
{
private:
//�������(�Ӽ�->�ڵ����� �����ϴ� ��ǰ > ���ܾ��Ѵ�.)

public:
//����Լ�(���->�극��ũ,���,�������õ�... > �츮�� �̿��ؾ��Ѵ� -> ����)


}
============================================
-��������������
-private: ���ܾ� �� ��� �������� �̰��� ���
��Ŭ������ default �� �ȴ�.

-public: �ܺο��� �����Ӱ� ������ �� �ִ�.
���ܺο��� ���������� ������� ������ �� �ֱ� ������ ������ ��ɵ� �̰��� ���
-protected : ��� ���迡���� ������ش�.

//��������		Ŭ��������		Ŭ���� �ܺ�		���Ŭ����
//private			O				X				X
//public			O				O				O				
//protected			O				X				O

============================================
*/

#include <iostream>

using namespace std;

class Student
{
public://��������
	Student(); //������
	~Student();//�Ҹ���
	//�ܺο��� ȣ���ϱ� ������ public�� �־���Ѵ�.

	//����Լ�
	void Print() { cout << "��Ʃ��Ʈ Ŭ������ ����Ʈ �Լ�"; }
	void Print(int a, int b) { cout << a << " , " << b << endl; }
	void Print(string str = "����Ʈ �Ű�����") { cout << str << endl; }

	//Ŭ���� ���ο� ������
	int sum(int a, int b);
private://��������

};

int Student::sum(int a , int b)
{
	return a + b;
}

struct Circle : public CCircle
{
//public : ���������� �� �ִ�.
	int radius;
	string color;

	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

class CCircle
{
//private : ���������� �� �ִ�.
	int radius;
	string color;


	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle c;
	c.radius = 5;
	c.calcArea();





}