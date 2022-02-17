#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll t = n;
        ll sec=0;
        ll curr=0;
        while(t){
            if(n&(1<<curr)){
                // do nothing
            }
            else sec+=(1<<curr);
            curr++;
            t>>=1;
        }
        cout<<sec*n<<"\n";
    }
    return 0;
}
