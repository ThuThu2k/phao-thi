#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//Kiem tra so chinh phuong
ll check[1000005];
void san(ll n){
	for(ll i=2; i<=n; i++){
		check[i]=1;
	}
	for(ll i=2; i<=sqrt(n);i++){
		if(check[i]){
			for(ll j=i*2; j<=n; j+=i){
				check[j]=0;
			}
		}
	}
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		san(n);
		ll dem=0;
		for(ll i=2; i<=sqrt(n); i++){
			if(check[i])
			  dem++;
		}
		cout <<dem << endl;
	}
}
