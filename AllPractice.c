#include<stdio.h>

void main(){
    int eng,hindi, evs;
    float marks;
    printf("enter the marks in hindi\n");
    scanf("%d",& hindi);
 printf("enter the marks in eng\n");
    scanf("%d",& eng);
 printf("enter the marks in evs\n");
    scanf("%d",& evs);
    marks = (hindi+eng+evs)/3;
    if((marks<40)||eng<33||hindi<33||evs<33)
       printf("your Percentge is %.3f and you are fail",marks);
       else{
        printf("your percentage is %.3f you are pASS",marks);
       }
    
}