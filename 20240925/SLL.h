#pragma once
#include <iostream>

struct node
{
	int value;      // ��尡 �����ϴ� ���� ������ ��
	node* pNext;    // ���� ��带 ����Ű�� ������

	node(int n) : value(n), pNext(nullptr) {} // ����� �����ڷ� ����� ���� �Ű������� �ް� , ���� ����� �ּҸ� ����Ű��  pNext �� �ּҸ� null�� �ʱ�ȭ
};
//SLL Class
class SLL
{
private:
	//SLL�� ù��° ��带 ����Ű�� ������
	node* pHead;
public:

	SLL();
	~SLL();

	void Insert(int num);

	void Delete(int num);

	void Print();

};

