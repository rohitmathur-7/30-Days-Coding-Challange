#include<bits/stdc++.h>
using namespace std;
int x,y,GCD;

int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

void extendedEuclid(int a,int b){
    if(b==0){
        x=1;
        y=0;
        GCD=a;
        return;
    }
    extendedEuclid(b,a%b);
    int cx=y;
    int cy=x-(a/b)*y;
    x=cx;
    y=cy;

}

int moduloInverse(int a,int m){
    // if gcd(a,m)==1 then only we can calculate the multiplicative modulo inverse of it.
        if(gcd(a,m)==1){
            extendedEuclid(a,m);
            return (x+m)%m;  // the extendedModulo function can return -ve value also, so we have to add m and 
        }                   //   then take mod
        return 0;
}


int main(){
    int a,modulo;
    cin>>a>>modulo;
    int ans=moduloInverse(a,modulo);
    if(ans==0) cout<<"NO modulo inverse!";
    else cout<<ans<<endl;
}