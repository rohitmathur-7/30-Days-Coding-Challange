//** Segmented prime sieve **
** QUES - FIND THE PRIME NUMBERS IN THE GIVEN RANGE *

int const n=100000;
vector<int> primes;  //to store the prime numbers
int p[n]={0};  //to keep track that which number has been marked as not prime

void segmented_sieve(int m,int n){
	//prime sieve logic: 
	for(int i=2;i<=n;i++){
		if(p[i]==0){
			primes.push_back(i);
			for(int j=i*i;j<=n;j+=i){
				p[j]=1;
			}
		}
	}
	
//	segmented sieve logic: 
	bool segment[n-m+1];  //this is our main array , that is this is the shifted array. where any position i = i-m;
	memset(segment,0,sizeof(segment)); //initially setting all the elements as prime
	
	for(int i=0;i<primes.size();i++){ //iterating nover the primes arrray
		int x=primes[i];
		if(x*x > n) break; //now we only want to check till root n, so if x*x > n that means we have to stop here
		int start=(m/x)*x; //now how we will know that from where we have to start marking the numbers in the segment array, for that if m=99,n=144. So first prime number is 2, now we will do start=(m/2)*2 which will give us the number.so here we will get 98 as the number, but now if we notice 98 is not in the array, so int the next iteration we will have start+2=100, which is definitely in the array.
		if(x>=m and x<=n){ //okay so this is done bcz ,if the current prime number(x) is > m, then we will have start=0, which is not correct.So for this case we have to tell it to start from x*2, So thats why start=x*2.
			start=x*2;
		}
		for(int j=start;j<=n;j+=x){ //here we are marking all the multiples of x as 1 indicating that it is not a prime number.
			segment[j-m]=1;
		}
	}
	for(int i=m;i<=n;i++){ //here we are checking if the element at pos=0, which means that it is prime, and hence we are printing it., 
		if(segment[i-m]==0 and i!=1) cout<<i<<" ";
	}		
	cout<<endl;
}

int main(){
	int m,n;
	cin>>m>>n;
	segmented_sieve(m,n);
	return 0;	
} 

