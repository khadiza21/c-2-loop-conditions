#include <stdio.h>
int main()
{
    int number, countFive = 0, countSeven = 0;
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &number);

        if (number == 5)
        {
            countFive++;
        }
        if (number == 7)
        {
            countSeven++;
        }
    }

    if (countFive == 2 && countSeven == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}