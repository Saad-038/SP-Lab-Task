//Write a C program that takes five numbers as input and calculates their average
#include<stdio.h>
int main(){
    int num;
    int sum,i;
    float avg;
    printf("enter five numbers = ");
    for(i=0;i<5;i++)
    {
     scanf("%d",&num);
     sum=sum+num;
    }
    avg=sum/(float)5;
    printf("Average number = %f",avg);
    return 0;
    }

