#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl '\n'
#define fastios ios::sync_with_stdio(0), cin.tie(0)
#define yes cout << "Right" << endl
#define no cout << "Wrong" << endl
int main()
{
    fastios;
    // ll t;
    // cin >> t;
    // while (t--)
    //{
    ll a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '>')
    {
        if (a > b)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else if (c == '<')
    {
        if (a < b)
        {
            yes;
        }
        else
        {
            no;
        }
    }
     if (c == '=')
    {
        if (a == b)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}
