#include<stdio.h>

int main()
{
    int arr[] = {96,33,74,2,89,33,4,2,3,55,6,34,-100,700}, size;
    size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++)
    {
        int swap = 0;
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = 1;
            }
        }
        if(swap == 0)
        {
            break;
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
