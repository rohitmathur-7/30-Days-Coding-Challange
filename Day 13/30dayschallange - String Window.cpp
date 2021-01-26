#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,str;
	getline(cin,s);
	getline(cin,str);
	map<char,int> freq_t,freq_s;
	for(auto x: str) freq_t[x]++;
	int l=0,r;
    int resl=-1,resr=1e9;
	int n=s.size();
	for(r=0;r<n;r++){
//		we have to check if string from l to r is good or not
		freq_s[s[r]]++;
		bool good=true;
		for(auto x: freq_t){
			if( (freq_s.count(x.first)==0) || (freq_s[x.first] < x.second) ){
				good=false;
				break;
			}
		}
//		string window from l to r is not good!
		if(!good) continue;
		
//		otherwise it is a good window!
		while(l<n && l<=r && (freq_t.count(s[l])==0 || freq_s[s[l]] > freq_t[s[l]] ) ){
			freq_s[s[l]]--;
			if(freq_s[s[l]] == 0 ) freq_s.erase(s[l]);
			l++;
		}
		// cout<<l<<" "<<r<<endl;
        if(resr-resl+1 > r-l+1){
            resl=l;resr=r;
        }
        // cout<<resl<<" "<<resr<<endl;
	}
     if(resl==-1) cout<<"No String"<<endl;
        else{
            string sub=s.substr(resl,resr-resl+1);
            cout<<sub<<endl;
        }
	return 0;
}

