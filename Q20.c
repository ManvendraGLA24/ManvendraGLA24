/* Question 20 */
#include<stdio.h>
int main()

{
    float centimeter,meter,kilometer;
    scanf("%f",&centimeter);
    meter=0.01*centimeter;
    kilometer=0.00001*centimeter;
    printf("conversion of centimeter to meter and kilometer  is %f and %f respectively ",meter,kilometer);

    return 0;
} 