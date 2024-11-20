#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *A = new int[n]; // dynamic first array of size n

    for (int i = 0; i < n; i++)
    {
        cin >> A[i]; // taking input for first array of size n
    }

    int m;
    cin >> m;
    int *B = new int[m]; // dynamic second array of size m

    for (int i = 0; i < n; i++)
    {
        B[i] = A[i]; // copying first array to second array
    }

    delete[] A; // delete the first array of size n

    for (int i = n; i < m; i++)
    {
        cin >> B[i]; // taking input for the rest of the index of second array of size m
    }

    for (int i = 0; i < m; i++)
    {
        cout << B[i] << " "; // print the second array of size m
    }

    return 0;
}