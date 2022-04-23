
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int costs[3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> costs[i];
    }
    int n = sizeof(costs) / sizeof(costs[0]);

    sort(costs, costs + n);

    for (int i = 0; i < 2; i++)
    {
        sum += costs[i];
    }
    cout << sum;
    return 0;
}