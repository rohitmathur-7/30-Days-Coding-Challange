** Ques - Playing With Bits**
Rohit likes to play with bits. One day Rohit decides to assign a task to Sanya.
You have help Sanya to complete this task. Task is as follows - Rohit gives Q queries each query containing two integers a and b.
Your task is to count the no of set-bits in for all numbers between a and b (both inclusive).

#include<iostream>
using namespace std;

int main(){
	long t;
	cin>>t;
	while(t--){
		long a,b;
		cin>>a>>b;
		long ans=0;
		for(long i=a;i<=b;i++){
			ans+=__builtin_popcount(i);
		}
		cout<<ans<<endl;
	}
	return 0;
}
