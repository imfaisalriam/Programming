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
    //{
    init a, b;
    cin >> a >> b;
    float p = b / (1 - (a / 100.0));
    cout << setprecision(2) << fixed << p << endl;
    //}
}