#include <stdio.h>
#include <conio.h>
int main()
{
    int a[23], i, size;
    printf("enter size thst you need in 23*4bytes");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    int pos, num;
    printf("enter the position were you want to insert number");
    scanf("%d", &pos);
    printf("enter number");
    scanf("%d", &num);

    for (int i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
    printf("after insertion the number\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    for (int i = 0; i < size-1; i++)
    {
        if (a[i] > a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
     printf("after shorted the number\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
