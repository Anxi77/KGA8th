/*
Stack VS Queue

Last In Fist Out (LIFO) - �������� ���� �����Ͱ� ���� ���� ������. (���Լ���)

|		|
|		|
|		|
|		|
|		|
---------

-push : stack�� ���ο� ��Ҹ� �߰��ϴ� ����.
-pop : �ֻ�� ��Ҹ� �����ϰ� ��ȯ
-top(peek) : ������ �ֻ�� ��Ҹ� ��ȯ
-empty : ������ ����ִ��� Ȯ��

*/

#include <iostream>
#include <assert.h>

template<typename T>
class Stack
{
private:
	static const int MAX_VALUE = 5;
	int top;
	T value[MAX_VALUE];
public:
	Stack():top(-1)
	{
		for(int i = 0; i < MAX_VALUE; ++i)
		{
			value[i] = T();
		}
	}
	void Push(T val)
	{
		//assert
		//���α׷����� ġ�����ϼ� �ִ� �������� ���α׷��� �ߴ��ϰ� ������ ǥ��
		//���α׷��� �ߴܽ�Ű�� ������ ǥ���ϱ� ������ �������� ����뿡 ����
		assert(top + 1 < MAX_VALUE);//������ �����÷ο����� �ʵ��� Ȯ��

		value[++top] = val;
	}
	T Pop()
	{
		assert(!Empty());

		T val = value[top];//������ �ֻ������� �ӽ÷� �����ϰ�
		value[top--] = T();
		return val;
	}
	T Top()
	{
		return value[top];
	}
	bool Empty()const
	{
		return top < 0;
	}
};

using namespace std;

int main()
{
	Stack<int> stack;

	stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	stack.Push(40);
	stack.Push(50);


	cout << "Top : " << stack.Top() << endl;
	cout << "Pop : " << stack.Pop() << endl;
	cout << "Pop : " << stack.Pop() << endl;
	cout << "Pop : " << stack.Pop() << endl;
	cout << "Pop : " << stack.Pop() << endl;
	cout << "Top : " << stack.Top() << endl;

	//����

}