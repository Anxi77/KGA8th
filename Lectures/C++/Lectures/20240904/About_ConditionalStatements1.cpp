#include <iostream>

/*
 if
 - ���ǹ� �̶�� �ϸ� ���α׷��� ���� �帧�� �����ϴµ� ����Ѵ�.
 - ���ǹ��� �־��� ������ True/False ���ο� ���� �ڵ� ����� �����ϰ� �ȴ�.

if (����) <- �̰��� ���̶��
{
���� (������ ���� ��� ����Ǵ� �ڵ�)
}

 1. if���� ���� ������ ����.(���������� ��밡��)
 2. if���� ���ǽ��� ���� �˻��Ѵ�.
 3. else�� ���� �ִ� if���� �����̸� �����Ѵ�.
 4. else�� �ܵ����� ����� �Ұ����ϰ� ���������� ����� �� ����.
 5. else if �� ���� ������ �����̰� ���� ���� ������ ���̶�� ����ȴ�
 6. else if�� if~if(���ӵ�if��)�� ���� �ٸ��� ���� ������ �� �Ʒ��� �ִ� �ڵ�(���ǽ�)�� �˻����� �ʴ´�. 
*/

int main()
{


	//if (true) {
	//
	//	std::cout << "������ ���̸� �̰��� ����ȴ�" << std::endl;
	//}

	//int num = 10;

	//////���� num�� 10���� ���ų� ũ�ٸ�
	//if (num < 10) {
	//	std::cout << "ù��° if�� ����" << std::endl;
	//}
	////OK
	////�� ������ �����̰� �ذ� ���� �����̶��
	//else if (num == 10) 
	//{
	//	std::cout << "�ι�° if�� ����" << std::endl;
	//}
	//else if (num <= 10) 
	//{
	//	std::cout << "����° if�� ����" << std::endl;
	//}
	//else 
	//{
	//	std::cout << "�� ������ ���� �������� �ʴ´ٸ� else�� �����Ѵ�" << std::endl;
	//}

	//int num1 = 50;

	//if (num1==51)
	//{
	//	std::cout << "num1�� 50�̸����" << std::endl;
	//}
	//else
	//{
	//	std::cout << "�� ������ �����̸� ����" << std::endl;	//
	//}

	/*
	int input;
	std::cin >> input;

	//�Է��� ���� 2�� ���� �������� 0�̶��
	if ((input % 2) == 0)
	{
		std::cout << " ¦�� " << std::endl;
	}


		if ((input % 2) != 0)
	{
		std::cout << " Ȧ�� " << std::endl;
	}

	������ ������ �̷��� ���� �ʴ´�



	else {
		std::cout << " Ȧ�� " << std::endl;
	}
	*/


	int input;
	int input2;
	int calc;

	std::cout << "ù��° ���ڸ� �Է����ּ���" << std::endl;
	std::cin >> input;
	std::cout << "�ι�° ���ڸ� �Է����ּ���" << std::endl;
	std::cin >> input2;
	std::cout << "1)���ϱ� 2)���� 3)���ϱ� 4)������ �� 1���� �������ּ���" << std::endl;
	std::cin >> calc;
	if (calc == 1) {
		std::cout << "ù��° ���ڿ� �ι�° ���ڸ� ���� ���� : " << (input + input2) << std::endl;
	}
	if (calc == 2) {
		std::cout << "ù��° ���ڿ� �ι�° ���ڸ� �� ���� : " << (input - input2) << std::endl;
	}
	if (calc == 3) {
		std::cout << "ù��° ���ڿ� �ι�° ���ڸ� ���� ���� : " << (input * input2) << std::endl;
	}
	if (calc == 4) {
		std::cout << "ù��° ���ڿ� �ι�° ���ڸ� ���� ���� : " << (input / input2) << std::endl;
	}


	//if (input > 0) //�Է��� ���� ���
	//{
	//	//¦�����
	//	if (input % 2 == 0) {
	//		//¦��

	//		//������� �Դٶ�°� �Է��� ���� ��� && ¦��
	//		if (true) {

	//	}
	//	else {
	//	
	//	}
	//}

	////�ǽ�
	////1.�Է��� �ΰ��� �޴´�.
	////2.���ϱ� ���� ���� �������� �����Ѵ�.
	////EX)1) ���ϱ� , 2) ���� , 3) ���� , 4 ������)

	// ���Ϳ� �÷��̾� ü�� ����
	int playerHealth = 100;
	int monsterHealth = 100;

	//���� ���ݷ� ����
	int monsterAttack = 10;

	//�̰� �Է����� ó��
	int playerAttack = 0;

	std::cout << "���濡 ����� ���Դ�" << std::endl;

	//���� ��������?
	//std::cout << "�÷��̾ ����� ����!!" << std::endl;

	//�������ϴµ� ����� ü���� 0 �̸��̸� �ȵǴϱ�
	if (monsterHealth > 0)
	{
		std::cout << "�÷��̾��� ���ݷ��� �Է��Ͻÿ�" << std::endl;
		std::cin >> playerAttack;

		std::cout << "����� �����Ѵ�!" << std::endl;
		//�÷��̾� ü�±��
		playerHealth -= monsterAttack;
		//��� ü�±��
		monsterHealth -= playerAttack;

		if (playerHealth > 0) 
		{
			std::cout << "�÷��̾��� ����ü�� :" << playerHealth << std::endl;
			std::cout << "������ ����ü�� :" << monsterHealth << std::endl;
		}
	}
	else
	{
		std::cout << "���Ͱ� �׾���" << std::endl;
	}
}