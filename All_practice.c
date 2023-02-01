#include<stdio.h>
#include<math.h>

void main(){

float a,b,c;
float disc,r1,r2;
printf("Enter the value of coefficient a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a==0){
    printf("Quadretic is not possible\n");

}
else{
    disc = b*b-4*a*c;
    if(disc==0){
        r1 = -b/2.0*a;
        printf("roots are real and equal\n");
        printf("discriminant = %f\n",disc);
        printf("Root 1 = %f\nroot 2 = %f",r1,r1);

    }
    else if(disc>0){
  r1 = -b+ sqrt(disc)/2.0*a;
  r2 = -b- sqrt(disc)/2.0*a;

         printf("roots are real and unequal\n");
        printf("discriminant = %f\n",disc);
        printf("Root 1 = %f\nroot 2 = %f",r1,r2);
    }
    else {
        disc =-disc;
        r1 = -b/2.0*a;
        r2 = sqrt(disc),
      printf("roots are complex and unequal\n");
        printf("discriminant = %f\n",disc);
        printf("Root 1 = %f\nroot 2 = %f",r1,r2);
    }
}
    

}