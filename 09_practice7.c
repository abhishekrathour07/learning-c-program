#include<stdio.h>

 typedef struct date{
    int date;
    int month;
    int year;
}date;

void display(date d){
printf("The date is %d/%d/%d\n",d.date,d.month,d.year);
}

int datecmp(date d1,date d2){
 if(d1.year>d2.year){
    return 1;
 }
 if(d1.year<d2.year){
    return -1;
 }
 if(d1.month>d2.month){
    return 1;
 }
 if(d1.month<d2.month){
    return -1;
 }
 if(d1.date>d2.date){
    return 1;
 }
 if(d1.date<d2.date){
    return 0;
 }

}
void main(){
 date d1= {2,4,2022};
    date d2= {22,11,2012};
    display(d1);
    display(d2);
    int a= datecmp(d1,d2);
    printf("The compare of date d1 and d2 is : %d",a);
}