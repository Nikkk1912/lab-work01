#include <iostream>
#include <vector>

using namespace std;

int main() {
  int size;
  auto k = 0;
  cin >> size;

  vector<int> first(size);
  vector<int> second;

  for (auto i = 0; i < size; i++) {
    cin >> first[i];
  }

  for (int i=0; i<first.size(); i++) 
        second.push_back(first[i]); 


  for (auto i = 0; i < size; i++) {
    
    auto j = first.at(i);
    if (j < 0) {
      second.erase(second.begin() + i - k);
      second.push_back(j);
      k++;
    }
  }

  if (!second.empty()) {
    cout << second[0];
    for (int i = 1; i < second.size(); i++) {
      cout << " " << second[i];
    }
  }
  return 0;
}