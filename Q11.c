/* Question 11 */
#include<stdio.h>
#include<math.h>
int main()

{ 
    float s,s1,s2,s3,area;
    scanf("%f%f%f",&s1,&s2,&s3);
    s=(s1+s2+s3)/2;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));

    printf("area of given triangle by heron's formula is %f",area);

    return 0;

} 