#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, temperature, sum = 0;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cin >> temperature;
        if (temperature < 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}