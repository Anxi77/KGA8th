#include <iostream>

int main()
{
	int seasons;
	int input;

	std::cout << "1~12�� �� �ϳ��� �Է����ּ���" << std::endl;
	std::cin >> input;
	if (input > 0) 
	{
		if ( input >= 3 && input <= 5)
		{
			std::cout << "������ ���Դϴ�." << std::endl;
		}
		if ( input >= 6 && input <= 8)
		{
			std::cout << "������ �����Դϴ�." << std::endl;
		}
		if ( input >= 9 && input <= 11)
		{
			std::cout << "������ �����Դϴ�." << std::endl;
		}
		if ( input >= 12 && input <= 2)
		{
			std::cout << "������ �ܿ��Դϴ�." << std::endl;
		}

	}
	else
	{
		std::cout << "1~12 ������ ��ȿ�� ���ڸ� �Է����ּ���";
	}
	

}