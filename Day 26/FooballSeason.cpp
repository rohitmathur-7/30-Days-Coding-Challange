#include<bits/stdc++.h>
using namespace std;
#define int long long int

int modInverse(int a,int m){
    if(m==1) return 0;
    int m0=m,y=0,x=1;

    while(a>1){
        int q=a/m,t=m;
        m=a%m,a=t;
        t=y;
        y=x-q*y;
        x=t;
    }
    if(x<0) x+=m0;
    return x;
}


void solve(int n,int p,int w,int d){
    int x,y,z;
    int g=__gcd(w,d);
    if(p%g!=0){
        cout<<-1;
        return;
    }
    //wins all the matches, but still points are less than p
    if(n*w < p){
        cout<<-1;
        return;
    }
    w/=g;
    d/=g;
    p/=g;

    y= ((p%w) * modInverse(d,w))%w;
    x=(p-y*d)/w;
    if(x+y > n){
        cout<<-1<<endl;
        return;
    }
    if(x<0){
        cout<<-1<<endl;
        return;
    }
    z=n-(x+y);
    cout<<x<<" "<<y<<" "<<z<<endl;
    return;
}


int32_t main(){
    int n,p,w,d;
    cin>>n>>p>>w>>d;
    solve(n,p,w,d);
}