/* Question 16 */
#include<stdio.h>
int main()

{
    int a,b,sum,multiplication,substraction;
    float division;


    scanf("%d%d",&a,&b);
    sum=a+b;
    multiplication=a*b;
    substraction=a-b;
    division=a/b;
    printf(" a+b=%d\n a*b=%d\n a-b=%d\n a/b=%f",sum,multiplication,substraction,division);

    return 0;
} 