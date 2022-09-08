#include <stdio.h>

int main()
{
    int i = 2;
    int *j, **k;
    j = &i, k = &j;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", j);
    printf("the address of j is %u\n", &j);
    printf("the value of j is %u\n", *(&j));
    printf("the address of k is %u\n", &k);
    printf("the address of k is %u\n", *(&k));

    return 0;
}