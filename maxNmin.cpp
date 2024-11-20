#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxVal = max({a, b, c});
    int minVal = min({a, b, c});

    cout << minVal << " " << maxVal << endl;
    return 0;
}