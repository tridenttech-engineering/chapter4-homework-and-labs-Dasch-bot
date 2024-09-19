//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by Matthew Dasch on 9-19-24
#include<iostream>
using namespace std;
int main()
{
  double height = 0.0;
  double radius = 0.0;
  double volume = 0.0;
  const double PI = 3.14;
  cout << "Enter the height of the cylinder"<<endl;
  cin >> height;
  cout<< "Enter the radius of the cylinder"<<endl;
  cin>>radius;
  volume = PI * radius * radius * height;
  cout<< "Volume: "<<volume<<endl;

  return 0;
} //end of main function
