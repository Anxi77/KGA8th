//2-1. while�� �̿��ؼ� ���ϴ� ������ ���
//��2�� �Է��ϸ� 2�� ���
#include<iostream>

int main()
{
	std::cout << "1~9 ������ ���ڸ� �Է����ּ���" << std::endl;
	int input;
	input = 0;
	while (true)
	{
		std::cin >> input;
		if (input > 9 || input < 1)
		{
			std::cout << "�߸��� �����Դϴ� �ٽ� �Է����ּ���" << std::endl;
		} 
		else
		{
			break;
		}
	}
	for (int k = 1; k <= 9; k++)
	{
		int res;
		res = input * k;
		std::cout << input << " x " << k << "=" << res << std::endl;
	}
}