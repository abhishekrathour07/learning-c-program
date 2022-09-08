//write a function to convert farenheit into celcius.
#include<stdio.h>
float far(int celcius);

int main(){
    int celcius;
printf("enter the value of celcius");
scanf("%d",& celcius);
printf("the value of cls in far is %.3f\n",far(celcius));
    return 0;
}
float far (int celcius){
 float far=(celcius*9/5)+32;
 return far;

}