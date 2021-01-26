** Q3- CodeChef January CookOff 2021 Div3 **

#include <bits/stdc++.h>
using namespace std;

const long mx=1e6+5;
long ans[mx];
long p[mx]={0};

 void prime_sieve(){
    p[2]=1;
	p[1]=0;
    p[0]=0;
    
	for(long i=3;i<mx;i+=2) p[i]=1;
	for(long i=3;i<mx;i+=2){
		if(p[i]==1){
			for(long j=i*i;j<mx;j+=i){
				p[j]=0;
			}	
		}
	}
	ans[0]=0;
	ans[1]=0;
	for(long i=2;i<mx;i++){
		if(p[i] && p[i-2]){
			ans[i]=ans[i-1]+1;
		}
		else ans[i]=ans[i-1];
	}
    
}


int main() {
	// your code goes here
	long t;
	cin>>t;
	prime_sieve();
    while(t--){
	    long n;
	    cin>>n;
	    cout<<ans[n]<<endl;
	}
	return 0;
}


