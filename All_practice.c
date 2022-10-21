#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num, guess, nguess;
    srand(time(0));
    num = rand() % 20 + 1;
    printf("%d\n", num);
    printf("Enter the num between 1 to 20\n");
    do
    {
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("larchat ho ka be \n ");
        }

        else if (guess < num)
        {
            printf("bhkk teri maa ki chut\n");
        }
        else
        {
            printf("WAAH RANDI RONA KR KE %d  BAAR ME BTA HI DIYA\n", nguess+1);
        }
        nguess++;
    } while (num != guess);

    if (nguess == 1)
    {
        printf(" hmm toh bole hi the ye kr lega  ");
    }
    else if (nguess == 2)
    {
        printf(" Bhot hi ache trh khela aapne  ");
    }
    else if (nguess == 3)
    {
        printf(" DER AAYE DURUST AAYE ");
    }
    else
    {
        printf(" Gand fte toh fte pr nbanbi na ghte ");
    }

    return 0;
}