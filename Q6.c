/* Question 6 */
#include<stdio.h>
int main(){
    int divisor,dividend,quotient,remainder;

    printf("Enter divisor and dividend respectively: ");
    scanf("%d %d",&divisor,&dividend);

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    printf("Quotient and Remainder are %d and %d respectively. ", quotient,remainder);

    return 0;
} 