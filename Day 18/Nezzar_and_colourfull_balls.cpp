// https://codeforces.com/contest/1478/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		map<int,int> m;
        int mx=-1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]]++;
            if(m[arr[i]]>mx) mx=m[arr[i]];
		}
		cout<<mx<<endl;
	}
}