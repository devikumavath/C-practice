#include<stdio.h>
int main()
{
    int var = 0x43FF;  // or 0X43ff
    // 0x or 0X infront of number will be treated as hexa decimal
    // "%x"
    printf("%x \n" , var);   //x lower case
    printf("%X \n" , var); // X upper case

     printf("%d \n" , var); // decimal value
    return 0;
}