#include<stdio.h>
void display();
void main()
{
    printf("Inside main function");
    getch();
    display();
    printf("\nBack to main function");
}
void display()
{
    printf("\nInside display function");
    getch();
}
