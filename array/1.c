#include <stdio.h>
#include <conio.h>

int binarysearch(int arry[], int n, int k)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arry[mid] == k)
        {
            return mid;
        }
        else if (arry[mid] > k)
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("enter siz of the array");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("index %d=%d \t", i, a[i]);
    }

    int pos, num;
    printf("enter position of index in arry");
    scanf("%d ", &pos);
    printf("enter the number which you want");
    scanf("%d", &num);

    if (pos > 0 && pos > n - 1)
    {
        printf("ensertion not possiblre");
    }
    else
    {
        for (int j = n - 1; j >= pos - 1; j--)
        {

            a[j + 1] = a[j];
        }
        a[pos - 1] = num;
        n++;
    }
    printf("element  in  the array after linklist\n ");
    for (int i = 0; i < n; i++)
    {
        printf("index %d=%d \t", i, a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("index %d=%d \t", i, a[i]);
    }
    int pos1;
    printf("enterb  number of index which you want to delete");
    scanf("%d", &pos1);

    int number = binarysearch(a, n, pos1);
    printf("%d", number);
    for (int i = number - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        printf("index %d=%d \t", i, a[i]);
    }

    return 0;
}