#include <stdio.h>

int main()
{
    int magicNumber;

    scanf("%d", &magicNumber);
    for (int i = 1; i <= magicNumber; i++)
    {
        printf("%d Abracadabra\n", i);
    }

    return 0;
}