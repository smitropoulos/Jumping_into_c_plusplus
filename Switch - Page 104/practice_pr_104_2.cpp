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

void whattorder (int x);

void whattorder(int x) {
	
	string christm="On the First day of Christmas my true love sent to me \n";
	cout << christm<<endl
	;
	switch (x){
		case 12: cout << "12 Drummers Drumming\n";
		case 11: cout << "11 Pipers Piping\n";
		case 10: cout << "10 Lords a-Leaping\n";
		case 9: cout << "9 Ladies Dancing\n";
		case 8: cout << "8 Maids a-Milking\n";
		case 7: cout << "7 Swans a-Swimming\n";
		case 6: cout << "6 Geese a-Laying\n";
		case 5: cout << "5 Gold Rings\n";
		case 4: cout << "4 Calling Birds\n";
		case 3: cout << "Three French Hens\n";
		case 2: cout << "Two Turtle Doves\n";
		case 1: cout << "a Partridge in a Pear Tree.\n";


		};
}


int main (void){


	whattorder(10);
	
	return 0;
}
