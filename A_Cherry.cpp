
/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
  int t;
    cin>>t;
    while (t--)
    {
        long long int n,i;
        cin>>n;
        long long int ar[n];
        for ( i = 0; i < n; i++)
        {
            cin>>ar[i];
        }

        sort(ar,ar+n);
        long long int ans=ar[n-2]*ar[n-1];

        for ( i = 0; i < n; i++)
        {
            cout<<ar[i]<<' ';
        }
        
        cout<<'\n'<<ans<<'\n';


    }
    
  return 0;
}
