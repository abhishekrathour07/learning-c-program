#include <stdio.h>
#include<conio.h>
 int rows, columns;
 /* adds two matrices and stores the output in third matrix */
 void matrixAddition(int mat1[][10], int mat2[][10], int mat3[][10]) {
 int i, j;
 for (i = 0; i < rows; i++) {
 for (j = 0; j < columns; j++) {
 mat3[i][j] = mat1[i][j] + mat2[i][j];
 }
 }
 return;
 }
 int main() {
 int matrix1[10][10], matrix2[10][10];
 int matrix3[10][10], i, j;
 /* get the number of rows and columns from user */
printf("\nEnter the no of rows and columns(<=10):\n");
scanf("%d%d", &rows, &columns);
if (rows > 10 || columns > 10) {
printf("\nNo of rows/columns is greater than 10\n");
return 0;
}
/* input first matrix */
printf("\nEnter the input for first matrix:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < columns; j++) {
scanf("%d", &matrix1[i][j]);
}
}
/* input second matrix */
printf("\nEnter the input for second matrix:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < columns; j++) {
scanf("%d", &matrix2[i][j]);
}
}
/* matrix addtion */
matrixAddition(matrix1, matrix2, matrix3);
/* print the results */
printf("\nResult of Matrix Addition:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < columns; j++) {
printf("%5d", matrix3[i][j]);
}
printf("\n");
}
return 0;
 }