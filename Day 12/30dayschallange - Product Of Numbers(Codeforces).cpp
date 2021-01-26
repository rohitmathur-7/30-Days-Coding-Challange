#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long n,n1;
        cin>>n;
        n1=n;
        vector< pair<long,long> > factors;
        long cnt=0,occ;
        long mx,omx=0;
        bool g=false;
        for(long i=2;i*i<=n;i++){
        	occ=0;
            if(n%i==0){
                cnt++;    
                while(n%i==0){
                    occ++;
                    n=n/i;
                }
                if(occ>=6){
                	g=true;
                	mx=i;
                	omx=occ;
				}
                factors.push_back(make_pair(i,occ));
            }
        }
		if(n!=1){
            factors.push_back(make_pair(n,1));
            cnt++;
		}
        
        if(cnt>=3){
            long d=factors.size()-3;
            long m=1;
            cout<<"YES"<<endl;
            for(long i=0;i<=d;i++){
                long mu=pow(factors[i].first,factors[i].second);
                m*=mu;
            }
            cout<<m<<" ";
            for(long i=d+1;i<factors.size();i++){
                long mu=pow(factors[i].first,factors[i].second);
                cout<<mu<<" ";
            }
            cout<<endl;
        }
        
        else if(cnt==2){
        	int d=factors[0].first*factors[1].first;
        	int c=n1/d;
        	if(c==factors[0].first || c==factors[1].first || c==1) cout<<"NO"<<endl;
        	else{
        		cout<<"YES"<<endl;
        		cout<<factors[0].first<<" "<<factors[1].first<<" "<<c<<endl;
			}
		}
		
        else if(g==true){
        	cout<<"YES"<<endl;
        	cout<<mx<<" "<<mx*mx<<" ";
        	int ms=1;
        	for(int h=0;h<omx-3;h++){
        		ms*=mx;
			}
			cout<<ms<<endl;
        	g=false;
		}
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
 
