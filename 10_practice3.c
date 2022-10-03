// Write a program to read atext file charcter by charcter and write it content  twice in aseperate file.

#include<stdio.h>

void main(){
    char c;
FILE *ptr1 ;
FILE *ptr2 ;
ptr1 =fopen("practice3r.txt","r");
ptr2 =fopen("practice3w.txt","w");
c = fgetc(ptr1);
while(c!=EOF){
    fputc(c,ptr2);
    fputc(c,ptr2);
 c= fgetc(ptr1);

}
fclose(ptr1);
fclose(ptr2);
}