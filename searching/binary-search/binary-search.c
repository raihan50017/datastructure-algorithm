#include<stdio.h>

int binarySearch(int arr[],int size, int searchItem)
{
    int left = 0, right = size - 1, middle;

    while(left <= right)
    {
        middle = (left + right)/2;
        if(searchItem == arr[middle])
        {
            return middle;
        }
        else if(searchItem > arr[middle])
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    printf("%d not found in this array ",searchItem);
    return -1;
}

int main()
{
    int arr[] = {1,4,7,9,23,56,78,90,101,132,145}, searchItem = 78, size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("%d found at index %d", searchItem, binarySearch(arr, size, searchItem));
    return 0;
}
