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
	int answer=0;
	int answercorrect=1;
	
	do{
		cout<< "Please Select one of the below Options.\n1.\tMcDonalds\n2.\tDominos\n3.\tPizza Hut\n";
		cin >> answer;
		if (answer==1){
		cout<<"Order McDonalds!";
			answercorrect=1;
		}
		else if (answer==2){
			cout<<"Order Dominos!";
			answercorrect=1;
		}
		else if(answer==3){
			cout<<"Order Pizza Hut!";
			answercorrect=1;
		}
		else{
			cout<<"You did not enter a valid option! ";
			answercorrect=0;
		}
	}while(answercorrect==0);
}

