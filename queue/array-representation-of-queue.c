#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int queue[CAPACITY], totalitem = 0;
front = 0, rare = -1;

bool isFull()
{
    if(CAPACITY == totalitem)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if(totalitem == 0)
    {
        return true;
    }
    return false;
}

void enqueue(int item)
{
    if(isFull())
    {
        printf("Sorry! the queue is full\n");
        return;
    }
    rare = (rare + 1)%CAPACITY;
    queue[rare] = item;
    totalitem++;
    return;
}

int deque()
{
    if(isEmpty())
    {
        printf("Sorry the queue is empty\n");
        return -1;
    }
    int value = queue[front];
    queue[front] = -1;
    front = (front+1)%CAPACITY;
    totalitem--;
    return value;

}

void printQueue()
{
    printf("Queue: ");
    for(int i=0; i<CAPACITY; i++)
    {
        printf("%d ",queue[i]);
    }
}

int main()
{
    enqueue(10);
    enqueue(33);
    enqueue(12);
    enqueue(99);
    enqueue(88);
    enqueue(34);
    enqueue(45);
    printf("Delete item: %d\n",deque());
    enqueue(45);
    printf("Delete item: %d\n",deque());
    enqueue(33333);
    printf("Delete item: %d\n",deque());
    printf("Delete item: %d\n",deque());
    printf("Delete item: %d\n",deque());
    printf("Delete item: %d\n",deque());
    printf("Delete item: %d\n",deque());
    printf("Delete item: %d\n",deque());
    printQueue();
    return 0;
}
