#include<stdio.h>
int main()
{
    unsigned int i = 500;
    // range of unsigned int (4 byte)
    // 0 to 4294967295
    while(i++ != 0);   // ; after loop and no body of loop so printf is not part of while loop
    // 500 , 501 to  4294967295 loop will run then again it will come back to "0"
    //  0 != 0 flase , come out of loop  , while (i++ != 0);
    // i++ so i =1
    printf("%d" , i);

    return 0;
}