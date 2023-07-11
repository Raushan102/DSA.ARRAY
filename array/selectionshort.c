#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("enter size of array");
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("after selection short");

    for (int k = 0; k < n; k++)
    {
        int temp = k;
        for (int j = k + 1; j < n; j++)
        {

            if (b[j] < b[temp])
            {
                temp = j;
            }
        }
        if (temp != k)
        {
            int ptr = b[temp];

            b[temp] = b[k];
            b[k] = ptr;
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d\t", b[k]);
    }

    return 0;
}