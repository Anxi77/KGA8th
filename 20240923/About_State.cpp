/*
============================================================================================
�������� : ������ ������ �ϳ�
�̱�������
������
��������
�߻�޼���
==============================================================================================
*/
#pragma region enumeration_status
/*
-���¸� ��Ÿ���� ������
enum class STATE
{
	ATTACK,
	RUN,
	JUMP
};

void RunState()
{
	cout << "�޸��� �ִ� ! " << endl;
};
void JumpState()
{
	cout << "�����ϰ� �ִ� ! " << endl;
};
void AttackState()
{
	cout << "�����ϰ� �ִ� ! " << endl;
};

int main()
{
	//���� �Ը��� ���¸� �̷��� ó���ϴ°͵� ������ , Ȯ���� �������� �ʰ� ��ȯ�� ������
	STATE state = STATE::ATTACK;

	switch(state)
	{
	case STATE::ATTACK:
		AttackState();
		break;
	case STATE::JUMP:
		JumpState();
		break;
	case STATE::RUN:
		RunState();
		break;
	default:
		break;
	}
}
*/
#pragma endregion

#include<iostream>

using namespace std;

#pragma region CharacterStatePattern
class IState
{
public:
	virtual void EnterState() = 0;
	virtual void InputEvent() = 0;
	virtual void Update() = 0;
	virtual void ExitState() = 0;
};
class JumpState : public IState
{
public :
	void EnterState()override
	{
		cout << "���� ���·� ����" << endl;
	}
	void InputEvent()override
	{
		cout << "���� �߿� Ű�Է��� �޴´�" << endl;
	}
	void Update()override
	{
		cout << "�����߿� ��ġ ����" << endl;
	}
	void ExitState()override
	{
		cout << "���� �� ! " << endl;
	}

};
class RunState : public IState
{
public:
	void EnterState()override
	{
		cout << "�޸��� ���·� ����" << endl;
	}
	void InputEvent()override
	{
		cout << "�޸��� �߿� Ű�Է��� �޴´�" << endl;
	}
	void Update()override
	{
		cout << "�޸��� �ӵ��� ������Ʈ �Ѵ�" << endl;
	}
	void ExitState()override
	{
		cout << "���� �� ! " << endl;
	}
};
class Character
{
private:
	IState* curState;
public:
	Character()
	{
		curState = new RunState();//�⺻����
	}
	void setcurState(IState* s)
	{
		curState->ExitState();//���� ���� ����
		curState = s;//���� ���¸� ����
		curState->EnterState();//����
	}
	void InputEvent()
	{
		curState->InputEvent();
	}
	void Update()
	{
		curState->Update();
	}
};
#pragma endregion

int main()
{


	Character c;

	c.InputEvent();

	c.Update();

	c.setcurState(new JumpState());

	c.InputEvent();

	c.Update();

}