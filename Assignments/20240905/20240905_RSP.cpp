//4. ���������� ���׷��̵� �ϱ�
//-������������ �������� �ֱ�
//��10������ ����
//�����þ��� �����ݺ��� ū ���
//-�÷��̾� ������ ���� (10000��)
//-������ �Ҽ� �ִ�.(�����ݺ��� ū �ݾ�X(����ó��), �ּ� ���þ��� 100)
//-�÷��̾� �¸��� -> ���ñ��� *2 ����
//-���ºν� -> ���ñ� �����
//-�÷��̾� �й�� ->���ñ��� *2 ����

#include <iostream>

int gamemoney(int gmoney, int betmoney, int result) // �� ��� �Լ�
{
	int sum;

	if (result == 0)
	{
		sum = gmoney + betmoney;
	}
	else if (result == 1)
	{
		sum = gmoney - betmoney * 2;
	}
	else if (result == 2)
	{
		sum = gmoney - betmoney;
	}

	return  sum; 

	
}


int maingame()
{
	int player;
	std::srand(std::time(NULL));
	int cpu = std::rand() % 3 + 1;


	std::cout << "1) ���� 2) ���� 3) �� �� �Ѱ��� �Է����ּ���" << std::endl;
	std::cin >> player;
	if (4 > player > 0)
	{
		switch (player)
		{
		case 1:
			std::cout << "������ �Է����ּ̽��ϴ� ." << std::endl;
			break;
		case 2:
			std::cout << "������ �Է����ּ̽��ϴ� ." << std::endl;
			break;
		case 3:
			std::cout << "���� �Է����ּ̽��ϴ� ." << std::endl;
			break;
		default:
			break;
		}
	}
	std::cout << "CPU�� ����� ��÷�ϰڽ��ϴ� ." << std::endl;

	if (3 > cpu > 0)
	{
		switch (cpu)
		{
		case 1:
			std::cout << "CPU�� ����� ����" << std::endl;
			break;
		case 2:
			std::cout << "CPU�� ����� ����" << std::endl;
			break;
		case 3:
			std::cout << "CPU�� ����� ��" << std::endl;
			break;
		}
	}

	std::cout << "���� ���� �� �� ����� : ";

	int count;
	count = 0;

	if (player >= 1 && player <= 3)
	{
		if ((player == 1 && cpu == 1) || (player == 2 && cpu == 2) || (player == 3 && cpu == 3))
		{
			std::cout << "���º� �Դϴ� !!!" << std::endl;
			count = 2;
		}
		else if ((player == 1 && cpu == 2) || (player == 2 && cpu == 3) || (player == 3 && cpu == 1))
		{
			std::cout << "�÷��̾��� �й� !!!" << std::endl;
			count = 1;
		}
		else if ((player == 1 && cpu == 3) || (player == 2 && cpu == 1) || (player == 3 && cpu == 2))
		{
			std::cout << "�÷��̾��� �¸� !!!" << std::endl;
			count = 0;
		}
	}
	else
	{
		std::cout << "��ȿ���� ���� �����Դϴ�." << std::endl;
	}

	return count;

}

int rsp()
{
	std::cout << "=====================���������� ����========================" << std::endl;
	int usermoney;
	usermoney = 10000; // �÷��̾��� ���� �ݾ� �ʱ�ȭ
	for (int i = 10; i >= 0; i--)
	{
		if (usermoney < 0)
		{
			std::cout << "�÷��̾��� �й� !!! " << std::endl;
			return 0;
		}
		std::cout << "������ �����ϰڽ��ϴ� ." << std::endl;
		std::cout << "������ 100 gold �̻� ���� �����մϴ� ." << std::endl;
		std::cout << std::endl;
		std::cout << "���� �÷��̾��� ������ : " << usermoney << " Gold" << std::endl;
		std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

		int betmoney;
		std::cout << "�����Ͻ� �ݾ��� �Է����ּ��� : ";
		std::cin >> betmoney; // �÷��̾��� ���� �ݾ� ����
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << std::endl;
		if (betmoney >= 100 && betmoney < usermoney)
		{
			int count; // ���� ���� ���� ����
			count = maingame(); // ���� ���ο� ���� ���� ���������� ���� �Լ����� �޾ƿ���
			usermoney = gamemoney(usermoney, betmoney, count);
			std::cout << " �÷��̾��� ���� ���� �ݾ� : " << usermoney << std::endl;
			std::cout << "=====================================================" << std::endl;
			std::cout << std::endl;
		}
		else (betmoney <= 100 || betmoney > usermoney);
		{
			std::cout << "��ȿ�� ���ڸ� �Է��� �ּ���" << std::endl;
			std::cout << "=====================================================" << std::endl;
		}
		

	}
}

int main()
{
	rsp();
}