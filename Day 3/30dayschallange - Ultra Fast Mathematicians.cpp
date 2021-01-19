** Ques - Ultra Fast Mathematicians **


#include<bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--){
		long a,b;
		cin>>a>>b;
		vector<long> v;
		while(a>0){
			if((a%10) ^ (b%10)){
				v.push_back(1);
			}
			else v.push_back(0);
			a=a/10;
			b=b/10;
		}
		for(long i=v.size()-1;i>=0;i--) cout<<v[i];
		cout<<endl;
	}
	return 0;
}
