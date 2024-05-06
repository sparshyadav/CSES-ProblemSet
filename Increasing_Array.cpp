#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;

    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            count += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << count;

    return 0;
}