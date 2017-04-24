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
    int tries=3;
    string password;
    string correctpassword="peos";
    do {
        cout<<"Please input your password: \n";
        cin >> password;
        if (password==correctpassword)
        {cout<<"Access granted \n";
            tries=0;
        }
        else{
            if (tries>1){
            cout<< "Please try again. Remaining tries: \t" << tries-1 <<endl;
                }
            else{cout<<" Access Denied! \n";}
            tries--;
        }
     }while(tries!=0);
}
