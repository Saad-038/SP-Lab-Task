//Write a program that takes an integer as input and calculates the sum of its digits using a while loop
#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter any number= ");
    scanf("%d",&n);

    n=(n<0)? -n:n;//For using the absolute value to process negative numbers correctly
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits= %d",sum);
    return 0;
}

