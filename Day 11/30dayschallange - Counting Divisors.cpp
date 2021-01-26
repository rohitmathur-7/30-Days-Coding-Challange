
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

//int no_of_divisors(int n,vector<long long> primes){
//	int ans=1,cnt;
//	for(long long i=0;primes[i]*primes[i]<=n;i++){
//		int x=primes[i];
//		cnt=0;
//		if(n%x==0){
//			while(n%x==0){
//				cnt++;
//				n=n/x;
//			}
//			ans=ans*(cnt+1);
//		}
//	} 		
//	if(n!=1) ans*=2;
//	return ans;
//}

//int main(){
//	int n;
//	cin>>n;
//	long long p[100000]={0};
//	vector<long long> primes=prime_sieve(p);
//	cout<<"ans: "<<no_of_divisors(n,primes)<<endl;
//}

