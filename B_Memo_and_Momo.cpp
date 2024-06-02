#include <bits/stdc++.h>
using namespace std;
#define init long long int
#define float long double
#define endl '\n'
#define fastios ios::sync_with_stdio(false), cin.tie(NULL)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
int main()
{
    fastios;
    init t;
    // cin >> t;
    // while (t--)
    // {
    init a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0)
    {
        cout << "Both" << endl;
    }
    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo" << endl;
    }
    else if (a % k != 0 && b % k == 0)
    {
        cout << "Momo" << endl;
    }
    else
    {
        cout << "No One" << endl;
    }

    //}
}
