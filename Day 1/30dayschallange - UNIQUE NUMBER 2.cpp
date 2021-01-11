
//** QUES - UNIQUE NUMBER 2 **
//We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once.
//Find the unique numbers in linear time without using any extra space. 

//INPUT: 
//4
//3 1 2 1 
//
//OUTPUT:
//2 3
//EXPLANATION: Smaller number comes before larger number


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ans^=arr[i];
	}
	int pos,cnt=0;
	while(ans){
		if(ans&1){
			pos=cnt;
			break;
		}
		cnt++;
		ans>>=1;
	}
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(arr[i]&(1<<pos)) a^=arr[i];
	}
	b=ans^a;
	a>b?cout<<b<<" "<<a:cout<<a<<" "<<b;
	cout<<endl;
	return 0;
}

//
//Solution: 
//
//So basically when we XOR all the numbers we are left with the two numbers which occurs once.
//Ex: 3 1 2 1
//	3^1^2^1 = 3^2
//	
//	Now the XOR of 3^2 will get us to the ans.
//	3^2=  011
//		^ 010
//		--------
//		  001 =1
//		  
//So now as we see, when the 2 bits differ then we get 1 in the XOR.
//So by this observation we will take the position where the bit is 1 or set and we will check in our array that which which elements 
//have 1 as bit in that paricular postition.
//
//Position = 0(as in 001 , 1 first appears at 0th position.)
//Now the elements whose 0th bit is 1 are -> 1,1,3
//Now XOR all of these elements ->1^1^3 = 3.
//Hence we get our first unique element as 3.
//
//Now to obtain the 2nd element..Xor first unique element with the XOR of all elements.
//XOR = 3^1^2^1= 3^2
//
//First_Unique_element=3
//Second_Unique_element=3^2^3=2
//
//Ans: 2 3












