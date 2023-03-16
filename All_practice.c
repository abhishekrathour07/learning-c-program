#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    printf("enter the n avlue :");
    scanf("%d",&n);
    printf("Number = %d\n",n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;

    }
    printf("reverse = %d\n",sum);
    if(temp ==sum)
    printf("its a palindrome number");
    else
    printf("its not apalindrome number");
}