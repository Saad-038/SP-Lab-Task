//Write a program to count the number of digits in an integer using a while loop
#include<stdio.h>
int main()
{
    int n,counter;
    printf("enter number= ");
    scanf("%d", &n);

    while(n!=0)
    {
        n=n/10;
        counter++;
    }
    printf("Your number consists of %d digits\n", counter);
    return 0;
}

