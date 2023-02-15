//recursion concept is introduce in function?

#include <stdio.h>

int factorial(int x)
{
    if (x == 0 || x==1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
int main()
{
    int a ;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf(" The factorial of %d is %d ", a, factorial(a));
    return 0;
}
// int fact(int n)
// {
//     if(n!=0){
//         return n* fact(n-1);
//     }else{
//         return 1;
//     }
// }
//     int main(){
//         int num; 
//         printf("enter the num");
//         scanf("%d",&num);
//         printf("fact of %d is %d",num,fact(num));
//     }
