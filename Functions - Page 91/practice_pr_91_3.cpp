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
int tries=3;
void pswdchecker(string username, string passwd){
	
	string user1="stefanos";
	string passwd1="peos";
	if (username==user1 && passwd==passwd1){
		cout << "Access Granted.\n";
		tries=0;
	}
	else{
		cout << "Access Denied. \n";
		tries--;
	}
}

int main ()
{
	
	string password;
	string username;
	
	do{
		cout << "Please input your username: \n";
		cin >> username;
		cout<<"Please input your password: \n";
		cin >> password;
		
		pswdchecker(username, password);
		
	}while(tries>0);
}
