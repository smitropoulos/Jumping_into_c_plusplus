//============================================================================
// Name        : C++.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


int validinput=0; //global variable

// Functions

// Function for 99 beers song.
void beer99(){
	
	int i=99;
	
	for (i =99; i>1 ; i--){
		cout << i<<" bottles of beer on the wall, "<<i<<" bottles of beer.\n";
		cout << "Take one down, pass it around, "<<(i-1)<<"bottles of beer on the wall...\n";
	}
	cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n";
	validinput=1;
	
	
}

//	Function deciding what to order
string whatorder (int x){
	
	string orderoption="";
	
	if (x==1){
		orderoption="Order McDonalds!\n";
	}
	else if (x==2){
		orderoption="Order Dominos!\n";
	}
	else if (x==3){
		orderoption="Order Pizza Hut!\n";
	}
	else if(x==4){
		beer99();
		
	}
	validinput=1;
	return orderoption;
}

// Function for the calculator

double addition (double oper1, double oper2){
	return oper1+oper2;
}
double multiplication (double oper1, double oper2){
	return oper1*oper2;
}

double subtraction (double oper1, double oper2){
	return oper1-oper2;
}

double division (double oper1, double oper2){
	if (oper2!=0){
		return oper1/oper2;}
	else{
		return 0;}
		}


double calculator(char x, double i, double j){
	double result;
	
	if (x=='+'){
		result=addition(i,j);
	}
	else if (x=='*'){
		result = multiplication(i,j);
	}
	else if (x=='-'){
		result = subtraction(i,j);
	}
	else if (x=='/'){
		result=division(i,j);
	}
	validinput=1;
	return result;
	
}

// Main starting here
//=================================================================================
int main ()
{
	int answer=0;
	
	do{
		cout<< "Please Select one of the Options below.\n1.\tMcDonalds\n2.\tDominos\n3.\tPizza Hut\n4.\t--BEER!--\n5.\tCalculator\n";
		cin >> answer;
		if(answer<=4)
			cout << whatorder(answer);
		
		// If the calculator is chosen then========================================
		
		else if(answer==5){
			double i,j;
			char sign;
			
			cout << "You chose the calculator. Please enter a sign and two numbers.\n";
			cin >> sign;
			cout<<"please enter the first operand.\n";
			cin >> i;
			cout<<"please enter the second operand.\n";
			cin >> j;
			cout<<"The result is:\t"<<calculator(sign, i, j)<<endl;
		}
	}while(validinput==0);
}

