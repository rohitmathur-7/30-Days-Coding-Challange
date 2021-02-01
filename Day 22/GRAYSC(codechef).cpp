#include <bits/stdc++.h>
using namespace std;

string ans(){
    int n;
	cin>>n;
	unsigned long long arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
    if(n>=130) return "Yes";
	else{
	    bool qq;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            for(int k=j+1;k<n;k++){
	                unsigned long long xr=arr[i]^arr[j]^arr[k];
//	                cout<<"xor: "<<xr<<endl;
	                qq=binary_search(arr+k+1,arr+n,xr);
	                if(qq==true) return "Yes";
	            }
	        }
	    }
	    return "No";
	}
}

int main() {
	// your code goes here
	cout<<ans()<<endl;
	return 0;
}
