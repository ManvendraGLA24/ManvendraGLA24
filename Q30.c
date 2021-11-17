/* Question 30*/
#include<stdio.h>
#include<math.h>
int main()

{     // p = intial principal amount//
      // r = rate of intrest annualy in percent//
     //  t = time period in year //

    float p,r,t,SI;

    scanf("%f%f%f",&p,&r,&t);
    SI=(p*r*t) /100;

    printf("simple intrest of given data is %f",SI);

    return 0;
}
