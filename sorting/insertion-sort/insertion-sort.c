#include<stdio.h>

int main()
{
    int arr[] = {96,33,74,2,89,33,4,2,3,55,6,34,-100,700,-500,1}, size;
    size = sizeof(arr)/sizeof(arr[0]);


    for(int i=1; i<size; i++)
    {
        int value = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }



    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
