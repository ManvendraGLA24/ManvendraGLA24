/* Question 12 */
#include<stdio.h>
int main ()
{
    float s1,s2,h,area;

    scanf("%f%f%f",&s1,&s2,&h);
    area=0.5*(s1+s2)*h;
    printf("area of trapezium of given side is %f",area);

    return 0;
}