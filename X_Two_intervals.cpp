#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl '\n'
#define fastios ios::sync_with_stdio(0), cin.tie(0)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
unsigned main()
{
    fastios;
    //ll t;
   // cin >> t;
   // while (t--)
   // {
      ll a, b, c, d;
      cin >> a >> b >> c >> d;
      if (c<= b&&d > b)
      {
          cout <<c<<' '<<b << endl;
      }else if (d <= b)
      {
          cout << c << ' ' << d << endl;
      }
      else
      {
        cout<<"-1"<<endl;
      }
      
        
   // }
}
