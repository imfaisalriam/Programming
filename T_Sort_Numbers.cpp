#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl '\n'
#define fastios ios::sync_with_stdio(false), cin.tie(NULL)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
int main()
{
    fastios;
    // ll t;
    //  cin >> t;
    //  while (t--)
    //{
    ll n = 3;
    int arr[n];
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ar[i] = arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout<<endl;
    for (ll j = 0; j < n; j++)
    {
        cout << ar[j] << endl;
    }

    //}
}
