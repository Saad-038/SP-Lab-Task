//Write a program that takes an array of integers and finds the sum of its elements using a loop
#include<stdio.h>
int main()
{
    int arr[10],sum=0,i;
    printf("enter elements of array = ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("sum of array elements = ");
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}

