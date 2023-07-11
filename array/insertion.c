#include <stdio.h>
#include <conio.h>
int main()
{
    int a[50], size, pos, num;

    printf("enter size of ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d\t", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    printf("enter numbre with you want to insert  of ");
    scanf("%d", &num);
    printf("enter position of ");
    scanf("%d", &pos);
    if (pos > size + 1 && pos < 0)
    {
        printf("insertion not possible");
    }
    else
    {

        for (int i = size - 1; i >= pos - 1; i--)
        {

            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", a[i]);
        }
    }

    return 0;
}