#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,a1=0,b1=1;
        string str;
        cin>>n>>a>>b;
        for(ll i=0;i<n;i++)
        {   
            if(a1==a)
            {
                a1=0;
                b1=1;
            }
            str.push_back('a'+b1-1);
            a1++;
            if(b1!=b){
                b1++;
            }
        }
        cout<<str<<endl;
    }
}