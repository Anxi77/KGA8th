/*
2.�Ǻ���ġ���� ����(ù��° �ι�° ���� 1�̰� �� ���� �׺��ʹ� �� �� ���� �հ� ����)
EX) 1, 1, 2, 3, 5, 8, 13
�Ǻ���ġ ������ n��° ����(n - 1) + (n - 2)
*/

#include <iostream>
#include <vector>
using namespace std;

class fibonacci 
{
public:
	vector<unsigned long long>F;
	long fibo(int n)
	{
		cout << "�����" << endl;
		if (n <= 1)
		{
			return 1;
		}
		return fibo(n - 1) +
			fibo(n - 2);
	}
	long long fiboVec(int n)
	{
		unsigned long long result;
		F.push_back(0); //F[0]=0
		F.push_back(1); //F[1]=1
		if (n < 2) //F[0]=0, F[1]=1 ����
		{
			return n;
		}
		else
		{
			for (int i = 2; i <= n; i++)
			{
				F.push_back(F[i - 1] + F[i - 2]);
				//F[i-1],F[i-2]�� �ٽ� ������� �ʰ� ����� ���� ������ ��.
			}
		}
		return F[n];
	}
};




int main()
{
	fibonacci* f = new fibonacci;
	int n = 0;
	cout << "���� �Է� : ";
	cin >> n;
	system("cls");
	cout << "�Ǻ���ġ ������ (" << n+1 << ") ��° ���� : " << f->fiboVec(n) << endl;
} 