// https://www.codechef.com/problems/HMAPPY2

#include <iostream>
using namespace std;

long gcd(long a,long b){
    return b==0?a:gcd(b,a%b);
}

long lcm(long a,long b){
    long gcd_=gcd(a,b);
    long lcm_=a*b/gcd_;
    return lcm_;
}


int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--){
	    long n,a,b,k;
	    cin>>n>>a>>b>>k;
	    int ans=(n/a)+(n/b)-2*(n/lcm(a,b));
	    if(ans>=k) cout<<"Win"<<endl;
	    else cout<<"Lose"<<endl;
	}
	return 0;
}
