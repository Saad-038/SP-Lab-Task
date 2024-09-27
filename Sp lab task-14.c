//Write a C program to check whether a given number is prime or not using a for loop and conditional statements
#include<stdio.h>
int main()
{
    int num,i,prime=1;
    printf("enter a positive number= ");
    scanf("%d", &num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime)
    printf("%d is a Prime Number\n",num);
    else
    printf("%d is Not Prime Number\n",num);
    return 0;
}

