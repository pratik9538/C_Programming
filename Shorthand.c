#include<stdio.h>

int main()

{
    int i=10;
    int j=10;

    int iAns=0,jAns=0;

    iAns=i++;
    jAns=++j;

    printf("Valu of i : %d\n",i);           //11
    printf("Valu of iAns : %d\n",iAns);     //10

    printf("Valu of j : %d\n",j);           //11
    printf("Valu of jAns : %d\n",jAns);     //11
     


return 0;
}