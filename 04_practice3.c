// find first 10 natural no. using  all loop types
#include <stdio.h>

int main()
{
    int n = 1;
    while (n <= 10)
    {
        printf("the frist 10 natural no. are %d\n", n);
        n++;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n = 1;
    do
    {
        printf("first 10 natural no. are %d\n", n);
        n++;
    } while (n <= 10);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        printf("first 10 natural no. are %d\n", n);
    }
    return 0;
}