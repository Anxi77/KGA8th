
#pragma region HowToConsoleBuffer
/*
#include <windows.h>
#include <iostream>

void SetConsoleSize(int width, int height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void SetConsoleBufferSize(int width, int height)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD newSize = { static_cast<SHORT>(width), static_cast<SHORT>(height) };
    SetConsoleScreenBufferSize(hConsole, newSize);
}

void InitializeConsole(int width, int height)
{
    SetConsoleSize(width, height);
    SetConsoleBufferSize(width / 8, height / 16);  // �뷫���� ����, �ʿ信 ���� ����

    // �ܼ� â ũ�� ���� ��Ȱ��ȭ
    HWND consoleWindow = GetConsoleWindow();
    SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
}

int main()
{
    InitializeConsole(800, 600);  // ���ϴ� ũ��� ���� (��: 800x600)

    std::cout << "�ܼ� ũ�Ⱑ �����Ǿ����ϴ�." << std::endl;

    // ���⿡ ���� ���� �߰�

    return 0;
}
*/
/*
SetConsoleSize: �ܼ� â�� ���� ũ�⸦ �����մϴ�.
SetConsoleBufferSize: �ܼ��� ���� ũ�⸦ �����մϴ�. �̴� ��ũ�� ���� ǥ���� �� �ִ� �ؽ�Ʈ�� ���� �����մϴ�.
InitializeConsole: �ܼ� â�� ���� ũ�⸦ �����ϰ�, ����ڰ� â ũ�⸦ �������� ���ϵ��� �մϴ�.
main �Լ����� InitializeConsole(800, 600)�� ȣ���Ͽ� �ܼ� â�� ũ�⸦ 800x600 �ȼ��� �����մϴ�. �� ���� �ʿ信 ���� ������ �� �ֽ��ϴ�.
���ǻ���:
�� �ڵ�� Windows � ü�������� �۵��մϴ�.
�ܼ� â�� ũ��� ȭ�� �ػ󵵿� DPI ������ ���� ������ ���̴� ũ�Ⱑ �ٸ� �� �ֽ��ϴ�.
���� ũ�� ������ �뷫���� ���̹Ƿ�, �ʿ信 ���� �����ؾ� �� �� �ֽ��ϴ�.
�� �ڵ带 ����ϸ� ���α׷� ���� �� �ܼ� â�� ũ�⸦ ���ϴ� ��� ������ �� ������, ����ڰ� â ũ�⸦ �������� ���ϵ��� �� �� �ֽ��ϴ�.
*/
#pragma endregion

#pragma region HowToConsoleBufferE.G)
/*
#include <windows.h>
#include <iostream>

void SetConsoleBufferSize(int width, int height)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD newSize = { static_cast<SHORT>(width), static_cast<SHORT>(height) };
    SetConsoleScreenBufferSize(hConsole, newSize);
}

void SetConsoleFontSize(int size)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX fontInfo;
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
    fontInfo.dwFontSize.Y = size;  // ��Ʈ ũ�� ����
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
}

int main()
{
    // �ܼ� â ũ�� ����
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, 800, 600, TRUE);

    // ���� ũ�⸦ �ſ� ũ�� ����
    SetConsoleBufferSize(200, 100);  // ���� 200, ���� 100 ����

    // ��Ʈ ũ�⸦ �۰� ����
    SetConsoleFontSize(8);  // 8����Ʈ ��Ʈ

    // �׽�Ʈ�� ���� ���
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 200; ++j) {
            std::cout << (j % 10);  // 0���� 9���� �ݺ� ���
        }
        std::cout << std::endl;
    }

    std::cout << "���α׷��� �����Ϸ��� �ƹ� Ű�� ��������..." << std::endl;
    std::cin.get();

    return 0;
}
*/
/*
�� �ڵ�� ������ ���� ȿ���� ����ϴ�:
�ܼ� â�� ũ�⸦ 800x600 �ȼ��� �����մϴ�.
�ܼ� ������ ũ�⸦ 200x100 ���ڷ� �����մϴ�. �̴� �ſ� ū ũ���Դϴ�.
��Ʈ ũ�⸦ 8����Ʈ�� �����Ͽ� �۰� ����ϴ�.
�׽�Ʈ�� ���� 200x100 ũ���� ���� �׸��带 ����մϴ�.
�̷��� �ϸ� ������ ���� ����� ���� �� �ֽ��ϴ�:
1. �ܼ� â�� 800x600 �ȼ� ũ�⸦ �����մϴ�.
2. ���� ũ�Ⱑ �ſ� ũ�� ������, �� ȭ�鿡 �� ���� ���ڰ� ǥ�õ˴ϴ�.
3. ��Ʈ ũ�Ⱑ �۾����� �� ���ڰ� �����ϴ� ������ �پ��ϴ�.
��������� �ܼ� â���� �� ���� ������ �� ���� �� �� �ְ� �Ǿ�, ��ġ ȭ���� '���'�� ��ó�� ���̰� �˴ϴ�.
������ ��:
���� ũ��� ��Ʈ ũ���� ���տ� ���� �������� ������ �� �ֽ��ϴ�.
�ʹ� �ش����� ������ ����� ������ ��ĥ �� �����Ƿ� ������ ������ ã�� ���� �߿��մϴ�.
�� ����� Windows � ü�������� �۵��մϴ�.
�� ����� ����ϸ� �ܼ� â�� ������ ũ�⸦ �������� �ʰ� �� ���� ������ ǥ���� �� �־�, �����̳� ������ �ܼ� ���ø����̼ǿ��� �����ϰ� Ȱ���� �� �ֽ��ϴ�.
*/
#pragma endregion

#include <windows.h>
#include <iostream>

using namespace std;

