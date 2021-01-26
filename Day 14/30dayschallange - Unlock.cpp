#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;
	long long arr[n+1];
	unordered_map<long long,long long> m;
	for(long long i=1;i<=n;i++){
		cin>>arr[i];
		m[arr[i]]=i;
	}
	long long mx=n;
	long long i=1;
	while(k>0){
		long long pos=m[mx];
		long long tmp=arr[i];
		long long pos_of_i=m[arr[i]];		
		arr[i]=arr[pos]; 
		m[arr[i]]=pos_of_i;
		arr[pos]=tmp;
		m[arr[pos]]	= pos;
		if(arr[pos]!=arr[i]){
			k--;
		}
		mx--;
		i++;
	}
	for(long long i=1;i<=n;i++) cout<<arr[i]<<" ";
}
