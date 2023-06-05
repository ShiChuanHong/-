#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <deque>
#include <ctime>
#include "game.h"



using namespace std;

bool login()
{
    string username, password;
    cout << "使用者名稱: ";
    cin >> username;
    cout << "密碼: ";
    cin >> password;
    return (username == "pccu" && password == "123");
}

int main()
{
    system("mode con cols=100 lines=40"); //設定開啟視窗大小
    system("color 70"); //設定背景色和前景色
    system("title 貪吃蛇");

    while (true)
    {
        system("cls"); // 清空控制台畫面

        if (!login())
        {
            system("cls"); // 清空控制台畫面
            cout << "帳號或密碼錯誤" << endl;
            cout << "按下任意按鍵重新登入遊戲" << endl;
            _getch();
        }
        else
        {
            break; // 如果帳號密碼正確則跳出登入迴圈
        }
    }

    system("cls"); // 清空控制台畫面

    Game game;

    gotoxy(0, 32);
    cout << "遊戲結束!!!!" << endl;

    system("pause"); // 暫停程式執行，等待使用者輸入

    return 0;
}
