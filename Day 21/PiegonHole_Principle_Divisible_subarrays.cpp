#include <bits/stdc++.h>
using namespace std;
#define ll long long
int pre[100005];


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n];
		ll sum=0;
		memset(pre,0,sizeof(pre));
		pre[0]=1;  // for null subarray, it will always have 1 value.
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i]; 	//taking the sum
			sum%=n;			// taking mod of sum with n
			sum=(sum+n)%n; 	// sum%=n can also give -ve reult, so to make it +ve, we do this
			pre[sum]++;		// if sum%n==1 then we will increment the pre[1], and whenever we will get 1 we 				will increment it, so then it will work as a map and we will know how many times a 				   element is repeated which is necessary for calculatin mC2 of it!
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			ll m = pre[i];
			ans += (m)*(m-1)/2;  // this is the mC2 being calculated here!
		}
		cout<<ans<<endl;
	}
}