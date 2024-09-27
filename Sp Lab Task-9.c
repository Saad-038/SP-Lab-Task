//Write a C program to display the multiplication table of a given number using a for loop
#include <stdio.h>
int main()
{
    int num,i;
    printf("enter a number\n");
    scanf("%d", &num);
    printf("Multiplication table for %d is = \n", num);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n", num, i, (num*i));
    }
    return 0;
}
