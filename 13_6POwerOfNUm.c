#include <stdio.h>  
#include <math.h>  
int main ()  
{  
    int num,power;
printf("Enter the number :");
scanf("%d",&num);
printf("Enter the power of the number :");
scanf("%d",&power);
int result = pow(num,power);
printf("The num %d with power %d is %d",num,power,result);
}  