#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;
int main()
{
    char X;
    cin>> X;
    if (X>='0'&&X<='9')
    {
        cout<<"IS DIGIT";
    }
    else if (/* condition */X>='a' && X<='z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    else
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    
}
