#include "SceneManager.h"

vector<vector<int>> grid = 
{
    {2,4,8,8,0},
    {16,32,64,128,0},
{256,512,1024,2048,0},
{4096,8192,16384,32768,0},
{4096,8192,16384,32768,0} 
};

void SceneManager::TestScenes()
{
    while(1)
    {
        Borders();
        StageScreen::Instructions();
        StageScreen::GridDisplay(5);
        StageScreen::Scores(2500,2500);

        gotoXY();
        system("pause");

    }
}

void SceneManager::GameOverScene()
{
    system("cls");
    Borders();
    GameOverScreen::PrintGameover();
}

void SceneManager::StageScene(int size, int topscore, int currentscore, vector<vector<int>> grid, pair<int,int> newSpawn)
{
    Borders();
    StageScreen::Instructions();
    StageScreen::GridDisplay(size);
    StageScreen::TileDisplay(size, grid,newSpawn);
    StageScreen::Scores(topscore, currentscore);
}

void SceneManager::LobbyScene()
{
    LobbyScreen::PrintLogo();
}

SceneManager::SceneManager()
{
    SetConsoleCursorPosition(0, 0);

    // ��Ʈ ũ�� ���� (�ʺ�, ����)
    ConsoleUtils::SetConsoleFontSize(61, 60);

    // ���� ũ�� ���� (�ʺ�, ����)
    ConsoleUtils::SetConsoleBufferSize(82, 24);

    // â ũ�� ���� (�ʺ�, ����)
    ConsoleUtils::SetConsoleWindowSize(82, 24);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    csbi.dwSize.X = 82;
    csbi.dwSize.Y = 24;
    SetConsoleScreenBufferSize(hConsole, csbi.dwSize);

    // â ũ�� ���� (�׵θ� ����)
    HWND consoleWindow = GetConsoleWindow();
    RECT r;
    GetWindowRect(consoleWindow, &r);
    MoveWindow(consoleWindow, r.left, r.top, (r.right - r.left) + 2, (r.bottom - r.top) + 2, TRUE);


    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

    ConsoleUtils::CursorView();
}