#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;
int main()
{
    int n;
    cin >> n;
    int yr=n/365;
    int mon=(n%365)/30;
    int day=(n%365)%30;
    cout<<yr<<" years\n"<<mon<<" months\n"<<day<<" days";

}
