
#include <stdio.h>

int main()
{
    int cost1, cost2, cost3, sum = 0;
    scanf("%d %d %d", &cost1, &cost2, &cost3);
    if (cost1 < cost2 && cost1 < cost3)
    {
        if (cost2 < cost3)
        {
            sum = cost1 + cost2;
        }
        else
        {
            sum = cost1 + cost3;
        }
    }
    else if (cost2 < cost1 && cost2 < cost3)
    {
        if (cost1 < cost3)
        {
            sum = cost2 + cost1;
        }
        else
        {
            sum = cost2 + cost3;
        }
    }
    else
    {
        if (cost1 < cost2)
        {
            sum = cost3 + cost1;
        }
        else
        {
            sum = cost3 + cost2;
        }
    }

    printf("%d\n", sum);

    return 0;
}