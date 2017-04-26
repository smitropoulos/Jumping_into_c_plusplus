//============================================================================
// Name        : Jump.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

// The function checks for a remainder from the smallest prime number of importance (2) to the input number itself
//================================================================================================================

bool isnumberprime (int x){
	
	for (int y=2;y<x;y++){
		
		if (x%y==0){
			return false;
		}
	}
	return true;
}
//================================================================================================================



// Function that returns the sum of the prime factors of a number

//================================================================================================================

int sumofprimes(int x){
	
	int sumofprimes=0;
	
	for (int i=2;i<=x;i++){
		
		if (x%i==0){		//if the number returns 0 remainder, it means that i divides x
			
			x=x/i;
			
			sumofprimes=sumofprimes+i;	//add the prime number you found to the previous prime
			
			i=1;	//reset i
			
		}
		
		
	}
	return sumofprimes;
}

//================================================================================================================


/* ============================= Main starting here ============================= */

int main() {
	
	for (int t=1;t<=1000;t++){
		if (isnumberprime(sumofprimes(t)))
		cout<<t<<endl;
		
		
	}
	
}
