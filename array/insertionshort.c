#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter size of bthe array");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", *(ptr + j));
    }

    printf("element alter insertion short ");
    for (int i = 1; i < n; i++)
    {
        int temp = ptr[i];

        int j = i - 1;
        while (j >= 0 && ptr[j] > temp)
        {
            ptr[j + 1] = ptr[j];
            j--;
        }
        ptr[j + 1] = temp;
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d\t", *(ptr + j));
    }
    printf("after selection short");
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ptr[j] < ptr[min])
            {
                min = j;
            }
            if (min != i)
            {
                int temp = ptr[min];
                ptr[min]=ptr[i];
                ptr[i]=temp;

            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d\t", *(ptr + j));
    }
    return 0;
}