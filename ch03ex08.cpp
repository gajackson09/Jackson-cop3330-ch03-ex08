/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Gabrielle Jackson
*/

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main() {
   int x;
   cout << "Please type an integer: ";
   cin >> x;

   int sum = x % 2;

   if(x == 2){
   	cout << "\nThe number: "<< x <<" is even.\n";
   }

   else{
   	cout <<"\nThe number: "<< x <<" is odd.\n";
   }

  return 0;
}//end of main