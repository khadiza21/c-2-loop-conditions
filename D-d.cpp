#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    double num1, num2, multifly, sum = 0;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cin >> num1 >> num2;
        multifly = num1 * num2;
        sum += multifly;
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}