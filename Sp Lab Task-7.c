//Write a program to create a simple calculator using the switch-case statement. The program should perform addition, subtraction, multiplication, and division based on user input
#include<stdio.h>
int main()
{
    int a,b;
    char  oper;
    printf("Enter the operator\n");
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\n");
    scanf("%c", &oper);

    printf("enter 2 integer numbers\n");
    scanf("%d %d", &a, &b);

    switch (oper)
    {
        case 'a': printf("%d +%d =%d\n", a, b, (a+b));
                break;

        case 'b': printf("%d - %d =%d\n", a, b, (a-b));
                break;

        case 'c': printf("%d x %d =%d\n",a ,b, (a*b));
                break;

        case 'd': if(b!= 0)
                     printf("%d / %d = %d\n", a, b, (a/b));
                  else
                     printf("Number can not be divided by 0\n");
                break;

        }

    return 0;
    }


