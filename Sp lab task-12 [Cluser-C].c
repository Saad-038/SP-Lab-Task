//Write a C program to calculate the sum of the first n natural numbers using a loop
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter number = ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("sum of first N natural number = %d",sum);
    return 0;
    }

