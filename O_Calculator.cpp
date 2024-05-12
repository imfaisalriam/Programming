#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;
int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op=='+')
    {
        cout<<a+b;
    }
    else if (op=='-')
    {
        cout<<a-b;
    }
    else if (op=='*')
    {
        cout<<a*b;
    }
    else
    {
        cout<<a/b;
    }
    
}
