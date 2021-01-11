
//** QUES - UNIQUE NUMBER 1 **
//We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once.
//Find the unique number without taking any extra spaces and in linear time.
//
//INPUT: 
//7
//1 1 2 2 3 3 4 
//
//OUTPUT:
//4
//
//EXPLANATION: 4 is present only once.

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ans^=arr[i];
	}
	cout<<ans<<endl;

	return 0;
}

//** SOLUTION: A^A=0, All the numbers are given twice except one,So when we will XOR every number only the number which occurs once will remain
//				 in the end.
//



