/*
* Authur: Shirajul Islam Shakur
* Codeforces Profile: https://codeforces.com/profile/Shakur
* Problem Link: 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                arr[i]+=1;
            }
        }
        for(ll i=1;i<n;i++)
        {
            if(arr[i]%arr[i-1]==0)
            {
                arr[i]+=1;
            }
        }
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}