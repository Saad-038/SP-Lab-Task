//Write a program that takes a score as input and assigns a grade (A, B, C, D, F) using the switch-case statement
#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks (0-100)\n");
    scanf("%d",&marks);

    switch(marks/10)
    {
    case 10:
    case 9:
    printf("grade is A\n");
    break;

    case 8:
    printf("grade is B\n");
    break;

    case 7:
    printf("grade is C\n");
    break;

    case 6:
    printf("grade is D\n");
    break;

    default:
    printf("grade is F\n");

    }
    return 0;
}

