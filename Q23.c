/* Question 23 */
#include<stdio.h>
int main()
{ 
    int days ,week,year;

    days=1456;

    year=days/365;
    week=days%365 /7;
    days= days-((year*365)+(week*7));

    printf("year:%d\n week:%d\n days:%d",year,week,days);

    return 0;
} 