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
    ll t;
   // cin >> t;
    //while (t--)
    //{
      ll a,b,e;
      char c,d;
      cin>>a>>c>>b>>d>>e;
      if(c=='+')
      {
          if(a+b==e)
          {
              yes;
          }
          else
          {
              cout<<a+b<<endl;
          }
      }else if(c=='-')
      {
          if(a-b==e)
          {
              yes;
          }
          else
          {
              cout<<a-b<<endl;
          }
      }else if(c=='*')
      {
          if(a*b==e)
          {
              yes;
          }
          else
          {
              cout<<a*b<<endl;
          }
      }else if(c=='/')
      {
          if(a/b==e)
          {
              yes;
          }
          else
          {
              cout<<a/b<<endl;
          }
      }
          
    //}
}
