#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("enter size of array");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf(" on index %d=", i);
        printf("\n");
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    int n1, j;
    printf("enter size of integer");
    scanf("%d", &n1);

    int *ptr1 = (int *)realloc(ptr, n1 * sizeof(int));
    printf("adres of ptr is%u and ress of ptr1 is=%u", ptr, ptr1);
    for (j = n; j < n1; j++)
    {
        printf("index number%d=", j);
        scanf("%d", (ptr1 + j));
    }
    for (j = 0; j < n1; j++)
    {
        printf("%d", *(ptr1 + j));
       
    }
    add(*(ptr1+i));
    free(ptr1);
    return 0;
}
