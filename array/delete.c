#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("enter size of array");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    int pos;
    printf("enter the position with you want to delete node");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}