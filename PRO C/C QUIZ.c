#include<stdio.h>
int score=0;
int choice();
void choice1(int);/*Function Declaration for choices*/
void choice2(int);
void choice3(int);
void choice4(int);
void que1();/*Function Declaration for questions*/
void que2();
void que3();
void que4();
void que5();
void que6();
void que7();
void que8();
void que9();
void que10();
void main()
{
    int ch;
    printf("\t\t\t\t\t***WELCOME TO THE C QUIZ***");//Heading for the Quiz
    printf("\nYou have to choose one of the alternatives of the following question's answers");
    que1();
    ch=choice();
    choice3(ch);
    que2();
    ch=choice();
    choice2(ch);
    que3();
    ch=choice();
    choice3(ch);
    que4();
    ch=choice();
    choice4(ch);
    que5();
    ch=choice();
    choice3(ch);
    que6();
    ch=choice();
    choice2(ch);
    que7();
    ch=choice();
    choice3(ch);
    que8();
    ch=choice();
    choice3(ch);
    que9();
    ch=choice();
    choice1(ch);
    que10();
    ch=choice();
    choice3(ch);
    if(score==0)
        printf("\n\n\nHey monkey, you should leave programming(-!-) ");
    else
    if(score<3)
        printf("\n\n\nOh no, not good!!!");
    else
        if(score<5)
        printf("\n\n\nNot too bad!!!");
    else
        if(score<7)
        printf("\n\n\nGood!!!");
    else
        if(score<=9)
        printf("\n\n\nWell Done!!!");
    else
        printf("\n\n\nYou just NAILED IT DUDE!!!(*!*)");
    printf("\nYOUR OVERALL SCORE IS %d OUT OF 10",score);
}
int choice() //Function Definitions from here
{
    int ch;
    printf("\nEnter your choice");
    scanf("%d",&ch);
    return ch;
}
void choice1(int ch)
{
    if(ch==1)
    {
        printf("\nYOU ARE RIGHT!!!");
        score++;
    }
    else
        printf("\nYOU ARE WRONG!!!");
}
void choice4(int ch)
{
    if(ch==4)
    {
        printf("\nYOU ARE RIGHT!!!");
        score++;
    }
    else
        printf("\nYOU ARE WRONG!!!");
}
void choice2(int ch)
{
    if(ch==2)
    {
        printf("\nYOU ARE RIGHT!!!");
        score++;
    }
    else
        printf("\nYOU ARE WRONG!!!");
}
void choice3(int ch)
{
    if(ch==3)
    {
        printf("\nYOU ARE RIGHT!!!");
        score++;
    }
    else
        printf("\nYOU ARE WRONG!!!");
}
void que1()
{
    printf("\n1)In which category does C language lies");
    printf("\n1 Base language \n2 Medium level language \n3 High level language \n4 Machine language");
}
void que2()
{
    printf("\n2)How much memory does a c program consumes in RAM");
    printf("\n1 32kb \n2 64kb \n3 1mb \n4 5mb");
}
void que3()
{
    printf("\n3)Which of the following operators has highest operating precedence");
    printf("\n1 = \n2 * \n3 ++ \n4 &&");
}
void que4()
{
    printf("\n4)What is the biggest positive value of short signed int in DOS based C ");
    printf("\n1 65535 \n2 23456 \n3 2147483648 \n4 32768");
}
void que5()
{
    printf("\n5)Which of the following can't be used as an identifier ");
    printf("\n1_guest  \n2 Four \n3 return \n4 INT");
}
void que6()
{
    printf("\n6)What is the first step of execution of source code");
    printf("\n1 Compilation \n2 Preprocessing \n3 Linking \n4 Running");
}
void que7()
{
    printf("\n7)What actually get pass when you pass an array as a function argument");
    printf("\n1 Type of array \n2 Array size \n3 Base address of the array \n4 Array name");
}
void que8()
{
    printf("\n8)code:for(i=0;i<10;i--)\nHow many times the loop will be executed");
    printf("\n1 11 \n2 10 \n3 Infinity \n4 0(Zero)");
}
void que9()
{
    printf("\n9)Which of the following operator is used to get value of a variable\nthrough a pointer pointing the same variable ");
    printf("\n1 * \n2 # \n3 & \n4 =");
}
void que10()
{
    printf("\n10)Which operator is used to concatenate two numbers through a macro");
    printf("\n1 == \n2 ++ \n3 ## \n4 *");
}

