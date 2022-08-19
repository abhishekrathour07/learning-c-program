#include<stdio.h>
int main()
{
  char charcter;
        printf("enter thhe charcter\n");
            scanf("%c", &charcter);
            if(charcter>='a' && charcter<='z')
            {
           printf(" it is lowercase ");
            }
            else if(charcter>='A' && charcter<='Z')
            {
            printf("it is uppercase ");
            }
            else{
         printf("it is not uppercase or lowercase maybe it's number");
            }
                return 0;

}