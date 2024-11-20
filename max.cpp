#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxVal = max(a[i], maxVal);
    }

    cout << maxVal << endl;
    return 0;
}