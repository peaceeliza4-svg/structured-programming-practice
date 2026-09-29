#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal, rate, interest;
     int days;

    printf ("enter loan principal(-1 to end):");
    scanf("%f",&principal);
    while(principal !=-1){
            printf("enter interest rate:");
    scanf("%f",&rate);
    printf("enter term of the loan in days:");
    scanf("%d",& days);
    interest =principal * rate * (days/365.0);
    printf("the interest charge is %.2fugx\n",interest);
    printf(" enter loan principal(-1 to end):");
    scanf("%f",&principal);
    }

    return 0;
}
