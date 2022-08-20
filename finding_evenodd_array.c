// #include <stdio.h>

// void main()
// {
//     int arr[100], evenarr[100], oddarr[100];
//     int i, even = 0, odd = 0, size;
//     printf("Enter the size of the array\n");
//     scanf("%d", &size);
//     printf("Numbers of element are\n");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] % 2 == 0)
//         {
//             evenarr[even] = arr[i];
//             even++;
//         }
//             else
//             {
//                 oddarr[odd] = arr[i];
//                 odd++;
//             }
//         }
//     printf("the even array are\n");
//     for (i = 0; i < even; i++)
//     {
//         printf("%d,", evenarr[i]);
//     }
//     printf("\nthe value of odd array are\n");

//     for (i = 0; i < odd; i++)
//     {
//         printf("%d,", oddarr[i]);
//     }
// }
#include <stdio.h>
    void main()
    {

        int array[100], i, num;
        printf("Enter the size of an array \n");

        scanf("%d", &num);
        printf("Enter the elements of the array \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Even numbers in the array are - ");
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 == 0)
            {
                printf("%d ", array[i]);
            }
        }

        printf("\n Odd numbers in the array are -");
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 != 0)
            {
                printf("%d ", array[i]);
            }
        }

}
// #include <stdio.h>
// void main()
// {
//     int arr[50], i, size, even = 0, odd = 0 ;
//     printf("Enter the size\n ");
//     scanf("%d", &size);
//     printf("Enter the element of array\n");
//     for (i = 0; i < size; i++)
//     { scanf("%d",&arr[i]);
// printf("Even numbers in the array are - ");
//              if (arr[i] % 2 == 0)
//              {
//                  printf("%d ", arr[i]);
//              }
//          printf("\n Odd numbers in the array are -");
//              if (arr[i] % 2 != 0)
//              {
//                  printf("%d ", arr[i]);
//              }
//          }
// }
         
         
         
    