//
// Created by kangyu on 23-2-27.
//
#include <iostream>
struct inflatable{
  char name[20];
  float volume;
  double price;
};
int main(){
  using namespace std;
  inflatable bouquet = {
      "sunflowers",
      0.20,
      12.49
  };
  inflatable choice;
  cout << "bouquet: " << bouquet.name << " gor $";
  cout << bouquet.price << endl;

  choice = bouquet; // assign one structure to another
  cout << "choice: " << choice.name << " for $";
  cout << choice.price << endl;
  return 0;
}