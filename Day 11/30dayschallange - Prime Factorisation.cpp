//** Prime Factorisation - **

//Method 1 - Naive Method ( T.C - O(n) )
//void prime_factors_naive_approach(int n){
//	vector< pair<int,int> > factors;
//	int cnt;
//	for(int i=2;i<=n;i++){
//		if(n%i==0){
//			cnt=0;
//			while(n%i==0){
//				cnt++;
//				n=n/i;
//			}
//			factors.push_back(make_pair(i,cnt));
//		}
//	}
//	for(int i=0;i<factors.size();i++){
//		cout<<factors[i].first<<"^"<<factors[i].second<<endl;
//	}
//}	

//Method 2 - Optimized Approach ( T.C - O(sqrt(n)) )
//void prime_factors_optimized_approach(int n){
//	vector< pair<int,int> > factors;
//	int cnt;
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0){
//			cnt=0;
//			while(n%i==0){
//				cnt++;
//				n=n/i;
//			}
//			factors.push_back(make_pair(i,cnt));
//		}
//	}
//	if(n!=1) factors.push_back(make_pair(n,1));
//	for(int i=0;i<factors.size();i++){	
//		cout<<factors[i].first<<"^"<<factors[i].second<<endl;
//	}
//}	

//Method 3 - Using Prime Sieve ( T.C - O(log(n)) )

//vector<long long> prime_sieve(long long *p){
//	p[2]=1;
//	p[1]=0;p[0]=0;
//	for(long long i=3;i<=100000;i+=2) p[i]=1;
//	vector<long long> primes;
//	primes.push_back(2);
//	for(long long i=3;i<=100000;i+=2){
//		if(p[i]==1){
//			primes.push_back(i);
//			for(long long j=i*i;j<=100000;j+=2*i){
//				p[j]=0;
//			}	
//		}
//	}
//	return primes;
//}

//void prime_factors_sieve_approach(int n,vector<long long> primes){
//	int cnt=0;
//	vector< pair<long long,long long> > prime_factors;
//	for(int i=0;primes[i]*primes[i]<=n;i++){
//		int x=primes[i];
//		if(n%x==0){
//			while(n%x==0){
//				cnt++;
//				n=n/x;
//			}
//			prime_factors.push_back(make_pair(x,cnt));
//		}
//	}
//	
//	if(n!=1) prime_factors.push_back(make_pair(n,1));
//	
//	for(long long i=0;i<prime_factors.size();i++){
//		cout<<prime_factors[i].first<<"^"<<prime_factors[i].second<<endl;
//	}
//	
//}



int main(){
	int n;
	cin>>n;
	//method1
	//prime_factors_naive_approach(n);
	
	//method2
	//prime_factors_optimized_approach(n);
	
	//method3
//	long long p[100000]={0};
//	vector<long long> primes=prime_sieve(p);
//	prime_factors_sieve_approach(n,primes);
}
