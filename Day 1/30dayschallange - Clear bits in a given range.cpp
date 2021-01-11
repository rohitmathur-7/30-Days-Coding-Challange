
//**QUES: Clear bits in a given range form i to j **
//Ex: 
//	n=101011
//	i=1,j=3
//	So,now we should set the bits from position 1 to 3 as zero.
//	So, now n should become: n=100001


#include <bits/stdc++.h>
using namespace std;

int clearRangeItoJ(int n,int i,int j){
	int ones=~(0);
	int a=ones<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	int ans=n&mask;
	return ans;
}

int main(){
	int n,m,i,j;
	cin>>n>>m>>i>>j;
	int n_=clearRangeItoJ(n,i,j);
	int ans=n_|(m<<i);
	cout<<ans<<endl;
}
