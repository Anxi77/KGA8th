#include "SLL.h"

SLL::SLL() : pHead(nullptr) {}

SLL::~SLL()
{
	//�� �����Ͱ� �ƴҶ����� ���鼭
	while (pHead != nullptr)
	{
		//���� ��带 ����Ű�� �����͸� �ӽ� ��忡 ����
		node* temp = pHead;
		//���� ��带 ���� ���� ����
		pHead = pHead->pNext;
		//���� ��带 ����
		delete temp;
	}
}

void SLL::Insert(int num)
{
	//���ο� ��带 �����
	node* newNode = new node(num);
	//���� ����ִٸ�(��尡 ������)
	if (pHead == nullptr)
	{
		//���ο� ��带 ù ���� ����
		pHead = newNode;
		return;
	}
	//�ƴϸ� ���鼭 ����
	else
	{
		//����Ʈ�� ��ȸ�� ������
		node* temp = pHead;
		//����Ʈ�� ��ȸ�� �����Ͱ� null�� �ƴҶ����� ���鼭
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	//����Ʈ ��ü�� ����ִ� ���
	if (pHead == nullptr) {
		std::cout << "Empty" << std::endl;
		return;
	}

	// ù ��° ��尡 �����Ϸ��� ����� ���
	if (pHead->value == num) {
		node* temp = pHead;
		pHead = pHead->pNext;
		delete temp;
		return;
	}

	// ã�� ����� �� �ּҸ� ����
	node* prev = pHead;
	// ã�� ��带 ����
	node* curr = pHead->pNext;
	while (curr != nullptr)
	{
		if (curr->value == num)
		{
			// ������ ��带 ã�� ���
			prev->pNext = curr->pNext;
			delete curr;
			return;
		}
		//��ȸ 
		prev = curr;
		curr = curr->pNext;
	}

	std::cout << "Not Found " << std::endl;
}

void SLL::Print()
{
	node* temp = pHead;
	std::cout << "=========���========" << std::endl;
	while (temp != nullptr)
	{
		std::cout << temp->value << " ";
		temp = temp->pNext;
	}
}

using namespace std;


int main()
{
	SLL s;

	s.Insert(1);
	s.Insert(1);
	s.Insert(2);
	s.Insert(1);


	s.Delete(1);

	s.Print();
}