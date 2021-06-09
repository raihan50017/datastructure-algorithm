#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;

    for(int i=0; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL)
        {
            head = (struct Node*)malloc(sizeof(struct Node));
            head = temp;
            current = head;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }

    return head;
};

void printLinkedList(struct Node *head)
{
    printf("Linked list: ");
    while(head !=NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int searchInLinkedList(struct Node *head, int value)
{
    int index = 0;
    while(head != NULL)
    {
        index++;
        if(head->data == value)
        {
            printf("%d found at position %d\n",value,index);
            return index;
        }
        head = head->next;
    }
    printf("%d is not found in the list\n",value);
    return -1;
}

struct Node *reverseLinkedList(struct Node *head)
{
    struct Node *prev = NULL, *current = head, *next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;

    }
    return prev;
};

struct Node *insertAtBegining(struct Node *head, int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = head;
    return temp;
};

void insertAtTheEnd(struct Node *head, int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;

    while(head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
}

void insert(struct Node *head, int position, int value)
{
    int count = 0;
    struct Node *current = head, *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    while(current != NULL)
    {
        count++;
        if(count == position)
        {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }

}

struct Node *deleteFromList(struct Node *head, int value)
{
    struct Node *dumyHead, *current;
    dumyHead = (struct Node*)malloc(sizeof(struct Node));
    dumyHead->next = head;
    current = dumyHead;
    while(current->next != NULL && current != NULL)
    {
        if(current->next->data == value)
        {
            current->next = current->next->next;
            break;
        }
        current = current->next;
    }
    return dumyHead->next;
};

int main()
{
    int arr[11] = {1,2,3,4,5,6,7,8,9,0,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    struct Node *head = createLinkedList(arr, size);
    printLinkedList(head);
    searchInLinkedList(head, 119);
    head = insertAtBegining(head, 200);
    head = insertAtBegining(head, 500);
    insertAtTheEnd(head, 800);
    insertAtTheEnd(head, 8);
    insertAtTheEnd(head, 99);
    printLinkedList(head);
    insert(head, 3, 303);
    printLinkedList(head);
    head = deleteFromList(head, 303);
    head = deleteFromList(head, 99);
    head = deleteFromList(head, 99);
    head = deleteFromList(head, 8);
    head = deleteFromList(head, 500);
    printLinkedList(head);
    head = reverseLinkedList(head);
    printf("Reversed linked list -> ");
    printLinkedList(head);
    return 0;
}
