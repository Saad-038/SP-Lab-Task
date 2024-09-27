//Write a program that prints numbers from 1 to n using a loop.
#include<stdio.h>
int main(){
    int num,i;
    printf("enter a positive number = ");
    scanf("%d", &num);
    printf("Natural numbers from 1 to %d are = \n",num);
    for(i=1;i<=num;i++)
    {
     printf("%d\t",i);
    }
    return 0;
    }

