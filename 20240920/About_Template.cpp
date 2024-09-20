/*
���ø�

���α׷��Ӱ� ������ �ڷ����� �Լ��� Ŭ������ ������ �ð��� �����ϴ� ��

<�Լ����ø�> 
- �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ� ȣ��� �ڷ����� �������־� ����Ѵ�.
- ���ø����� �ۼ��� �Լ��� ȣ���ϴ� ���� �ڷ����� �´� �Լ��� �����Ͽ� ����ϰ� �ȴ�.

<Ŭ�������ø�>
- �پ��� ������ Ÿ���� �����ϴ� Ŭ������ �����Ҽ� �ְ� ���ش�.
- ���ø� �Ű������� ���� Ŭ������ ��������� ����Լ��� Ÿ���� �Ϲ�ȭ �� �� �ִ�.
- Ŭ������ �ʿ��� �ڷ����� �����ϰ� Ŭ���� �ڷ����� �����Ѵ�.
- ���ø����� �ۼ��� Ŭ������ ȣ���ϴ� ���� �ڷ����� �´� Ŭ������ �����Ͽ� ���ȴ�.

*/

template <typename T>
T GetMax(const T x, const T y)
{
	if (x > y)return x;
	else return y;
}

template <typename T>
void Output (const T data)
{
	cout << "������ " << data << endl;
}

template <typename T1,typename T2>
void Output1(T1 a,T2 b)//Ÿ�Գ����� �ϳ��� ��� �Ű����� Ÿ���� �ٸ��� ������� �ʴ´�.
{
	cout << a << " , " << b << endl;
}

template <typename T>
class Box
{
private:
	T data;
public:
	void SetData(T data) { this->data = data; }
	T getData() { return data; }
};

template <typename T1, typename T2>
class Box2
{
private:
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirst();
	T2 GetSecond();

	void SetFrist(T1 val) { firstData = val; }
	void SetSecond(T2 val) { secondData = val; }
};

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirst()
{
	return firstData;
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecond()
{
	return secondData;
}

#include <iostream>
#include <vector>

using namespace std;

//int GetMax(int x, int y)
//{
//	if (x > y)return x;
//	else return y;
//}
//
//float GetMax(float x,float y)
//{
//	if (x > y)return x;
//	else return y;
//}
//���� �ִ� �Լ��� ���ø�ȭ(�Լ����ø�)


int main()
{
	Output(1);
	Output("1wqwd");
	Output(1.5);
	Output1(1, 2);
	Output1(1, 1.5);

	Box<int> box;
	box.SetData(100);
	cout << box.getData() << endl;
	Box<double> box1;
	box1.SetData(3.14);
	box1.getData();
	Box2<int,double> box2;
	box2.SetFrist(10);
	box2.SetSecond(2.21);
}

