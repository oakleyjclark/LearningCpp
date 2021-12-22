/*
 Author:    Oakley Clark
 Date:      31/05/2021
 Exercise:  6
 About:     Vectors
*/


#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector <int> vec {10,20,30,40,50};

  // Array like indexing, does not handle out of range exception
  vec[0] = 100;
  vec[4] = 1000;

  // at method of vector class, does handle out of range exception
  vec.at(1) = 200;

  // Add to end of vector by push back method
  vec.push_back(32);

  // Vector of zeros
  vector <int> zerovec (20,0); // 20 zeros

  // 2D vector
  vector <vector<int>> vec2d {{1,2,3},
                              {4,5,6},
                              {7,8,9}};
  cout << vec2d[0][1] << endl;
  cout << vec2d.at(0).at(1) << endl;




}
