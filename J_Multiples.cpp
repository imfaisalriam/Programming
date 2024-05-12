#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a%b==0 || b%a==0)
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples"<<endl;
    }
}