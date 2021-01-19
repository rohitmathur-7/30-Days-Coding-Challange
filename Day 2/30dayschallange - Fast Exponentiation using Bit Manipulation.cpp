** Ques - Fast Exponentiation using Bitmasking **

#include<iostream>
using namespace std;

int main(){
	int a,n;
	cin>>a>>n;
	int ans=1;
	while(n){
		int last_bit=n&1;
		if(last_bit){
			ans*=a;
		}
		a*=a;
		n>>=1;
	}
	cout<<ans<<endl;
	return 0;
}
