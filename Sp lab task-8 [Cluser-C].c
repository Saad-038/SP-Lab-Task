//Write a program to calculate the area of a circle given its radius
#include<stdio.h>
int main()
{
    int radius;
    float Pi=3.14,area;
    printf("enter the radius of a circle = ");
    scanf("%d",&radius);
    area=Pi*radius*radius;
    printf("area of a circle is = %f",area);
    return 0;
}
