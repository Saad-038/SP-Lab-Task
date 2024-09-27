//Write a C program that takes a number and determines whether it's positive, negative, or zero using if-else statements
#include<stdio.h>
int main()
{
    int num =0;
    printf("please enter the number = ");
    scanf("%d", &num);
    if (num>0)
    {
        printf("Num is Positive");
    }
    else if (num<0)
    {
        printf("Num is Negative");
    }
    else
    {
        printf("Num is Zero");

    }
    return 0;
    }
