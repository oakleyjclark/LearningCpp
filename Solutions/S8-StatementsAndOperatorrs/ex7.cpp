#include <iostream>

using namespace std;

// This programs calculates the number of each coin for a given value in pence
// (fewest number of coins)

int main(){

  // Get the pence value from the user
  int total(0);
  cout << "Enter a value in pence: ";
  cin >> total;

  // initialize the values of each coin
  int val_50 = 50;
  int val_20 = 20;
  int val_10 = 10;
  int val_5 = 5;
  int val_2 = 2;
  int val_1 = 1;

  // initialize the remaining money after a coin is given out
  int remaining = total;

  // Use integer division to find the number of each successive coin
  // use modulo to find the remaining total
  cout << "50p's : " << total/val_50 << endl;
  remaining = total%val_50;
  cout << "20p's : " << remaining/val_20 << endl;
  remaining = remaining%val_20;
  cout << "10p's : " << remaining/val_10 << endl;
  remaining = remaining%val_10;
  cout << "5p's : " << remaining/val_5 << endl;
  remaining = remaining%val_5;
  cout << "2p's : " << remaining/val_2 << endl;
  remaining = remaining%val_2;
  cout << "1p's : " << remaining/val_1 << endl;
  remaining = remaining%val_1;

}
