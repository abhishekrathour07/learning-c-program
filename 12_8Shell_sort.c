#include<stdio.h>

void main(){
    int i,j,n,temp,a[25],gap;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the unsorted array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(gap=n/2;gap>0;gap=gap/2){
    for(j=gap;j<n;j++){
        for(i=j-gap;i>=0;i=i-gap){
            if(a[i+gap]>a[i]){
                break;
            }
            else{
                temp=a[i];
                a[i]=a[i+gap];
                a[i+gap] =temp;
            }
        }
    }
}
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}

}