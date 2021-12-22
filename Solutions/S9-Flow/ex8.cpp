#include <iostream>
#include <vector>

using namespace std;

int main(){

  // Create empty vector and then fill
  vector<int> vec;
  int i {};
  for (i=1; i<=10; i+=1){
    vec.push_back(2*i);
  }


  // print the size of std::vector> v;
  cout << "vec size: " << vec.size() << endl;

  // print all elements
  for (auto element : vec){
    cout << element << endl;
  }


  // Count elements before 14 is hit with while loop
  int count = 0;
  i = 0;
  auto last = vec[0];
  while (i<=vec.size() && last!= 14){
    count += 1;
    i += 1;
    last = vec[i];
  }

  cout << "elements before 14: " << count << endl;

}
