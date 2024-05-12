#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "ARE Brothers" << endl
#define no cout << "NOT" << endl
using namespace std;
int main()
{
    string name11,name12;
    string name21,name22;
    cin>>name11>>name12>>name21>>name22;
    int comparison=strcmp(name12.c_str(),name22.c_str());
    if (/* condition */comparison==0)
    {
        /* code */yes;
    }
    else
    {
        /* code */no;
    }
    
}
