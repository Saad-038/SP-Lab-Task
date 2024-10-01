// Write a C program to find the largest of three numbers using nested if-else conditions
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers = ");
    scanf("%d %d %d",&a,&b,&c);

     if (a>=b)
        {
        if (a>=c)
        {
            printf("Largest number is = %d\n", a);
        }
     else
        {
            printf("Largest number is = %d\n", c);
        }
    }
    else
        {
        if (b>=c)
        {
            printf("Largest number is = %d\n", b);
        }
    else
        {
            printf("Largest number is = %d\n", c);
        }
    }

    return 0;
}

