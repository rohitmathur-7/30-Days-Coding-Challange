// Question link: https://www.codechef.com/problems/DIVSUBS

//Based on Piegonhole Principle

// So basically what we want here is that we want a subarray whose sum%n ==0,
// now first of all we will precompute a sum array that will contain the sum till the particular index,like ex: sum[0]=arr[0],sum[1]=sum[0]+sum[1]....and so on.
// Now what we will do is, we will take the mod of each sum with n and store it in a different array(pre).

// Now according to the piegonhole principle , if we have n+1 piegons and n holes then atleast one hole will have 2 piegons.
// Now if we see , if sum%n=x,
// then we know that x<n...

// So suppose n=5, then possible values of any number mod 5 is - 0,1,2,3,4.

// So, now the thing is we can have 2 cases-
// case 1: we obtain 5 values of sum%n : 0,1,2,3,4.
//         So in this case, if we see we have 0 also, which means that there is a subarray whose sum%n is 0.
//         And that is exactly what we want.
//         So we can just store the position(pos) where we encountered 0 and just print the size first and the print the positions form 1 till pos.(and that our ans,bcz form the 1st position till position pos, the sum of subarray in this range gives 0 when mod with N).

// case 2: we obtain 4 values of sum%n : 1,2,3,4.
//         So in this case we have 5 numbers(total numbers in array are 5,i.e we will have 5 numbers in our pre array) and 4 buckets(1,2,3,4).
//         And now we know that those 5 numbers will lie in the range (1,2,3,4).
//         So obviously we can say that atleast one bucket will contain 2 numbers.

//         ex: arr={1,2,3,6,7} , n=5
//             sum arr={1,3,6,12,19}
//             pre arr={1,3,1,2,4}
//             Here in pre arr we see that numbers only lie in the range (1-4).
//             So this comes in case 2.
//             Now we can also see that 1 comes twice here.
//             And that is what we are looking for, some duplicate number.
//             i.e where the sum%n are equal(b%n == a%n).
//             And we are looking for this bcz, suppose 
//             sum till 3rd position is b and sum till 1st position is a.
//             and we want that , (b-a)%n==0 which also implies that b%n==a%n.
//             So that is why we are looking for 2 numbers whose mod with n is equal.
//             So when we find those 2 , we can just print the size and the positions b/w them and that is the answer.

// Claim: Such a subarray will always EXIST!(Because of the above stated cases!).




#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pre[100005],psum[100005];


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
	    ll sum=0;
	    memset(pre,0,sizeof(pre));

		bool zero_present=false;
		int zero_pos;
		bool duplicate=false;
		int duplicate_pos,duplicate_value;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	        sum%=n;
	        sum=(sum+n)%n;
			psum[i]=sum;
			pre[sum]++;
	        if(sum==0){
	            zero_present=true;
				zero_pos=i;
	        }
            if(pre[sum]>1 && duplicate==false){
				duplicate=true;
				duplicate_pos=i;
				duplicate_value=sum;
			}
	    }
		if(zero_present){
			cout<<zero_pos<<endl;
			for(int j=1;j<=zero_pos;j++) cout<<j<<" ";
			cout<<endl;
		}
		else{
			for(int j=1;j<=n;j++){
				if(psum[j]==duplicate_value){
					int d=duplicate_pos-j;
					cout<<d<<endl;
					for(int k=j+1;k<=duplicate_pos;k++) cout<<k<<" ";
					cout<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
