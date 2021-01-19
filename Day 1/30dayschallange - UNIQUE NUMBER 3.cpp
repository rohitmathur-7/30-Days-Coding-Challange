
//** QUES - UNIQUE NUMBER 3 **
//We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. 
//Find the unique number. Only use - bitwise operators, and no extra space.
//
//Sample Input
//7
//1 1 1 2 2 2 3
//
//Sample Output
//3
//
//Explanation:
//3 is present only once

#include<iostream>
using namespace std;

int main(){
	int n,no;
	cin>>n;
	int sum[64]={0};
	for(int i=0;i<n;i++){
		cin>>no;
		int c=0;
		while(no>0){
			int a=(no&1);
			sum[c]+=a;
			c++;
			no>>=1;
		}
	}
	int ans=0;
	for(int i=0;i<64;i++){
		sum[i]%=3;
		ans+=(sum[i]*(1<<i));
	}
	cout<<ans<<endl;
	return 0;
}


















