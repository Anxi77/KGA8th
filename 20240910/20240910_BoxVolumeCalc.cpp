#include <iostream>

//1.box ����ü�� ������ ���޹޾� �� ����� ���� ����ϴ� �Լ��� �����.
//2.box ����ü�� ���޹޾� volume ��� ������ �ٸ� ������ ����� ������ �����ϴ� �Լ��� �����.

using namespace std;

struct Box
{
	string name;
	float height;
	float width;
	float length;
	float volume;
};
void boxinput(Box* b);
void boxinfo(Box& b);
void boxVolume(Box* b);


int main()
{
	Box b;
	
	boxinput(&b);
	boxinfo(b);
	boxVolume(&b);

}



void boxinfo(Box& b)
{
	cout << endl;
	cout << "�Է��Ͻ� �ڽ��� ����" << endl;
	cout << "=============================" << endl;
	cout << "�ڽ��� �̸� : " << b.name << endl;
	cout << "=============================" << endl;
	cout << "�ڽ��� ���� : " << b.height << endl;
	cout << "�ڽ��� �ʺ� : " << b.width << endl;
	cout << "�ڽ��� ���� : " << b.length << endl;
	
}

void boxVolume(Box* b)
{

	b->volume = b->height * b->width * b->length;
	cout << "=============================" << endl;
	cout << "�ڽ��� ���� : " << b->volume;
}

void boxinput(Box* b)
{
	cout << "�ڽ��� �̸��� �Է� �� �ּ��� : ";
	cin >> b->name;
	cout << "�ڽ��� ���̸� �Է� �� �ּ��� : ";
	cin >> b->height;
	cout << "�ڽ��� �ʺ� �Է� �� �ּ��� : ";
	cin >> b->width;
	cout << "�ڽ��� ���̸� �Է��� �ּ��� : ";
	cin >> b->length;
}

