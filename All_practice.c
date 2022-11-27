#include <stdio.h>
int main(){
    int t1=0,t2=1,t3=t1+t2;
    int n ,i;
    printf("Enter the num to find fibo series");
    scanf("%d",&n);
    printf("FIBO SERIES ARe %d ,%d,",t1,t2);
    for(i=2;i<n;i++){
        printf("%d,",t3);
        t1=t2;
        t2=t3;t3 =t1+t2;
    }
}
