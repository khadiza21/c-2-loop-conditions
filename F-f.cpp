#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, five = 0, seven = 0;
    for (int i = 1; i <= 3; i++)
    {
        cin >> number;
        if (number == 5)
        {
            five++;
        }
        if (number == 7)
        {
            seven++;
        }
    }

    if (five == 2 && seven == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}