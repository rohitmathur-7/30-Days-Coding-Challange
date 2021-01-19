** Ques: Incredible Hulk **

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if((n&(n-1))!=0){
			int p=log2(n);
			int a=1<<p;
			int d=n-a;
			int q=d&(d-1);
			if(q==0) cout<<"2"<<endl;
			else cout<<"3"<<endl;
		}
		else cout<<"1"<<endl;
	}
	return 0;
}

