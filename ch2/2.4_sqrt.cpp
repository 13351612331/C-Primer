//
// Created by kangyu on 23-1-31.
//
#include <cmath> // or math.h
#include <iostream>

int main() {
  using namespace std;

  double area;
  cout << "Enter the floor area , in square feet , of you home: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout << "That's the equivalent of a square " << side << " feet to the side."
       << endl;
  return 0;
}