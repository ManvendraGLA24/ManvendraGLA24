/* Question 26 */
#include<stdio.h>

int main()
{  // a1 a2 a3 are angle of triangle//
float a1,a2,a3;
scanf("%f%f",&a1,&a2);
a3=180-(a1+a2);

printf("third angle of triangle is %f",a3);
return 0;
}