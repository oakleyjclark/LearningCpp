/*
 Author:    Oakley Clark
 Date:      27/05/2021
 Exercise:  3
 About:     Allows the user to enter their date of birth and prints to screen
*/

#include <iostream>

int main(){

  int day;
  int month;
  int year;

  std::cout << "Enter D.O.B in format DD MM YYYY" <<  std::endl;
  std::cin >> day;
  std::cin >> month;
  std::cin >> year;

  std::cout << "You were born on the ..." << std::endl;
  std::cout << day << "th day of the " << month << "th month of year " << year <<std::endl;

}
