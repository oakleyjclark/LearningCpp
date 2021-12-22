/*
 Author:    Oakley Clark
 Date:      27/05/2021
 Exercise:  4
 About:     Declaring variables
*/

#include <iostream>

int main(){

  // Ask user for their age and name
  std::cout << "Enter your name: " << std::endl;
  std::string name;
  std::cin >> name;

  std::cout << "Enter your age: " << std::endl;
  int age;
  std::cin >> age;

  // supply the users hourly wage
  double wage {23.5};

  // Print results back to sceen
  std::cout << std::endl;
  std::cout << name << std::endl;
  std::cout << age << std::endl;
  std::cout << wage << std::endl;

}
