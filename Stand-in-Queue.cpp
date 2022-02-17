#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n),b;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<n;i++){
            b.push_back(abs(a[i]-a[i-1]));
        }
        bool flag1 = true, flag2 = true;
        for(ll i=1;i<n-2;i++){
            if(b[i]!=b[i-1]+1) flag1 = false;
            if(b[i]!=b[i-1]-1) flag2 = false;
        }
        if(flag1 || flag2){
            cout<<"Correct Formation\n";
        }else{
            cout<<"Incorrect Formation\n";
        }
    }
    return 0;
}
