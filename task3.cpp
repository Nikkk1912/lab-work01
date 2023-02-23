#include <iostream>
#include <vector>

using namespace std;

int main() {
  int size;
  cin >> size;

  vector<int> first(size);

  for (auto i = 0; i < size; i++) {
    cin >> first[i];
  }


  for (auto i = 0; i < size; i++) {
    auto j = first.at(i);
    if (j < 0) {
      first.erase(first.end() - i);
      first.push_back(j);
    }
  }

  if (!first.empty()) {
    cout << first[0];
    for (int i = 1; i < first.size(); i++) {
      cout << " " << first[i];
    }
  }
  return 0;
}