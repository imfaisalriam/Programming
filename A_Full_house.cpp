#include <bits/stdc++.h>
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
      int ar[5];
      for (init i = 0; i < 5; i++)
      {
          cin>>ar[i];
      }
      sort(ar,ar+5);
    if(((ar[0]==ar[1]==ar[2])&&(ar[3]==ar[4]))||((ar[0]==ar[1])&&(ar[2]==ar[3]==ar[4]))) yes;
    else no;
}
