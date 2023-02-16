//
// Created by kangyu on 23-2-16.
//
#include <iostream>
int main(){
  using namespace std;
  cout.setf(ios_base::fixed , ios_base::floatfield);
  float tree = 3; // int converted to float
  int guess(3.9823); // double converted to int
  int debt = 7.2E12; // result not defined in C++
  cout << "tree = " << tree << endl;
  cout << "guess = " << guess << endl;
  cout << "debt = " << debt << endl;
  return 0;
}