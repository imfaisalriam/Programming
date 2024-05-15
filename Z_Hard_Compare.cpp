#include <bits/stdc++.h>
using namespace std;
#define inti long long int
#define float long double
#define endl '\n'
#define fastios ios::sync_with_stdio(false), cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int main()
{
    fastios;
    inti t;
    // cin >> t;
    // while (t--)
    // {
    inti a, b, c, d;
    cin >> a >> b >> c >> d;
    inti x = 1;
    for (int i = 0; i < b; i++)
    {
        x *= a;
    }
    inti y = 1;
    for (int i = 0; i < d; i++)
    {
        y *= c;
    }
    if (x > y)
        yes;
    else
        no;

    // }
}
