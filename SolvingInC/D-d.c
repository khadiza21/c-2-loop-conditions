#include <stdio.h>

int main()
{
    int number;
    double num1, num2, multifly, sum = 0;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        scanf("%lf", &num1);
        scanf("%lf", &num2);

        multifly = num1 * num2;
        sum += multifly;
    }
    printf("%.3lf\n", sum);

    return 0;
}
