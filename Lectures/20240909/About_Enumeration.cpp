/*
---------����� ���� �ڷ���---------

Ŭ���� , ����Ÿ�� , ����ü

-������
��������տ� �̸��� �ٿ��� ����ϴ� ������Ÿ��
���ڵ��� �������� ����
���⺻������ ����Ÿ������ ó���� �Ǹ� �ڵ����� 0���� 1�� �����Ѵ�.
����������� ���� ������ �� �ִ�.

	//������(C++11 ����)
	enum MyEnum
	{

	};
	//���� ��� ������(C++11 ���� ����)
	//�̸� �浹�� ����. Ÿ�Կ� ���� �������� ����
	enum class MyEnumClas
	{

	};

*C Style�� ����ȯ*
* C������ �ΰ����� ����ȯ�� �ַ� ����
- ������ ����ȯ (TypeCasting)
�� �����Ϸ��� �ڵ����� ������.
e.g)
int a = 5;
float b = 3.14;
float res = a+b; <- ����Ÿ���̾��� a�� floatŸ������ ��ȯ���ش�.

-����� ����ȯ
�������(���α׷���)�� ���� ��ȯ�� ����Ѵ�.()

int a = 5;
float b = 3.14;
int res = a+(int)b;

*C++ �� ����ȯ*
e.g)
int a = 10;
-static_cast<double>(a)

*/




#include <iostream>

using namespace std;


enum Color
{
	Red,    //0
	Green,  //1
	Black   //2
	//������ �׸��� , �� ���� �ʴ´�
};

enum maptype
{
	jungle,
	tundra,
	desert
};

class map
{
public:
	string intro;
};

enum Direction
{
	Left = 1, //��������� ���� ���� ����.
	Right,
	Up,
	Down
};
enum class Location
{
	Inven,
	Town,
	Shop
};
enum class Character
{
	Knight = 1,
	Archer,
	Mage,
	None

};

Character GetCharacter(int n)
{
	switch(n)
	{
	case 1: return Character::Knight;
	case 2: return Character::Archer;
	case 3: return Character::Mage;
	}
}

int main()
{
	map m;
	m.intro = maptype.desert;


	Color c = Red;
	cout << c << endl;
	Location loc = Location::Inven; // �������� ������::�� ���Ͽ� ��������� ����Ÿ���� �����ؾ��Ѵ�.

	switch (c)
	{
	case Red:
		cout << "������" << endl;
		break;
	case Green:
		cout << "�ʷϻ�" << endl;
		break;
	case Black:
		cout << "������" << endl;
		break;
	default:
		break;
	}

	//�Ϲ������� ����ȯ�� ����
	int dirSelect;
	cin >> dirSelect;
	switch (dirSelect)
	{
	case Direction::Left:
		cout << "����" << endl;
		break;
	case Direction::Right:
		cout << "������" << endl;
		break;
	case Direction::Up:
		cout << "��" << endl;
		break;
	case Direction::Down:
		cout << "�Ʒ�" << endl;
		break;

	}


	int characterSelect;
	cin >> characterSelect;

	Character selectCharacter = static_cast<Character>(characterSelect);

	//������� enum class�� ��������� ����ȯ�� �������.
	switch (selectCharacter)
	{

	case Character::Knight:
		cout << "����Ʈ�� ����" << endl;
		break;
	case Character::Archer:
		cout << "��ó�� ����" << endl;
		break;
	case Character::Mage:
		cout << "�������� ����" << endl;
		break;
	default:
		break;
	}

	Character ch = Character::None;
	int input;
	cin >> input;
	ch = GetCharacter(input);


	


	switch(loc)
	{
	case Location::Inven:
		break;
	case Location::Town:
		break;
	case Location::Shop:
		break;
	default:
		break;
	}
}
