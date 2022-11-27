#include <stdio.h>
int fact(int n)
{
    if(n!=0){
        return n* fact(n-1);
    }else{
        return 1;
    }
}
    int main(){
        int num; 
        printf("enter the num");
        scanf("%d",&num);
        printf("fact of %d is %d",num,fact(num));
    }
