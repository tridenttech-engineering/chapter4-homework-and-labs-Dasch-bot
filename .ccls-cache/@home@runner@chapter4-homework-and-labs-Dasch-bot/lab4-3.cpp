//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by Matthew Dasch on 9-19-24

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double COMM_RATE = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: " << endl;
  cin>>sales;
  cout<<"Commission rate:"<<endl;
  cin >> COMM_RATE;

  //calculate and display the commision
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
