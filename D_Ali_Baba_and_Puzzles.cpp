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
    init a,b,c,d;
    cin>>a>>b>>c>>d;

    if (a*b+c==d)
    {
        /* code */yes;
    }
    else if (a*b-c==d)
    {
        /* code */yes;
    }
    else if (a+b*c==d)
    {
        /* code */yes;
    }else if (a+b-c==d)
    {
        /* code */yes;
    }else if (a-b*c==d)
    {
        /* code */yes;
    }
    else if (a-b+c==d)
    {
        /* code */yes;
    }
    
    else
    {
        /* code */no;
    }  
      
}
