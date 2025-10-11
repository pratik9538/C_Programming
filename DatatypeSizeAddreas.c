#include<stdio.h>


int main()

{
    char cValue ='S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;

printf("Size of character is : %lu\n",sizeof(cValue));
printf("Size of integer is : %lu\n",sizeof(iValue));
printf("Size of float is : %lu\n",sizeof(fValue));
printf("Size of double is : %lu\n",sizeof(dValue));


printf("Size of cValu is : %lu\n",&cValue);
printf("Size of iValu is : %lu\n",&iValue);
printf("Size of fValu is : %lu\n",&fValue);
printf("Size of dValu is : %lu\n",&dValue);

return 0;

}