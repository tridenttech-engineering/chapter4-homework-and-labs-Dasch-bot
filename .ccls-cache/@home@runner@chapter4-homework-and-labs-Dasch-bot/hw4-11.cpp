// Introductory11.cpp - displays ending balance
// Created/revised by Matthew Dasch on 9-19-24

#include <iostream>
using namespace std;

int main() {
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;

  cout<<"Beginning balance: "<<endl;
  cin>> beginningBalance;
  cout<<"Total deposits: "<<endl;
  cin>> totalDeposits;
  cout<<"Total withdrawals: "<<endl;
  cin>> totalWithdrawals;
  double endingBalance = beginningBalance + totalDeposits - totalWithdrawals;
  cout<<"Ending balance: $"<<endingBalance<<endl;
  

  return 0;
} // end of main function