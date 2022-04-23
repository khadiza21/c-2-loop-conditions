#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    sum = a + b;
    if (sum >= 10)
    {
        printf("error\n");
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}