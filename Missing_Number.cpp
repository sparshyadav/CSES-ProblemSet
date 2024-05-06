#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;

    long long int sum = 0;
    long long int el;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> el;
        sum += el;
    }

    cout << n * (n + 1) / 2 - sum;

    return 0;
}
