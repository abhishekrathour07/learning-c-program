// write a program to find muntiplicatioon table of a given number? using loops.
// #include <stdio.h>

// int main()
// {
//     int i = 1, num;
//     printf("enter the num.");
//     scanf("%d", &num);
//     while (i < 11)
//     {
//         printf("the multiplication table is %d x%d =%d\n", num, i, i * num);
//         i++;
//     }
// //     return 0;}
#include <stdio.h>
    int main()
    {
        int num, i = 1;
        printf("enter the num");
        scanf("%d", &num);
        do
        {
            printf("the table is %d\n ", num * i);
            i++;

        } while (i <= 10);

        return 0;
        
    }