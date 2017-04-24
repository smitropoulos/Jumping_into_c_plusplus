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

int main ()
{
	
	//Declarations
	//========================================================================
	int k=0;
	int n=0;
	
	string question="";
	string opt1="";
	string opt2="";
	string opt3="";
	
	int input=0;
	int opt1no=0;
	int opt2no=0;
	int opt3no=0;
	//=========================================================================
	
	//Poll questions and options
	
	cout << "Please input the poll question: \n";
	cin >> question;
	cout << "Please input option 1: \n";
	cin >> opt1;
	cout << "Please input option 2: \n";
	cin >> opt2;
	cout << "Please input option 3: \n";
	cin >> opt3;
	
	//=========================================================================

	
	do{
		
		cout << "Please start entering the votes! The programme terminates when '0' is entered." <<endl;
		cin >> input;
		
		if (input==1){
			opt1no++;}
		else if (input==2){
			opt2no++;}
		else if (input==3){
			opt3no++;}
		
	}while(input!=0);
	
	cout << "The results are here! \n";
	
	
	//Output with bars
	//=========================================================================

	
	cout <<"\n"<< opt1 <<"\t";
	cout.flush();
	
	for (k=0; k<opt1no ; k++){
		cout << "|";
		cout.flush();
		n++;
	}
	cout <<"\n"<< opt2 <<"\t";
	cout.flush();
	
	for (k=0; k<opt2no ; k++){
		cout << "|";
		cout.flush();
		n++;
	}
	cout <<"\n"<< opt3 <<"\t";
	cout.flush();
	
	for (k=0; k<opt3no ; k++){
		cout << "|";
		cout.flush();
		n++;
	}
	
	//=========================================================================
	cout<<endl;
}

