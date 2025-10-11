#include<stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 20;

    //Bello line generates errors
    iNo1++;    
    iNo2++;
    iNo2 = 30;

    return 0;
}