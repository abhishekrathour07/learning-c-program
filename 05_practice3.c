//write a function to calculte force of attraction on a body of mass m exerted by earth 
#include<stdio.h>
float force(float mass);
int main(){
float m;
printf("enter the mass");
scanf("%f",&m);
printf("the force if attraction on a body is %.3f",force(m));

    return 0;
}
float force(float mass){
   float result = mass*9.8;
    return result;

}
