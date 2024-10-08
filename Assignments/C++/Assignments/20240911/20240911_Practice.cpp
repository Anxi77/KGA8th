/*
1.������ �����ε��� �̿��Ͽ� ���ϱ⸦ �����.
2.��Ʈ�� Ŭ������ �̿��Ͽ� ���ڿ��� �����´�.
ex) input : abcde -> out edcba
3.���ڿ� �� Ư�� ���� ���� ã��.
ex) input : aabbccddddd
���� ã������ �ϴ� ���� : d
output : 5

���� : Ŭ������ �����ΰ�?
*/

#include <iostream>

using namespace std;

struct oprs
{
	int x;
	int y;

	oprs(int x, int y) //������ C++������ ������
	{
		this->x = x; // this : �� �ڽ��� ����Ű�� ������
		this->y = y;
	}

	oprs operator*(const oprs& other)
	{
		return oprs(this->x * other.x, this->y * other.y);
	}

	void print() 
	{
		cout << "(" << x << " , " << y << ")" << endl;
	}
};

void sep()
{
	for(int i = 0; i <97; i++)
	{
		cout << "*";
	}
	cout << endl;
}

void opol()
{
	int x, x1, y, y1;
	x = 0;
	x1 = 0;
	y = 0;
	y1 = 0;
	oprs loc1 = oprs(x, y);
	oprs loc2 = oprs(x1, y1);
	oprs times = loc1 * loc2;
	cout << "Enter X cordinate of first Location : ";
	cin >> x;
	cout << "Enter X cordinate of second Location : ";
	cin >> x1;
	cout << "Enter Y cordinate of first Location : ";
	cin >> y;
	cout << "Enter Y cordinate of second Location : ";
	cin >> y1;
	
	cout << "(X * X' , Y * Y') = ";

	times.print();
}

void revstr()
{
	string src;
	cout << "Please Enter Pharse to Reverse : ";
	cin >> src;
	string res;


	for (int i = 0; i <= src.length(); i++)
	{
		res += src.substr(src.length() - i, 1);
	}
	cout << endl;
	cout << "After Reverse : " << res << endl;
}

void revstrswap()
{
	string src;
	cout << "Please Enter Pharse to Reverse : ";
	cin >> src;
	int leng = 0;
	leng = src.length();

	if(leng/2 == 0)
	{
		for (int i = 0; i < (leng / 2); i++)
		{
			char temp;

			temp = src[i];
			src[i] = src[leng - i];
			src[leng - i] = temp;
		}
	}
	else 
	{
		for (int i = 0; i < leng / 2; i++)
		{
			if(i == leng /2)
			{
				continue;
			}
			else
			{
				char temp;

				temp = src[i];
				src[i] = src[leng - (i+1)];
				src[leng - (i+1)] = temp;
			}
		}
	}
	cout << endl;
	cout << "Reversed : " << src << endl;
}

void findstrnum()
{
	string src;
	string key;
	cout << "Enter Phrase : ";
	cin >> src;
	cout << "Enter a Keyword to find : ";
	cin >> key;

	int leng;
	leng = src.length();
	int res = 0;

	for(int i = 0; i < leng; i++)
	{
		if(src.substr(leng-i,1)== key)
		{
			res++;
		}
	}
	cout << endl;
	cout << "There is " << res << "amount of" << key << "is in" << src << endl;
	
}

void selectone()
{
	bool bEsc = true;
	int trig = 0;
	
	while(bEsc)
	{
		int trig = 0;
		int cont = 0;
		
		sep();
		cout << endl;
		cout << "1) Reverse String C++" << endl;
		cout << "2) Reverse String C" << endl;
		cout << "3) Find Specific char in String" << endl;
		cout << "4) Operator Overloading" << endl;
		cout << endl;
		cout << "Choose one to Execute : ";
		cin >> trig;
		sep();
		if(trig == 1)
		{
			cout << endl;
			revstr();
		}
		else if(trig == 2)
		{
			cout << endl;
			revstr();
		}
		else if(trig == 3)
		{
			cout << endl;
			revstrswap();
		}
		else if(trig == 4)
		{
			cout << endl;
			opol();
		}
		else
		{
			cout << endl;
			cout << "Please Enter Valid Number !!!" << endl;
		}
		sep();
		cout << "Press 1 to Select Other One or 2 to Quit : ";
		cin >> cont;
		while(cont!=1 || cont!=2)
		{
			if(cont == 1)
			{
				break;
			}
			else if (cont == 2)
			{
				bEsc = false;
				break;
			}
			else
			{
				cout << "Please Enter Valid Number !!!" << endl;
			}
		}
		sep();
	}
}

int main ()
{
	selectone();
}