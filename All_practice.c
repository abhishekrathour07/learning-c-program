#include<stdio.h>

int add(int a,int b ,int c)
{
   int d=a+b-c;
   return d;
}
int add(int a,int b,int c)
{
   int d=a+b+c;
   return d;
}
int main()
{
   int a=2,b=4,c=5;
   add(a,b,c);
   add(a,b,c);
   printf("%d",add);
   return 0;
}
