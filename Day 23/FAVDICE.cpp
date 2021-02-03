#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        double ans=0;
        for(int i=1;i<=num;i++){
            ans+=(num/(i*1.0));
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
}