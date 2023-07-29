#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y) {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = 4;
    dwPos.Y = 6;

    SetConsoleCursorPosition(hCon, dwPos);
}

int main(){
    gotoxy(10,15);
    printf("*");

    return 0;
}
