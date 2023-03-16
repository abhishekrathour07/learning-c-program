// Ques no. 8
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, total[20],m1[20],m2[20],m3[20];
    float average[20];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of 3 subjects of student %d: ",i+1);
        scanf("%d %d %d",&m1[i],&m2[i],&m3[i]);
    }
    for(i=0;i<n;i++)
    {
        total[i]=m1[i]+m2[i]+m3[i];
        average[i]=(float)total[i]/3;
    }
        printf("-----------------------------------------\n");
        printf("s.no        average marks        grade\n");
        printf("-----------------------------------------\n"); 
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %d\t %d\t%f\n",i+1,m1[i],m2[i],m3[i],average[i]);
        printf("-----------------------------------------\n");


    //     if(average[i]>=35)
    //         printf("\nStudent is PASS\n");
    //     else
    //         printf("\nStudent is FAIL\n");
    }
}
