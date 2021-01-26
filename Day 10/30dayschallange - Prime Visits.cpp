** QUES: Prime Visits - Prime Sieve Problem

#include<bits/stdc++.h>
using namespace std;

void prime_sieve(long long *p){
	for(long long i=3;i<=100000;i+=2) p[i]=1;
	for(long long i=3;i<=100000;i+=2){
		if(p[i]==1){
			for(long long j=i*i;j<=100000;j+=i){
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[0]=p[1]=0;
}

int main(){
	long long t;
	cin>>t;
	long long p[100001]={0};
	prime_sieve(p);
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long ans=0;
		for(long long i=a;i<=b;i++){
			if(p[i]==1) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
