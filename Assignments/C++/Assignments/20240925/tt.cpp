#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

// �ϳ����� ž �̵� ������ ������ ����
vector<string> moves;

// �� ����� ǥ���ϴ� ���� (0: A ���, 1: B ���, 2: C ���)
stack<int> poles[3];

// �ϳ����� ž ��Ģ �˻� �Լ�
bool isValidMove(int from, int to) {
    // ��� ����� ��������� �̵��� ������ �����Ƿ� �̵� �Ұ�
    if (poles[from].empty()) {
        return false;
    }

    // ��ǥ ����� ������� ���� ���, �̵��Ϸ��� ������ ��ǥ ����� �� �� ���Ǻ��� ũ�� �̵� �Ұ�
    if (!poles[to].empty() && poles[from].top() > poles[to].top()) {
        return false;
    }

    return true;
}

// ���� �̵� �Լ�
void moveDisc(int n, int from, int to, int aux) {
    // ���� ����: �̵��� ������ 1���� ��
    if (n == 1) 
    {
        if (isValidMove(from, to)) 
        {
            int disc = poles[from].top();
            poles[from].pop();
            poles[to].push(disc);
            moves.push_back("���� " + to_string(disc) + "�� " + string(1, 'A' + from) + "���� " + string(1, 'A' + to) + "�� �̵�");
        }
        return;
    }

    // ��� �ܰ� 1: n-1���� ������ ���� ������� �̵�
    moveDisc(n - 1, from, aux, to);

    // ���� ������ ��ǥ ������� �̵�
    if (isValidMove(from, to)) {
        int disc = poles[from].top();
        poles[from].pop();
        poles[to].push(disc);
        moves.push_back("���� " + to_string(disc) + "�� " + string(1, 'A' + from) + "���� " + string(1, 'A' + to) + "�� �̵�");
    }

    // ��� �ܰ� 2: ���� ����� n-1�� ������ ��ǥ ������� �̵�
    moveDisc(n - 1, aux, to, from);
}

int main() {
    int n;
    cout << "������ ������ �Է��ϼ���: ";
    cin >> n;

    int start, end;
    cout << "���� ����� �����ϼ��� (0: A, 1: B, 2: C): ";
    cin >> start;
    cout << "��ǥ ����� �����ϼ��� (0: A, 1: B, 2: C): ";
    cin >> end;

    // ���� ��� ����
    int aux = 3 - start - end;

    // �ʱ� ���� ����: ��� ������ ���� ��տ� ����
    for (int i = n; i > 0; i--) {
        poles[start].push(i);
    }

    // �ϳ����� ž Ǯ�� ����
    moveDisc(n, start, end, aux);

    // �̵� ���� ���
    cout << "�ϳ����� ž �̵� ����:" << endl;
    for (const auto& move : moves) {
        cout << move << endl;
    }
    cout << "�� �̵� Ƚ��: " << moves.size() << endl;

    return 0;
}