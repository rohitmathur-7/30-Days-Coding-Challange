** Ques: tvas and sadas **

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int cnt=0;
	int n1=n;
	while(n1){
		cnt++;
		n1=n1/10;
	}
	int d=cnt-1;
	int s1=2*((1<<d)-1);
	int s2=0;
	int c=0;
	while(n){
		int a=n%10;
		if(a==7){
			s2+=(1<<c);
		}
		n=n/10;
		c++;
	}
	cout<<s1+s2+1<<endl;;
	return 0;
}

