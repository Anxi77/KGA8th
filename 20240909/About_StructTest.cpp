#include <iostream>

using namespace std;

struct studentInfo
{
	string name;
	double math;
	double english;
	double science;
};

double sum(double math, double english, double science)
{
	int res;
	res = math + english + science;
	return res;
}

double calculateAverage(double math, double english, double science)
{
	int res;
	res = sum(math , english, science) /3;
	return res;
}

int main()
{	
	studentInfo sti[3];
	int studentpick = 0;
	int studentnum = 0;
	bool bEsc = true;
	int endtrig = 0;

	for(int i = 0; i < 3; i++)
	{
		cout << "�л��� �̸��� �Է����ּ��� : ";
		cin >> sti[i].name;
		cout << endl;
		cout << "�л��� ���� ������ �Է����ּ��� : ";
		cin >> sti[i].math;
		cout << endl;
		cout << "�л��� ���� ������ �Է����ּ��� : ";
		cin >> sti[i].english;
		cout << endl;
		cout << "�л��� ���� ������ �Է����ּ��� : ";
		cin >> sti[i].science;
		cout << endl;
		cout << sti[i].name << " �л��� " << endl;
		cout << "���� ���� : " << sti[i].math << endl;
		cout << "���� ���� : " << sti[i].english << endl;
		cout << "���� ���� : " << sti[i].science << endl;
	}

	cout << "�л� ���" << endl;

	while (bEsc) 
	{
		for (int i = 0; i < 3; i++)
		{
			cout << i << ") " << sti[i].name << endl;
		}

		cout << "���Ͻô� �л��� ��ȣ�� �Է����ּ��� : ";
		cin >> studentpick;

		cout << sti[studentpick].name << " �л���" << endl;
		cout << "���� ������ : " << sti[studentpick].math << endl;
		cout << "���� ������ : " << sti[studentpick].english << endl;
		cout << "���� ������ : " << sti[studentpick].science << endl;
		cout << "3 ���� ������ �հ� : " << sum(sti[studentpick].math, sti[studentpick].english, sti[studentpick].science) << " ��" << endl;
		cout << "3 ���� ������ ��� : " << calculateAverage(sti[studentpick].math, sti[studentpick].english, sti[studentpick].science) << " ��" << endl;
		cout << endl;
		cout << "�ٸ� �л��� Ȯ���ϰ� �����ø� (1 , �����ϰ� �����ø� (2 �� �����ּ���" << endl;
		cin >> endtrig;
		while (endtrig != 1 && endtrig != 2)
		{
			if (endtrig == 2)
			{
				bEsc = false;
			}
			else if (endtrig == 1)
			{
				break;
			}
			else
			{
				cout << "��ȿ�� ���ڸ� �Է��� �ּ��� !!" << endl;
			}
		}
	}


}

