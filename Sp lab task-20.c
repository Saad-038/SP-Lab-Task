//Write a program to sort an array of integers in ascending order using a basic sorting algorithm like bubble sort
#include<stdio.h>
int main()
{
    int i,j,arr[100],n,temp;
    printf("enter the value of number = ");
    scanf("%d",&n);
    printf("enter the elements one by one = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<(n-i-1);j++)
       {
          (arr[j]>arr[j+1]);
          {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
       }
    }
    printf("sorted array is = ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

