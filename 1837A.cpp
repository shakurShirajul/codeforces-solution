/*
*  Authur: Shirajul Islam Shakur
*  Problem Link: https://codeforces.com/problemset/problem/1837/A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<'\n'<<x;
        }
        else{
            cout<<2<<'\n'<<x-k-1<<" "<<x-(x-k-1);
        }
        cout<<endl;
    }
}