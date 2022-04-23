#include <stdio.h>
int main()
{
    int ratings;

    scanf("%d", &ratings);

    if (ratings < 1200)
    {
        printf("ABC\n");
    }
    else
    {
        printf("ARC\n");
    }
    return 0;
}