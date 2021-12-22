/*
 Author:    Oakley Clark
 Date:      27/05/2021
 Exercise:  Section 6 Challenge
 About:     Declaring variables
*/

#include <iostream>

using namespace std;

int main(){

  int small_number;
  int big_number;

  // User input
  cout << "\nHow many small rooms would you like cleaned? " << endl;
  cin >> small_number;
  cout << "How many big rooms would you like cleaned? " << endl;
  cin >> big_number;
  cout << endl;

  // Program constants
  const double small_price {25.0};
  const double big_price {35.0};
  const double tax_rate {0.06};

  // Calculating the cost
  double cost {small_number*small_price + big_number*big_price};
  double tax {tax_rate * cost};
  double total_cost {cost + tax};

  // Output
  cout << "Number of small rooms: " << small_number << endl;
  cout << "Number of big rooms: " << big_number << endl;
  cout << "Price per small room: £" << small_price << endl;
  cout << "Price per big room: £" << big_price << endl;
  cout << "Cost: £" << cost << endl;
  cout << "Tax: £" << tax << endl;
  cout << "===================================" << endl;
  cout << "Total estimate: £" << total_cost << endl;

}
