#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int c = n / 4;
        int h = (n % 4) / 2;
        cout << c + h << endl;
    }
}
