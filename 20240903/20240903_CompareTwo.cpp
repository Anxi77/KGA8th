#include<iostream>

int main() {

	int input;
	int input2;
	
	int inpRes;

	
	std::cout << "ù��° ���ڸ� �Է����ּ���" << std::endl;
	std::cin >> input;
	std::cout << "�ι��� ���ڸ� �Է����ּ���" << std::endl;
	std::cin >> input2;

	inpRes = input > input2;
	
	std::cout << "ù��° ���ڰ� �ι�° ���ں��� ū��? : " << inpRes << std::endl;

}