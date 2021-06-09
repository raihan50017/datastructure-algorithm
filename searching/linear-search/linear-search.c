#include<stdio.h>

int main()
{
    int arr[] = {-9,3,78,11,2,6,0,34,67,32}, searchItem = 2, size;
    size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {
        if(arr[i] == searchItem)
        {
            printf("%d found at index %d\n",searchItem, i);
            return;
        }
    }
    printf("%d not found in the array\n",searchItem);
    return 0;
}
