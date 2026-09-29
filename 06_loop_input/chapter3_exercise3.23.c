#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=1,number,largest=0;
    while (counter<=10)
    {
        printf("enter number %d:",counter);
        scanf("%d",&number);
        if (number>largest)
        {
            largest=number;
        }
        counter++;
        if (number<0){
            printf("invalid input,you cant use a negative value");

        }
    }
    printf("\nthe largest number is %d\n",largest);
    return 0;
}
