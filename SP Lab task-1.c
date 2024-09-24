//Write a C program to check whether a given number is odd or even using an if-else statement
#include<stdio.h>
int main()
{
       int num;
       printf("Enter a number= ");
       scanf("%d", &num);

       if (num % 2==0)
       printf("%d is even\n",num);

       else
       printf("%d is odd\n",num);

       return 0;

}



