#include<bits/stdc++.h>
using namespace std;

int fast_exponentiation(int a,int n,int m){
    int res=1;
    while(n){
        if(n&1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        n>>=1;
    }
    return res;
}

int main(){
    int a,n,modulo;
    cin>>a>>n>>modulo;
    cout<<fast_exponentiation(a,n,modulo);
}