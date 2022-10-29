#include<stdio.h>
    static int i;
    static int i = 27;
     static int i;
int main()
{
     static int i;
     printf("%d" , i);
    //  segments bss 
    return 0;
}