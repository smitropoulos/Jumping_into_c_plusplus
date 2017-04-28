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

string whattorder (int x);

string whattorder(int x) {
	string result;
	
	switch (x){
		case 1: result="Mcdonalds! \n";
			break;
		case 2: result="Dominos! \n";
			break;
		case 3: result="Pizza hut! \n";
			break;
		default: result="There is no such option";
		};

	return result;
}


int main (void){

	int answer;
	cout << "Please select one of the choices numerically: \n";
	cout<< "\n1.\tMcDonalds\n2.\tDominos\n3.\tPizza Hut\n";
	cout << "\nChoice:\t\n";
	cin >> answer;
	
	cout << whattorder(answer) << endl;
	
	return 0;
}
