#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void push(int data)
{
    struct Node *temp, *current;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    current = head;
    if(head == NULL)
    {
        head = (struct Node*)malloc(sizeof(struct Node));
        head = temp;
        return;
    }
    while(current != NULL)
    {
        if(current->next == NULL)
        {
            current->next = temp;
            break;
        }
        current = current->next;
    }
};

int pop()
{
    struct Node *current, *dumyHead = (struct Node*)malloc(sizeof(struct Node));
    int deleteItem;
    dumyHead->next = head;
    current = dumyHead;
    if(head == NULL)
    {
        printf("Stack is underflow ");
        return -1;
    }
    while(current->next != NULL)
    {
        if(current->next->next == NULL)
        {
            deleteItem = current->next->data;
            current->next = NULL;
            break;
        }
        current = current->next;
    }

    head = dumyHead->next;
    return deleteItem;
}

int peek()
{
    struct Node *current;
    current = head;
    if(head == NULL)
    {
        printf("Stack is empty ");
        return -1;
    }
    while(current->next != NULL)
    {
        current = current->next;
    }
    return current->data;
}

void printLinkedList()
{
    struct Node *current;
    current = head;
    printf("The linked list: ");
    while(current != NULL)
    {
        printf("%d->",current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    push(23);
    push(33);
    push(34);
    pop();
    pop();
    push(59);
    push(60);
    pop();
    pop();
    push(233);
    push(234);
    push(29);
    push(344);
    printf("%d is deleted\n",pop());
    printf("%d is deleted\n",pop());
    printf("%d is deleted\n",pop());
    printf("Peek value: %d\n",peek());
    printLinkedList();
    return 0;
}
