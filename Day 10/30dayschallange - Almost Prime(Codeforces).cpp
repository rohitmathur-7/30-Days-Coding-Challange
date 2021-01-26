#include<bits/stdc++.h>
using namespace std;

long long int sieve(long long *p,long long int n){
	for(long long int i=3;i<=100000;i+=2) p[i]=1;
	for(long long int i=3;i<=100000;i+=2){
		if(p[i]==1){
			for(long long int j=i*i;j<=100000;j+=i){
				p[j]=0;
			}	
		}
	}
	p[2]=1;
	p[1]=0;p[0]=0;
    long long int cnt=0,ans=0;
    for(long long int j=1;j<=n;j++){
        long long int cnt=0;
        for(long long int i=2;i<n;i++){
		    if(p[i]==1){
                if(j%i==0) cnt++;
            }
	    }
        if(cnt==2) ans++;
    }
    return ans;
}

int main(){
    long long int p[100005]={0};	
	long long int n;
	cin>>n;
	cout<<sieve(p,n)<<endl;
}










 
