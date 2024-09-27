//Write a C program to reverse a given integer using a while loop
#include<stdio.h>
int main()
{
    int n,r;
    printf("enter number= ");
    scanf("%d", &n);

    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}

