#include<stdio.h>
int main()
{
    int x=3;
    if( x ==2); x=0;
    // semicolon after if block  then x= 0 after if block which is reassined  so x =0 now
    if(x == 3) x++;  
    // 0 == 3 
    else x+= 2;

    printf("x = %d" , x);
 
    return 0;
}