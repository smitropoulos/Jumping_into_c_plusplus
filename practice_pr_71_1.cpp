//============================================================================
// Name        : C++.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    
    int age1=0;
    int age2=0;
    
    cout << "Please provide age of user 1" << endl; // prints !!!Hello World!!!
    cin >> age1;
    cout << "Please provide age of user 2" << endl; // prints !!!Hello World!!!
    cin >>age2;
    
    if(age1>age2){
        if(age1>100 && age2>100){
        cout << "User 1 is old af" << "\n";
        }
        else
        {
            cout << "user1 is older than user2" << "\n";
            
        }
    }
        else{
            if(age1>100 && age2>100){
                cout << "user 2 is old af" << "\n";
                
            }
            else {
                cout<< "user 2 is older than user1" << "\n";
            }
        }
        
       }
