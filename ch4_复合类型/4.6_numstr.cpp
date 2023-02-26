//
// Created by kangyu on 23-2-26.
//
#include <iostream>
int main(){
  using namespace std;
  cout << "what year was your house built?\n";
  int year;
  cin >> year;
  //cin.get();
  cout << "What is this street address?\n";
  char address[80];
  cin.getline(address , 80);
  cout << "Yaer built: " << year << endl;
  cout << "Address: " << address << endl;
  cout << "Done!\n";
  return 0;
}