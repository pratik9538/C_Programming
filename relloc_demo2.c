#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;

    //Step 1 : Allocate the memory
    Arr = (int *)malloc(5 * sizeof(int));
    
    //Step 2 : use the 

    Arr = (int *)realloc(Arr,3*sizeof(int));

    // stap 3 : free the memory
    free(Arr);

    return 0;
}