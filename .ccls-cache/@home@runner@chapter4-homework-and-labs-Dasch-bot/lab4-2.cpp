//Lab4-2.cpp - displays a salesperson's commission
//Matthew Dasch
#include <iostream>
using namespace std;
int main()
{
const double COMM_RATE=0.1;
  double sales=0.0;
  cout<<"Enter sales amount"<<endl;
  cin>>sales;
  cout<<"Commission: $"<<sales*COMM_RATE<<endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/