#include<bits/stdc++.h>
using namespace std;
const int n=100005;
int prime_count[n],a[n],mobius[n];


void mobius_func(){
    //first set all elements of array a as 1.
    for(int i=1;i<n;i++) a[i]=1;

    //okay now here as we do in prime sieve, if n=6 , then first on a[j] there was 1, now a[j]=1*2 when i=2, and a[j]=1*2*3, when i=3 as it will start marking all its multiples.
    for(int i=2;i<n;i++){
        if(prime_count[i]) continue;
        for(int j=i;j<n;j+=i){
            prime_count[j]++;
            a[j]*=i;
        }
    }

    //here we are checking if a[i]==i, then if number of prime factors is odd, then mobius[i]=-1
    //else mobius[i]=1, and if a[i]!=i then mobius[i]=0.
    for(int i=1;i<n;i++){
        if(a[i]==i){
            if(prime_count[i]%2!=0) mobius[i]=-1;
            else mobius[i]=1;
        }
        else mobius[i]=0;
    }

}

int main(){
    mobius_func();
    for(int i=1;i<30;i++){
        cout<<mobius[i]<<" ";
    }
    return 0;
}