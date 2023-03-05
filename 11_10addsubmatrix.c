// Ques no. 10
#include<stdio.h>

void main(){
    int a[10][10],b[10][10],sum[10][10],sub[10][10];
    int i,j,r,c;
    printf("enter the num of rows and column");
    scanf("%d %d",&r ,&c);
    printf("Enter the element of matrix 1\n");
        for(i=0;i<r;i++){
            for (j=0;j<c;j++){
                printf("Enter %d %d terms",i,j);
                scanf("%d",&a[i][j]);
            }
        }
    printf("Enter the element of matrix 2\n");
         for(i=0;i<r;i++){
            for (j=0;j<c;j++){
                printf("Enter %d %d terms",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        printf("matrix 1 are :-\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("matrix 2 are :-\n");
          for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
          for(i=0;i<r;i++){
            for(j=0;j<c;j++){
               sum[i][j] = a[i][j]+ b[i][j];
               sub[i][j] = a[i][j]- b[i][j];
            }
        }
        printf(" The sum matrix are :-\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
              printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        printf(" The sub matrix are :-\n");
         for(i=0;i<r;i++){
            for(j=0;j<c;j++){
              printf("%d\t",sub[i][j]);
            }
            printf("\n");
        }
    }
