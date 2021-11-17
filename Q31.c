/* Question 31 */
#include<stdio.h>
#include<math.h>
int main()

{     // p = intial principal amount//
      // r = rate of intrest annualy in percent//
     //  t = time period in year //

    float p,r,t,CI,z,a;

    scanf("%f%f%f",&p,&r,&t);
    z=1 +(r/100);
    a=pow(z,t);

    CI=p*a-p;

    printf("compound intrest for inserted data is  %f",CI);
        return 0;
} 