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

int y1=0,y2=0,y3=0;	//In the example x = 5.216.723 --> y1=723 , y2=216, y3=5 etc.


/*	============================= Function Declarations =============================	*/

string singledigitstotext(int x); // Number to text for numbers 0-9
string doubledigitstotext (int x); // Number to text for numbers 10-20
string digitstotext ( int x); // Number to text for numbers in the hundreds. Utilizes singledigitstotext and doubledigitstotext

int numberofchunksofthree (int x); // How many chunks of 3 digits there are in a number
void splitinchunkofthree (int x);	// Split a number in chunks of three y1 y2 y3


/*	============================= Functions Initialization =============================	*/

string singledigitstotext(int x) {
	
	string result = "";
	
	if (x == 1) {
		result = "one";
	} else if (x == 2) {
		result = "two";
	} else if (x == 3) {
		result = "three";
	} else if (x == 4) {
		result = "four";
	} else if (x == 5) {
		result = "five";
	} else if (x == 6) {
		result = "six";
	} else if (x == 7) {
		result = "seven";
	} else if (x == 8) {
		result = "eight";
	} else if (x == 9) {
		result = "nine";
	}
	
	return result;
	
}

//=======================================================================================

string doubledigitstotext (int x){
	string result;
	
	if (x<=20) {
		if (x==10){
			result = "ten ";
		}else if (x == 11) {
			result = "eleven ";
		} else if (x == 12) {
			result = "twelve ";
		} else if (x == 13) {
			result = "thirteen ";
		} else if (x == 14) {
			result = "fourteen ";
		} else if (x == 15) {
			result = "fifteen ";
		} else if (x == 16) {
			result = "sixteen ";
		} else if (x == 17) {
			result = "seventeen ";
		} else if (x == 18) {
			result = "eighteen ";
		} else if (x == 19) {
			result = "nineteen ";
		} else if (x == 20) {
			result = "twenty ";
		}
	}else if(x>20){
		
		int numberoftens = x / 10;
		int numberofones = x % 10;
		
		if (numberoftens==2){
			result = "twenty ";
		}else if (numberoftens==3){
			result="thirty ";
		}else if (numberoftens==4){
			result="fourty ";
		}else if (numberoftens==5){
			result="fifty ";
		}else if (numberoftens==6){
			result="sixty ";
		}else if (numberoftens==7){
			result="seventy ";
		}else if (numberoftens==8){
			result="eighty ";
		}else if (numberoftens==9){
			result="ninety ";
		}
		
		result = result + singledigitstotext(numberofones);
		
	}
	return result;
}

//=======================================================================================

string digitstotext ( int x) {
	
	string result="";
	int numberofhundreds=0;
	string resultofhundreds = "";
	int restofnumber;
	string resultoftens="";
	string hundreds;
	
	if (x > 99){
		
		numberofhundreds= x /100;
		hundreds=singledigitstotext(numberofhundreds);
		resultofhundreds = hundreds + " hundred ";
		
		restofnumber= x - numberofhundreds*100;
		resultoftens = doubledigitstotext(restofnumber);
		
		result = resultofhundreds + resultoftens;
	}
	//If the input is less than 99 but is still two digits
	
	else if (x<99 && x>=10){
		result = doubledigitstotext(x);
	}
	
	// if the input is one digit
	else {
		result = singledigitstotext(x);
	}
	
	return result;
	
}

//=======================================================================================

// Function to split the number into 3 chunks of 3 digits. In the example x = 5.216.723 --> y1=723 , y2=216, y3=5 etc.

void splitinchunkofthree (int x ){
	
	if (numberofchunksofthree(x)==3){	//eg x = 5216723
		
		y1=x%1000;
		y2=(x/1000)%1000;
		y3=(x/1000000)%1000;
		
	}
	else if (numberofchunksofthree(x)==2){	//eg x = 216723
		y1=x%1000;
		y2=(x/1000)%1000;
		y3=0;
	}
	else if (numberofchunksofthree(x)==1){	//eg x = 723
		y1=x%1000;
		y2=0;
		y3=0;
	}
}

//=======================================================================================

// Function to tell how many chunks of 3 digits in the input number

int numberofchunksofthree(int x){
	
	int result;
	
	if (x>999999){
		result = 3;
	}
	else if (x<999999 && x>999){
		result = 2;
	}
	else if (x<999){
		result = 1;
	}
	return result;
}

//=======================================================================================

//	Function to finally convert input number to text

string text(int inputnumber){
	
	string text;
	string thousands = " thousands ";
	string millions = " million ";
	
	if (y2==0)			//In case the thousands is 0, display nothing instead of thousands
		thousands="";
	
	if (numberofchunksofthree(inputnumber)==1){
		
		text = digitstotext(y1);
		
	}
	
	else if (numberofchunksofthree(inputnumber)==2){
		
		text = digitstotext(y2) + thousands + digitstotext(y1);
	}
	
	else if (numberofchunksofthree(inputnumber)==3){
		
		text = digitstotext(y3) + millions + digitstotext(y2) + thousands + digitstotext(y1);
	}
	
	return text;
}


/* ============================= Main starting here ============================= */

int main() {
	
	int inputnumber;
	
	
	cout << "Please input a number: \n";
	cin >> inputnumber;
	splitinchunkofthree(inputnumber);
	cout << text(inputnumber) << endl;
	
	
}
