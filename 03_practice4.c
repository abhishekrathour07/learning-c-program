// write a concept of find leap year
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
printf("enter the year");
scanf("%d",& year);

if(year%400==0 || year%100!=0 && year%4==0){
printf("this is leap year");

}else{
    printf("this is not leap year");
}
    return 0;
}