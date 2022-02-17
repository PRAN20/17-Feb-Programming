#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll res=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                ll x;
                cin>>x;
                if(i==0 || j==0 || i==n-1 || j==n-1 || i==j || i+j==n-1){
                    res+=x;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
