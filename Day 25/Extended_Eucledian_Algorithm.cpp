// 30daychallenge - Day 25
// extended euclid's algorithm.
// this is used to find out x and y, in the equations of the type- ax+by=gcd(a,b)

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

int main(){
    int a,b;
    cin>>a>>b;
    extendedEuclid(a,b);
    cout<<"x: "<<x<<" y: "<<y<<endl;
}