//2. for���� �̿��ؼ� �������� ��� (2��~9��)


#include <iostream>

int main() 
{
	for (int i = 2; i <= 9; i++)
	{
		for (int k = 1; k <= 9; k++)
		{
			int res;
			res = i * k;
			std::cout << i << " x " << k << "=" << res << std::endl;
		}
	}
}