/*
while

-������ ��(true)�� ���� Ư���ڵ带 �ݺ������ϱ� ���� �ݺ����̴�.
-������ ������ �ɶ����� ��� �ݺ�
-�Ϲ������� �ݺ�Ƚ���� �̸� �������� �ʾҰų� Ư�� ������ �����Ҷ����� �ݺ��ؾ� �ϴ� ��� ���

	while (true)
	{
		//�� ������ �����Ǹ� ���⸦ ����
		//��, ���� ������ �־�߸� �ش� while�� ���ᰡ �ȴ�.
	}

do-while
- ������ ������ ���ο� ������� �ڵ���� �ּ� �ѹ��� �����ؾ� �Ҷ� ����Ѵ�.
- �ٸ� �ݺ������� �ٸ��� ������ ���߿� �˻��ϴ� ���� Ư¡�̴�.

	do
	{
	 //������ �ڵ尡 ����.
	} while (true); --->do ����� ���� �� �Ŀ� ������ �˻��Ѵ�.
	- ������ ���̸� �ڵ带 �ٽ� �����ϰ� �����̸� �����ϰ� �ȴ�.

while�� ������
- do-while�� ������ ���߿� �˻��ϹǷ� �ڵ���� �ּ� �ѹ��� �����Ѵ�.
- while�� ������ ���� �˻��ϱ� ������ ó������ �����̸� �ڵ� ���� �ѹ��� �������� ���� �� �ִ�.

*/

#include<iostream>

int main()
{
	/*while (true)
	{
		std::cout << "*****" << std::endl;
	} �������� �ݺ��ȴ�.
	*/

	//int num = 0;

	////num�� 10���� ������ (���������� �ݺ�)
	//
	//while (num < 10)
	//{
	//	num++;// num�� 1�� �����Ѵ�
	//	std::cout << num << std::endl;
	//}

	///*
	//	while (true)
	//	{
	//		if (num == 10)break;
	//		num++; // 1�� ����
	//		std::cout << num << std::endl;
	//	} //if���� ����Ͽ� ���� ���� ����� ��Ÿ���� �ڵ��̴�.
	//*/
	//std::cout << std::endl;
	//std::cout << "�ƹ� ���ڳ� �Է��� ������" << std::endl;
	//while (true)
	//{
	//	int inputNum;
	//	std::cin >> inputNum;

	//	std::cout << "���� �Է��� ���� : " << inputNum << std::endl;

	//	if (inputNum < 1 || inputNum > 10)break;
	//}

	////while�� �̿��Ͽ� �Է��� ��ŭ ����ϱ�
	////ex)3�� �Է��ϸ� ������ ������ ���� ��µǰ� �ϱ�

	//std::cout << "���ڸ� �Է��Ͻÿ� : ";
	//int inputNum;
	//std::cin >> inputNum;//�Է¿� ����

	//int count = 0; //count�� ����

	//while (count < inputNum) 
	//{
	//	std::cout << "���� �Է��� �� ��ŭ ��µ˴ϴ� ." << std::endl;
	//	count++;
	//}

	int inputNum;
	int total = 0;
	do 
	{
		std::cout << "0��Ÿ ū ���ڸ� �Է��Ͻÿ�. �����Ϸ��� 0 " << std:endl;
			std::cin >> inputNum;
		total += inputNum;
	} while (inputNum != 0) //0�� �ԷµǸ� ����
		std::cout << "�հ� : " << total << std::endl;
	std::cout << std::endl;
	int num = 0;
	//������ ó������ false �̱⿡ ������� �ʴ´�.
	while (num > 0)
	{
		std::cout << "����� ������� �ʴ´� . " << std::endl;
	}
	do
	{
		std::cout << "����� �ּ� �ѹ� ����ȴ� . " << std::endl;
	} while (num > 0);//������ false ������ do ����� ���� ����ȴ�.

	while (true)
	{
		int num = 0;
		num++;
		std::cout << num << std::endl;
	}
}