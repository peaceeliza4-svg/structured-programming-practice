#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result, passes=0, failures=0,student=1;
    while (student <= 10){
    printf("enter 1 or 2 :");
    scanf("%d",result);
   if ( result !=1 && result!=2)
    {
        printf("invalid input. enter 1 or 2");
        scanf("%d",&result);

    }
    if (result==1)

        {passes++;}

    else

      {failures++;}
      student++;


    printf("passes=%d failures=%d",passes,failures);



    return 0;




}
}
