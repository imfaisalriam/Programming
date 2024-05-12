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
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll sum1=0,sum2=0;
        int x=n/2;
        for (int i = 0; i < x; i++)
        {
            sum1+=arr[i];
        }
        for (int i = x; i < n; i++)
        {
            sum2+=arr[i];
        }
        cout<<sum2-sum1<<endl;

        
        
    }
}
