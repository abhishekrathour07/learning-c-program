#include<stdio.h>

void main(){
    int i,n,a[10],b[10],sum[10];
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter a[i] elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } printf("enter b[i] elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    } for(i=0;i<n;i++){
        sum[i]=a[i]+b[i];
    } for(i=0;i<n;i++){
        printf("%d\t",sum[i]);
    }
}