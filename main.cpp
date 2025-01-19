#include <iostream>
using namespace std;
/*
Create a C++ program named currency_converter.cpp that calculates the
total value in British Pounds of foreign currencies from the USA, Eurozone, China,
Singapore, and Malaysia. This practical exercise will help you consolidate your
understanding of variables, data types, input/output operations, and arithmetic
operations within a real-world application.
 */
 int main() {
   float pounds,USD, EUR, CNY, SGD, MYR; // declaring variables
// prompt to get the numbers
     cout<<"Enter the amount in USD: ";
     cin>>USD;
     cout<<"Enter the amount in EUR: ";
     cin>>EUR;
     cout<<"Enter the amount in CNY: ";
     cin>>CNY;
     cout<<"Enter the amount in SGD: ";
     cin>>SGD;
     cout<<"Enter the amount in MYR: ";
     cin>>MYR;
     // adding conversion rates
     const double USD_TO_GBP = 0.81;
     const double EUR_TO_GBP = 0.84;
     const double CNY_TO_GBP = 0.11;
     const double SGD_TO_GBP = 0.60;
     const double MYR_TO_GBP = 0.18;
     // Calculation Logic
     pounds += (USD_TO_GBP * USD) + (EUR_TO_GBP * EUR) + (CNY_TO_GBP * CNY) + (SGD_TO_GBP * SGD) + (MYR_TO_GBP * MYR);
     //outputting
     cout<<"The total amount of money you have in GBP is: £"<<pounds<<endl;
   }
