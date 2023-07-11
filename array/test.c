#include <stdio.h>
#include <conio.h>
int main()
{
    int n, m;
    printf("enter number for row");
    scanf("%d", &n);
    printf("enter size of coulam");
    scanf("%d", &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("row and colume is[%d][%d]=%d \t", i, j, a[i][j]);
        }
    }
    int choose;
    printf("enter choose  1 to know the position of any number choose 2 for short the matrix choose 3 for deleter element intering position ");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        int number;
        printf("enter number wehich you waant to delete");
        scanf("%d", &number);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == number)
                {
                    printf(" %d%d", i, j);
                    break;
                }
            }
        }
        break;
    case 2:
        for (int k = 0; k < n * m; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (a[i][j] > a[i][j] + 1])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[i][j + 1];
                        a[i][j + 1] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("row and colume is[%d][%d]=%d \t", i, j, a[i][j]);
            }
        }
        break;
    }

    return 0;
}