//
// Created by kangyu on 23-3-1.
//
#include <iostream>
int main(){
  using namespace std;
  int higgens = 5;
  int* pt = &higgens;

  cout << "Values of higgens = " << higgens
  << "; Address of higgens = " << &higgens << endl;
  cout << "Values of *pt = " << *pt
       << "; Address of pt = " << pt << endl;
  return 0;
}