// �ܼ� ��Ʈ ũ�� ����
void SetConsoleFontSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
    cfi.dwFontSize.X = width;
    cfi.dwFontSize.Y = height;
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

// �ܼ� ���� ũ�� ����
void SetConsoleBufferSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}

// �ܼ� â ũ�� ����
void SetConsoleWindowSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = width - 1;
    windowSize.Bottom = height - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

void Fullscreen()
{
    SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

void SetConsoleCursorPosition(float x, float y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void GetConsoleCursorPosition() 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    int cursorX = csbi.dwCursorPosition.X;
    int cursorY = csbi.dwCursorPosition.Y;

    std::cout << "���� Ŀ�� ��ġ: (" << cursorX << ", " << cursorY << ")" << std::endl;
}

void GridDisplay(int size)
{

    for (int i = 0; i < size; ++i) // Change 5 to size
    {
        SetConsoleCursorPosition(27, 1 + i * 4);
        for (int top = 0; top < size; ++top) // Change 5 to size
        {
            cout << "��" << "��" << "��" << "��" << "��" << "��";
        }
        SetConsoleCursorPosition(27, 2 + i * 4);
        for (int middle = 0; middle < size; ++middle) // Change 5 to size
        {
            cout << "��" << " " << " " << " " << " " << "��";
        }
        SetConsoleCursorPosition(27, 3 + i * 4);
        for (int middle = 0; middle < size; ++middle) // Change 5 to size
        {
            cout << "��" << " " << " " << " " << " " << "��";
        }
        SetConsoleCursorPosition(27, 4 + i * 4);
        for (int bottom = 0; bottom < size; ++bottom) // Change 5 to size
        {
            cout << "��" << "��" << "��" << "��" << "��" << "��";
        }
        cout << endl;
    }

    //for (int i = 0; i < 5; ++i)
    //{
    //    SetConsoleCursorPosition(27, 1 + i * 4);
    //    for (int top = 0; top < 5; ++top)
    //    {
    //        cout << "��" << "��" << "��" << "��" << "��" << "��";
    //    }
    //    SetConsoleCursorPosition(27, 2 + i * 4);
    //    for(int middle = 0; middle < 5; ++middle)
    //    {
    //        cout << "��" << " " << " " << " " << " " << "��";
    //    }
    //    SetConsoleCursorPosition(27, 3 + i * 4);
    //    for (int middle = 0; middle < 5; ++middle)
    //    {
    //        cout << "��" << " " << " " << " " << " " << "��";
    //    }
    //    SetConsoleCursorPosition(27, 4 + i * 4);
    //    for (int bottom = 0; bottom < 5; ++bottom)
    //    {
    //        cout << "��" << "��" << "��" << "��" << "��" << "��";
    //    }
    //    cout << endl;
    //}
    

}

void Borders()
{
    // ��Ʈ ũ�� ���� (�ʺ�, ����)
    SetConsoleFontSize(75, 60);

    // ���� ũ�� ���� (�ʺ�, ����)
    SetConsoleBufferSize(80, 24);

    // â ũ�� ���� (�ʺ�, ����)
    SetConsoleWindowSize(80, 24);

    Fullscreen();

    for (int y = 0; y < 23; ++y) 
    {
        if (y == 0 || y == 22) 
        {
            for (int x = 0; x < 41; ++x) 
            {
                cout << "��";
            }
            cout << endl;
        }
        else {
            for (int x = 0; x < 80; ++x) 
            {
                if (x != 0 && x != 79) 
                {
                    cout << " ";
                }
                else if (x == 0)
                {
                    cout << "��";
                }
                else if (x == 79)
                {
                    cout << "��";
                    cout << endl;
                }
            }            
        }
    }
}

void Overlay()
{
    SetConsoleCursorPosition(5, 1);
    GridDisplay(5);
    GetConsoleCursorPosition();
    SetConsoleCursorPosition(2, 1); // Ŀ�� ��ġ ����
    cout << 2 << endl;
    SetConsoleCursorPosition(6, 1);
    cout << 2 << endl;
    SetConsoleCursorPosition(10, 1);
    cout << 2 << endl;
}

void Scores()
{
    SetConsoleCursorPosition(63, 1);
    cout << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��";
    SetConsoleCursorPosition(63, 2);
    cout << "��" << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "��";
    SetConsoleCursorPosition(63, 3);
    cout << "��" << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "��";
    SetConsoleCursorPosition(63, 4);
    cout << "��" << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "��";
    SetConsoleCursorPosition(63, 5);
    cout << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��";
    SetConsoleCursorPosition(65, 2);
    cout << "Current Score" << endl;
    SetConsoleCursorPosition(66, 4);
    cout << "[" << " " << " " << " " << " " << " " << " " << " " << " " << " " << "]";
    SetConsoleCursorPosition(68, 4);
    cout <<" " << 12459/*Current Score*/ << endl;
    SetConsoleCursorPosition(63, 6);
    cout << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��";
    SetConsoleCursorPosition(63, 7);
    cout << "��" << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "��";
    SetConsoleCursorPosition(63, 8);
    cout << "��" << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "��";
    SetConsoleCursorPosition(63, 9);
    cout << "��" << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "��";
    SetConsoleCursorPosition(63, 10);
    cout << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��" << "��";
    SetConsoleCursorPosition(65, 7);
    cout << " " << " " << "Top Score" << endl;
    SetConsoleCursorPosition(66, 9);
    cout << "[" << " " << " " << " " << " " << " " << " " << " " << " " << " " << "]";
    SetConsoleCursorPosition(68, 9);
    cout << " " << 12459/*Top Score*/ << endl;
}

int main()
{
    Borders();
    GridDisplay(5);
    Scores();
    SetConsoleCursorPosition(120, 22);
}


