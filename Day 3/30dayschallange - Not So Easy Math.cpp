** Ques - Not So Easy Math **
Find out the number of numbers between 1 and n which are divisible by any of the prime numbers less than 20.

#include<iostream>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	ll primes[]={2,3,5,7,11,13,17,19};
	while(t--){
		ll n;
		cin>>n;
		ll subsets=(1<<8)-1;
		ll ans=0;
		for(int i=1;i<=subsets;i++){
			ll denom=1ll;
			for(int j=0;j<=7;j++){
				if(i&(1<<j)){
					denom*=primes[j];
				}
			}
			ll setBits=__builtin_popcount(i);
			if(setBits & 1){
				ans+=(n/denom);
			}
			else{
				ans-=(n/denom);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
