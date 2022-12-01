#include<stdio.h>
#include<conio.h>
void main()
{
    int n, a[25], i, total[20],m1[20],m2[20],m3[20];
    float average[20];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of 3 subjects of student %d: ",i+1);
        scanf("%d %d %d",&m1[i],&m2[i],&m3[i]);
    }
    for(i=0;i<3;i++)
    {
        total[i]=m1[i]+m2[i]+m3[i];
        average[i]=(float)total[i]/3;
    }
    for(i=0;i<n;i++)
    {
        printf("\nAverage/percentage marks of student %d is: %f",i+1,average[i]);
        if(average[i]>=35)
            printf("\nStudent is PASS");
        else
            printf("\nStudent is FAIL");
    }
    getch();
}