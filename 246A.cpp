/*
*  Authur: Shirajul Islam Shakur
*  Problem Link: https://codeforces.com/problemset/problem/246/A
*  Codeforces Profile: https://codeforces.com/profile/Shakur
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    if(n == 1 or n == 2){
        cout<<-1<<endl;
    }
    else{
        for(ll i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}