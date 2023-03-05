// Ques no.1
#include<stdio.h>

int main(){
    int r;
    float area,circum;
    printf("Enter the radius");
    scanf("%d",&r);
    area = 3.14*r*r;
    circum = 2*3.14 *r;
    printf("area of the circle is %.3f\n",area);
    printf("Circumfrance of the circle is %.3f\n",circum);
return 0;
}