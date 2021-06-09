#include<stdio.h>

int main()
{
    int arr[] = {96,33,74,2,89,33,4,2,3,55,6,34,-100,700,-500}, size;
    size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++)
    {
        int min_index = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }


    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
