#include <iostream>

int main() 
{
	int player;
	std::srand(std::time(NULL));
	int cpu = std::rand()%3+1;
	

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

	if (player >= 1 && player <= 3)
	{
		if ((player == 1 && cpu == 1) || (player == 2 && cpu == 2) || (player == 3 && cpu == 3))
		{
			std::cout << "���º� �Դϴ� !!!" << std::endl;
		}
		else if ((player == 1 && cpu == 2) || (player == 2 && cpu == 3) || (player == 3 && cpu == 1)) 
		{
			std::cout << "�÷��̾��� �й� !!!" << std::endl;
		}
		else if ((player == 1 && cpu == 3) || (player == 2 && cpu == 1) || (player == 3 && cpu == 2)) 
		{
			std::cout << "�÷��̾��� �¸� !!!" << std::endl;
		}
	}
	else
	{
		std::cout << "��ȿ���� ���� �����Դϴ�." << std::endl;
	}
}