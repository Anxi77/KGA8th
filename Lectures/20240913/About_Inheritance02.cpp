#include<iostream>

using namespace std;


class Parent {
	
private:

	int privateValue;

protected:
	int protectedValue;

public:
	int publicValue;
	
	Parent() : privateValue(1), publicValue(2), protectedValue(3){}

	void ShowValue()
	{
		cout << "�θ�Ŭ���� privateValue : " << privateValue << endl;
		cout << "�θ�Ŭ���� publicValue : " << publicValue << endl;
		cout << "�θ�Ŭ���� protectedValue : " << protectedValue << endl;
	}
};

class ChildPulbic : public Parent {
public:
	void ShowValue() 
	{
		cout << "�ڽ� Ŭ����������  publicValue" << publicValue << endl;
		cout << "�ڽ� Ŭ����������  protectedValue" << protectedValue << endl;
		//������ �Ұ�
		//cout << "�ڽ� Ŭ����������  privateValue" << privateValue << endl;
	}
};
class ChildProtected : protected Parent {
public:
	void ShowValue() {
		cout << "�ڽ� Ŭ����������  publicValue" << publicValue << endl;
		cout << "�ڽ� Ŭ����������  protectedValue" << protectedValue << endl;
		//������ �Ұ�
		//cout << "�ڽ� Ŭ����������  privateValue" << privateValue << endl;
	}
};
class ChildPrivate : private Parent {
public:
	void ShowValue() {
		cout << "�ڽ� Ŭ����������  publicValue" << publicValue << endl;
		cout << "�ڽ� Ŭ����������  protectedValue" << protectedValue << endl;
		//������ �Ұ�
		//cout << "�ڽ� Ŭ����������  privateValue" << privateValue << endl;
	}
};

int main()
{
	ChildPulbic c1;
	c1.ShowValue();

	cout << "c1.publicValue" << c1.publicValue << endl;
	//���ٺҰ�
	//cout << "c1.protectedValue" << c1.protectedValue << endl;
	//���ٺҰ�
	//cout << "c1.protectedValue" << c1.privateValue << endl;

	ChildProtected c2;
	c2.ShowValue();
	//���ٺҰ�
	//cout << "c1.publicValue" << c2.publicValue << endl;
	//cout << "c1.protectedValue" << c2.protectedValue << endl;
	//���ٺҰ�
	//cout << "c1.protectedValue" << c2.privateValue << endl;


	ChildPrivate c3;
	c3.ShowValue();
	//���ٺҰ�
	//cout << "c1.publicValue" << c3.publicValue << endl;
	//cout << "c1.protectedValue" << c3.protectedValue << endl;
	//���ٺҰ�
	//cout << "c1.protectedValue" << c3.privateValue << endl;
}