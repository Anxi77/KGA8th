#include "GridGen.h"

using namespace std;

GridGen::GridGen(int size) :size(size), gen(random_device{}()), isGridFUll(false)
{
	// x��� y�� ���������� ������ ���� ����
	int x = size;
	int y = size;
	// 2D Vector grid �ȿ� x���� ��� , y�� ���� ������ �ְԲ� ���� �ʱ�ȭ
	grid = vector<vector<int>>(y, vector<int>(x, 0));
}

void GridGen::GridInitialLize()
{
    grid = vector<vector<int>>(size, vector<int>(size, 0));
}

bool GridGen::SpawnRandomNumber()
{
#pragma region Genarate size*size Coordinate Method
    /* 
      0����(size * size - 1)������ ���� ���� ���� ������ ����
      �̴� �׸����� ��� ���� ���� �ε��� ������ Ŀ���մϴ�
      uniform_int_distribution ��ü ����
      - uniform_int_distribution<>: ���� ������ ���� ������ �����ϴ� Ŭ����
      - <>: ���ø� ���ڸ� ����θ� �⺻������ int Ÿ������ ������
      - dis: ������ ���� ��ü�� �̸�
      - (0, size * size - 1): ���� ������ 0���� (size * size - 1)������ ����
      * 0: ������ �ּҰ� (����)
      * size * size - 1: ������ �ִ밪 (����)
      * �� ������ 2D �׸����� ��� ���� 1D �ε����� ǥ���� �� �ְ� ��
    */   
    uniform_int_distribution<> dis(0, size * size - 1);
    /*
     size * size - 1�� ����ϴ� ����:
     1. �׸���� 2�����̸�, �� ���� ���� size * size�Դϴ�.
     2. �ε����� 0���� �����ϹǷ�, ������ ���� �ε����� (size * size - 1)�Դϴ�.
     3. �̷��� �ϸ� ��� ���� ���� ������ Ȯ���� ������ �� �ֽ��ϴ�.
     4. size - 1�� ����ϸ� ù ��° ���� ���鸸 ���õ� �� �ֽ��ϴ�.
    */
    vector<int> emptyCells;
    /*
     �� ��(���� 0�� ��)�� �ε����� ������ ����
     �� �ڵ尡 �۵��ϴ� ����:
     1. 1���� ���͸� ����Ͽ� 2���� �׸����� �ε����� �����մϴ�.
     2. �� ���� ��ġ�� ���� ������ ǥ���˴ϴ� (i = y * size + x(������ y�� �� �������� x�� ��)).
     3. ���߿� �� ������ �ٽ� x, y ��ǥ�� ��ȯ�� �� �ֽ��ϴ� (y = i / size, x = i % size).
        - i�� size�� ������ y ��ǥ(��)�� ���� �� �ֽ��ϴ�.
        - i�� size�� ���� �������� x ��ǥ(��)�� �˴ϴ�.
        - �� ������� 1���� �ε����� 2���� �׸����� ��ġ�� ���� ��ȯ�� �� �ֽ��ϴ�.
     4. �� ����� �޸𸮸� �����ϰ� �ڵ带 �ܼ�ȭ�մϴ�.
     5. 2���� ��ǥ�� ���� �����ϴ� �ͺ��� ȿ�����Դϴ�.

    1(0,0)	2(0,1)	3(0,2)	4(0,3)	5(0,4)
    5(1,0)	6(1,1)	7(1,2)	8(1,3)	9(1,4)
    10(2,0)	11(2,1)	12(2,2)	13(2,3)	14(2,4)
    15(3,0)	16(3,1)	17(3,2)	18(3,3)	19(3,4)
    20(4,0)	21(4,1)	22(4,2)	23(4,3)	24(4,4)

    */
    // ��� ���� ��ȸ�ϸ鼭 �� �� ã��
    for (int i = 0; i < size * size; ++i) 
    {
        // i�� size�� ���� ���� ��(y) �ε���, �������� ��(x) �ε���
        if (grid[i / size][i % size] == 0) 
        {
            // �� ���̸� �ش� �ε����� emptyCells ���Ϳ� �߰�
            emptyCells.push_back(i);
        }
    }

    // �� ���� �ϳ��� �ִٸ�
    if (!emptyCells.empty()) 
    {
            //emptyCells�� �ε��� !!!!!!!
        int index = emptyCells[dis(gen) % emptyCells.size()];

        int y = index / size;  // �� �ε���
        int x = index % size;  // �� �ε���

        // 90% Ȯ���� 2, 10% Ȯ���� 4�� ����
        // dis(gen) % 10�� 0���� 9������ ������ ����
        // �� ���� 9���� ������(90% Ȯ��) 2��, �׷��� ������(10% Ȯ��) 4�� �Ҵ�
        grid[y][x] = (dis(gen) % 10 < 9) ? 2 : 4;
        newSpawn = {y,x};
    }
    else
    {
        return false;
    }
#pragma endregion
#pragma region Genarate Separate X,Y Coordinate Method
    /*
    random_device rd;
    mt19937 gen(rd());
    vector<vector<int>> grid(5, vector<int>(5, 0));
    vector<vector<int>> emptycells(5, vector<int>(5));
    uniform_int_distribution<> ranCoord(0, 4);
    uniform_int_distribution<> ranNumProb(0, 100);

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (grid[i][j] == 0)
            {
                emptycells[i][j] = 0;
            }
        }

    }

    if (!emptycells.empty())
    {
        int x = ranCoord(gen);
        int y = ranCoord(gen);
        if (grid[y][x] == 0)
        {
            grid[y][x] = (ranNumProb(gen) < 90) ? 2 : 4;
        }
    }
    */
#pragma endregion
}

void GridGen::testprint()
{
	for (int y = 0; y < size; ++y)
	{
		for (int x = 0; x < size; ++x)
		{
            if(grid[y][x] == 0)
            {
                cout << "[ ]" << "\t";
            }
            else 
            {
                cout << "[" << grid[y][x] << "]" << "\t";
            }
		}
		cout << endl << endl;
	}
}


