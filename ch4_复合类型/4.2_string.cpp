//
// Created by kangyu on 23-2-24.
//
#include <iostream>
#include <cstring>
int main(){
  using namespace std;
  const int Size = 15;
  char name1[Size]; // empty array
  char name2[Size] = "C++owboy"; //initialized array
  // NOTE: some implementations may require the static keyword
  // to initialize the array name2

  cout << "Howdy! I'm " << name2;
  cout << "! What's your name?\n";
  cin >> name1;
  cout << "Well, " << name1 << ", your name has ";
  cout << strlen(name1) << " letters and is stored\n";
  cout << "Your initial is " << sizeof name1 << " bytes.\n";
  cout << "Your initial is " << name1[0] << ".\n";
  name2[3] = '\0'; // set to null character
  cout << "Here are the first 3 characters of my name: ";
  cout << name2 << endl;
  return 0;
}