#include "tSLL.h"
#include <iostream>

using namespace std;

tSLL::~tSLL()
{
	while(pHead!=nullptr)
	{
		Node* temp = pHead;
		pHead = pHead->pNext;
		delete pHead;
	}
}

void tSLL::tInsert(int num)
{
	Node* newNode = new Node(num);

	if(pHead == nullptr)
	{
		pHead = newNode;
		return;//�ڿ��� �������� �ʴ´�
	}
	else
	{
		Node* temp = pHead;
		while(temp->pNext != nullptr)
		{
			temp->pNext = temp;
		}
		temp->pNext = newNode;
	}
}

void tSLL::tDelete(int num)
{
	if(pHead == nullptr)
	{
		cout << "there is no list to delete" << endl;
		return;
	}
	if (pHead->value == num)  //���� �Ϸ��� ��尡 �� �տ� ������
	{
		Node* temp = pHead;
		pHead = pHead->pNext;
		delete temp;
		return;
	}
	
	Node* Prev = pHead;
	Node* Curr = pHead->pNext;
	while (Curr != nullptr) 
	{
		if (Curr->value == num) // �����Ϸ��� ��尡 �߰��� ������(�� ���� ��尡 �����Ҷ�)
		{
			Prev->pNext = Curr->pNext;
			delete Curr;
			return; // �߰��� �־ ���� ������ �ڿ� ���� �ڵ� ���� ���ϰ� ����
		}
		Prev = Curr;
		Curr = Curr->pNext;
	}
	cout << "Not Found" << endl;

}

void tSLL::tPrint()
{
	Node* temp = pHead;
	cout << "=================���===================" << endl;
	while(temp != nullptr)
	{
		cout << temp->value << " ";
		temp = temp->pNext;
	}
}
