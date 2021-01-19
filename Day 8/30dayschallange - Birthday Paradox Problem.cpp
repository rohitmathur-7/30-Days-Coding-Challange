//ques: Birthday Paradox Problem(Combinatorics)
//** What is the minimum number of people that should be present in a hall so that there is 50% chance of atleast 2 people having the 
//   same birthday?**

int main(){
	float x=1.0; //let initial probablity of people not having birthday on same day be 1.0
	int people=0;
	float p; //the % of chance that we want to have
	cin>>p;
	float num=365,denom=365;
	while(x > (1-p)){ //if we want to check for 60% then , when x gets lower or equal to 40%(1-p),
					//then only the probablity of atleast 2 people having same birthday will be 60% or greater.
		x=x*(num/denom);
		num--;
		people++;
		cout<<"People: "<<people<<" and x: "<<x<<endl;
	}
	cout<<"Total number of people: "<<people<<endl;
}

