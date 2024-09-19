#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for(int i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "] 의 주소값 : " << &arr[i] << endl;
	}
	cout << "=======================================" << endl;
	//포인터로도 배열원소에 접근 가능
	//배열의 시작부분을 가리키는 포인터를 저장하고
	//포인터에 1을 더하면 그 다음 원소를 가리키고
	//2를 더하면 그 다음다음 원소를 가리킨다.
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;//포인터 변수

	parr = &arr1[0];//배열의 첫번째 요소의 주소를 저장

	for (int i = 0; i < 10; i++)
	{
		cout << "arr1[" << i << "] 의 주소값 : " << &arr1[i] << endl;
		cout << "(parr+" << i << ")의 값 : " << (parr + i) << endl;
	}

	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr1;
	parr1 = &arr2[0];//첫번째 요소를 가리키게

	//역참조를 통하여 똑같은 변수와 똑같은 역할을 수행 가능하다.
	//배열의 네번째 요소와 포인터 연산을 통해 네번째 요소에 접근한 값을 출력
	cout << "arr2[3] = " << arr2[3] << "*(parr1+3) = " << *(parr1 + 3) << endl;
	
	//배열의 이름은 첫번째 원소의 주소와 동일하기에 포인터냐?
	//베열의 이름을 쓰면 암묵적으로 첫번째 원소를 가리키는 포인터로 타입변환을 해준다.
	int arr3[6] = { 1,2,3,4,5,6 };
	int* parr2 = arr3;

	cout << arr3 << endl;

	//포인터를 이용한 합계구하기
	//1.10개의 정수로 초기화된 배열을 선언한다.
	//2.
	
}