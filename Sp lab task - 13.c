//Write a C program to check if a number is an Armstrong number using a while loop
#include<stdio.h>
int main()
{
    int n,arm=0,r,c;
    printf("enter any number= ");
    scanf("%d",&n);

    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    printf("Armstrong Number");
    else
    printf("Not Armstrong Number");
    return 0;
}

