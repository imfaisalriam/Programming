#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    cout<<arr[0]<<' '<<arr[2]<<endl;
    

    return 0;
}