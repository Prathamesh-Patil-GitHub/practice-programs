#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    printf("(`!`)");
    while(1)
    {
        ch=getch();
        switch(ch){
    case 72:y--;break;
    case 75:x--;break;
    case 80:y++;break;
    case 77:x++;break;
    case 27:exit(0);
    }
        system("cls");
        gotoxy(x,y);
        printf("(~!~)");
    }
}
