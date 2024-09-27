//Write a C program to find the maximum element in an array using loops and conditional statements
#include<stdio.h>
int main()
{
    int arr[100],size,i,max;
    printf("enter size of array = ");
    scanf("%d", &size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum value of array = %d",max);
    return 0;
}

