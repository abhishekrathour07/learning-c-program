#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void red()
{
    printf("\033[1;31m");
}
// green color text
void green()
{
    printf("\033[1;32m");
}

// yellow colour text
void yellow()
{
    printf("\033[1;33m");
}
void cyan()
{
    printf("\033[1;36m");
}

// blue colour of text
void purple()
{
    printf("\033[1;35m");
}
// for white
void white()
{
    printf("\033[1;39m");
}

// for loading
int load()
{
    int i;
    while (1)
    {
        cyan();
        printf("LOADING\t");
        for (i = 0; i < 3; i++)
        {
            red();
            Beep(3700, 500);

            printf(">>");

            Beep(3000, 500);
        }
        system("cls"); // for clearing the terminal screen
        break;
    }
}
void quicksort(int arr[20], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }
}

int main()
{
    int arr[20], n;
    int choice, count, gap;
    int i, j, position, temp;
    // load();
    // green();
    // printf("ENTER THE SIZE OF AN ARRAY");
    // scanf("%d", &n);
    // printf("ENTER THE ELEMENT IN THE ARRAY\n");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    load();
    while (1)
    {

        cyan();
        printf("\n=============== WHICH TYPE OF SORTING YOU WANT TO DO ===============\n");
        white();
        printf("\nCHOOSE ANY OPTION\n 1.SELECTION SORT\n 2.BUBBLE SORT\n 3.INSERTION SORT \n 4.SHELL SORT \n 5. QUICK SORT\n 6.DISPLAY\n 7.EXIT\n ");

        cyan();
        printf("\n======================================================================\n");
        white();
        printf("Enter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            green();
            printf("ENTER THE SIZE OF AN ARRAY");
            scanf("%d", &n);
            printf("ENTER THE ELEMENT IN THE ARRAY\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            for (i = 0; i < (n - 1); i++)
            {
                position = i;
                for (j = i + 1; j < n; j++)
                {
                    if (arr[position] > arr[j])
                        position = j;
                }
                if (position != i)
                {
                    temp = arr[i];
                    arr[i] = arr[position];
                    arr[position] = temp;
                }
            }
            break;
        case 2:
            printf("ENTER THE SIZE OF AN ARRAY");
            scanf("%d", &n);
            printf("ENTER THE ELEMENT IN THE ARRAY\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            for (i = 0; i < n - 1; i++)
            {
                count = 0; // avoiding unwanted pass
                for (j = 0; j < n - 1 - i; j++)
                { // n-1-i because avoiding the unnessessary  step during passes.
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        count = 1;
                    }
                }
                if (count == 0)
                {
                    break;
                }
            }
            break;
        case 3:
        purple();
            printf("ENTER THE SIZE OF AN ARRAY");
            scanf("%d", &n);
            printf("ENTER THE ELEMENT IN THE ARRAY\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            for (i = 0; i < n; i++)
            {
                temp = arr[i];
                j = i - 1;
                while (j >= 0 && arr[j] > temp)
                {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = temp;
            }
            break;
        case 4:
        red();
            printf("ENTER THE SIZE OF AN ARRAY");
            scanf("%d", &n);
            printf("ENTER THE ELEMENT IN THE ARRAY\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            for (gap = n / 2; gap > 0; gap = gap / 2)
            {
                for (j = gap; j < n; j++)
                {
                    for (i = j - gap; i >= 0; i = i - gap)
                    {
                        if (arr[i + gap] > arr[i])
                        {
                            break;
                        }
                        else
                        {
                            temp = arr[i];
                            arr[i] = arr[i + gap];
                            arr[i + gap] = temp;
                        }
                    }
                }
            }
            break;
        case 5:
        yellow();
            printf("ENTER THE SIZE OF AN ARRAY");
            scanf("%d", &n);
            printf("ENTER THE ELEMENT IN THE ARRAY\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            quicksort(arr, 0, n - 1);
            break;
        case 6:
            red();
            load();
            printf("\n\nSORTED ARRAY ARE :\n");
            purple();
            for (i = 0; i < n; i++)
            {
                printf("%d\t", arr[i]);
            }
            break;

        case 7:
            yellow();
            printf("please wait....");
            load();
            exit(1);
            break;
        case 8:
        default:
            yellow();
            printf("ENTER CORRECT CHOICE");
        }
    }
}