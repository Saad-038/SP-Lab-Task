// Write a program that takes a year as input and checks whether it is a leap year or not using if-else conditions
#include<stdio.h>
int main()
{
       int year;
       printf("Enter the year = ");
       scanf("%d", &year);

       if (year % 400 == 0)
       printf("%d is a leap year",year);

       else if (year % 100 == 0)
       printf("%d is not a leap year",year);

       else if (year % 4 == 0)
       printf("%d is a leap year",year);

       else
       printf("%d is not a leap year",year);

       return 0;

}



