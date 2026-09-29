#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,product;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 2nd number:");
    scanf("%d",&b);
    printf("enter 3rd number:");
    scanf("%d",&c);
    product= a*b*c;

    printf("product of the numbers is%d\n",product);
    return 0;
}
