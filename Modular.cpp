#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    ll count=0;
	    vector <ll> arr(n+1,1);
	    
	    for(ll i=2;i<=n;i++){
	        ll a = m % i;
	        count+=arr[a];
	        for(ll j=a;j<=n;j+=i)
	            arr[j]++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

