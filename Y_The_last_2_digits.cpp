#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl '\n'
#define fastios ios::sync_with_stdio(0), cin.tie(0)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
int main()
{
   fastios;
   // ll t;
   // cin >> t;
   // while (t--)
   //{
   ll ar[4];
   for (ll i = 0; i < 4; i++)
   {
      cin >> ar[i];
      ll x = ar[i] % 100;
      ar[i] = x;
   }

   ll multification = 1;
   for (ll i = 0; i < 4; i++)
   {
      multification *= ar[i];
   }
   int y = multification % 100;
   if (y == 0)
      cout << "00" << endl;
   else if(y>10&&y<99)
      cout << y << endl;
   else
      cout << "0" << y << endl;

   // }
}
