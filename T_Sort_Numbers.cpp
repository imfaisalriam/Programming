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
        cin >> arr[i]; 
    }
    int x=min({arr[0],arr[1],arr[2]});
    int y=max({arr[0],arr[1],arr[2]});
    
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] <<endl;
    }
    

}
