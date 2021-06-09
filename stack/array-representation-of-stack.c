#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

int push(int x)
{
    if(top < CAPACITY - 1)
    {
        top++;
        stack[top] = x;
        printf("Item added successfully: %d\n",x);
        return stack[top];
    }
    printf("Exception from push! stack overflow\n");
    return -1;
}

int pop()
{
    if(top>=0)
    {
        printf("Item deleted successfully: %d\n",stack[top]);
        int val = stack[top];
        top--;
        return val;
    }
    printf("Exception from pop! stack underflow\n");
    return -1;
}

int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("Exception from peek! stack empty ");
    return -1;
}

int main()
{
    push(90);
    push(34);
    push(33);
    push(88);
    push(05);
    printf("Top of stack: %d\n",peek());
    pop();
    pop();
    pop();
    pop();
    printf("Top of stack: %d\n",peek());
    printf("Print the full stack:\n");
    for(int i=0; i<=top; i++)
    {
        printf("%d\n", stack[i]);
    }
    return 0;
}
