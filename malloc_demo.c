#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int * Arr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&length);

    Arr = (int *)malloc(length * sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets succesfully allocated\n");
    }

    // stap 2 :use the memory

    // stap 3 : free the memory
    free(Arr);

    return 0;
}