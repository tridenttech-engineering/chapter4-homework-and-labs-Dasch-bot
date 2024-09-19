// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by Matthew Dasch on 9-19-24

#include <iostream>
using namespace std;

int main() {
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  double total = 0.0;

  cout<<"Number of small pizzas sold: "<<endl;
  cin>>small;
  cout<<"Number of medium pizzas sold: "<<endl;
  cin>>medium;
  cout<<"Number of large pizzas sold: "<<endl;
  cin>>large;
  cout<<"Number of family pizzas sold: "<<endl;
  cin>>family;
  total = small + medium + large + family;

  double percentSmall = (small / total) * 100;
  double percentMedium = (medium / total) * 100;
  double percentLarge = (large / total) * 100;
  double percentFamily = (family / total) * 100;

  cout<<"Total pizzas sold: "<<total<<endl;
  cout<<"Percent of small pizzas sold: "<<percentSmall<<"%"<<endl;
  cout<<"Percent of medium pizzas sold: "<<percentMedium<<"%"<<endl;
  cout<<"Percent of large pizzas sold: "<<percentLarge<<"%"<<endl;
  cout<<"Percent of family pizzas sold: "<<percentFamily<<"%"<<endl;
  

  return 0;
} // end of main function