#include <stdio.h>
#include <conio.h>
#define n 10;
int stack[10];
int top = -1;

void push(int data)
{
    if (top == 9)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top]=data;
    }
}

void peek()
{
    printf("perfurn peck operation");
    if (top == -1)
    {
        printf("under flow");
    }
    else
    {
        int temp = stack[top];
        
        printf("peeked element is=%d", temp);
    }
}
void pop()
{
    int temp;
    if (top == -1)
    {
        printf("nonelement i styack");
    }
    else
    {
        temp = stack[top];
        top--;
        printf(" poed element is =%d",temp);
    }
}
void display()
{
    for (int i = -1; i <= top; i++)
    {
        printf("%d\t", stack[i]);
    }
}

int main()
{
    push(10);

    push(20);

    push(30);

    push(40);

    push(50);

    push(60);
    printf("\n");
    peek();
     printf("\n");
    pop();
     printf("\n");
display();

    return 0;
}