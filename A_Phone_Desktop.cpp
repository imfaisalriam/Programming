#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define init long long int
#define float long double
#define endl '\n'
#define fastios ios::sync_with_stdio(false), cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int main()
{
    fastios;
    init t;
    cin >> t;
    while (t--)
    {
        init a, b;
        cin>>a>>b;
        init total=(a*1+b*4);
        init num_of_screen=ceil((float)total/15.0);
        init x=ceil((float)b/2.0);
        // cout<<x<<endl;
        
        if (num_of_screen>=x)
        {
           cout<<num_of_screen<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
        

    }
}
