#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i,prime=1;
    printf("enter integer:");
    scanf("%d",&number);
    if (number<=1)
    {
        prime=0;
    }
    else
    {
        {for (i=2;i<number;i++)
        {
            if(number%i==0 )
                prime=0;
            break;
        }
    }

    }
    if (prime==1)
    {
        printf("\n%d is a prime number\n",number);
    }else
    {
        printf("%d is not a prime number",number);
    }

    return 0;
}
