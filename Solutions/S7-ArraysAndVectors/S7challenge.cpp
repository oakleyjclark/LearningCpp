#include <iostream>
#include <vector>


using namespace std;

int main(){

  vector <int> vec1 {};
  vector <int> vec2 {};

  vec1.push_back(10);
  vec1.push_back(20);

  cout << "Vector 1" << endl;
  cout << "Vector size: " << vec1.size() << endl;
  cout << "First element.at " << vec1.at(0) << " index " << vec1[0] << endl;
  cout << "Second element.at " << vec1.at(1) << " index " << vec1[1] << endl;

  vec2.push_back(100);
  vec2.push_back(200);
  cout << "Vector 2" << endl;
  cout << "Vector size: " << vec2.size() << endl;
  cout << "First element.at " << vec2.at(0) << " index " << vec2[0] << endl;
  cout << "Second element.at " << vec2.at(1) << " index " << vec2[1] << endl;


  vector <vector<int>> vec2d {};
  vec2d.push_back(vec1);
  vec2d.push_back(vec2);

  cout << "2D Vector: " << endl;
  cout << "Size: " << vec2d.size() << endl;

}
