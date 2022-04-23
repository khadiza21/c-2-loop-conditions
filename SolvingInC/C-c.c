#include <stdio.h>
int main()
{
    int number, temperature, sum = 0;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        scanf("%d", &temperature);

        if (temperature < 0)
        {
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}
