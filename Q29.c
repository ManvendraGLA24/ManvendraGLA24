/* Question 29 */
#include<stdio.h>
#include <math.h>
int main()
{
    float m1,m2,m3,m4,m5,total,average,percentage;

// m1 m2 m3 m4 m5 are marks of 5 subject with maximum marks 80 in each subject//

scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
average=(m1+m2+m3+m4+m5)/5;
percentage=((m1+m2+m3+m4+m5)*100)/400;

printf("total marks = %f\n average =%f\n percentage=%f\n",total,average,percentage);
return 0;
}