// https://www.codechef.com/problems/GCDMOD

#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

lli power(lli a,lli n,lli m){
    lli res=1;
    while(n){
        if(n%2==1){
            res=((res%m)*(a%m))%m;
            n--;
        }
        else{
            a=((a%m)*(a%m))%m;
            n/=2;
        }
    }
    return res;
}

lli gcd(lli a,lli b,lli n){
	if(a==b){
		return (power(a,n,mod) + power(b,n,mod))%mod;
	}
	lli candidate=1;
    lli num=a-b;
    for(lli i=1;i*i<=num;i++){
        if(num%i==0){
            lli tmp= (power(a,n,i) + power(b,n,i))%i;
            if(tmp==0) candidate=max(candidate,i);
            tmp= (power(a,n,num/i) + power(b,n,num/i))%(num/i);
            if(tmp==0) candidate=max(candidate,num/i);
        }
    }
    return  candidate%mod;
}



int main(){
	lli t;
	cin>>t;
	lli a,b,n;
	while(t--){
		cin>>a>>b>>n;
		cout<<gcd(a,b,n)<<endl;
	}
}