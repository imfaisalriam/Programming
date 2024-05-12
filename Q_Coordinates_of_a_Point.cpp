#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Eixo X" << endl
#define no cout << "Eixo Y" << endl
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    if (x>0 && y>0)
    {
        cout<<"Q1";
    }
    else if (x<0 && y>0)
    {
        cout<<"Q2";
    }
    else if (x>0 && y<0)
    {
        cout<<"Q4";
    }
    else if (x<0 && y<0)
    {
        cout<<"Q3";
    }
    else if (x==0 && y==0)
    {
        cout<<"Origem";
    }
    else if (y==0)
    {
        yes;
    }
    else
    {
        no;
    }
    
}
