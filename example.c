#include <stdio.h>
#include<conio.h>
void main()
{
    int check, exp;
    // clrscr();
    printf("do you have experience\nyes or no \n");
    scanf("%d", &check);
    printf("how much experience you have \n");
    scanf("%d", &exp);

    if(exp ==2)
    {
        printf("your bonus is 10000");
    }
    else if(exp==3)
    {
        printf("your bonus is 15000");
    }
      else if(exp==5)
    {
        printf("your bonus is 20000");
    }
    else
    {
        printf("you are not eligable for bonus");
    }

    getch();
}