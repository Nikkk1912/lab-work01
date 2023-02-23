#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
  int size, amount;

  cin >> size >> amount;

  vector<int> first(size);

  for (auto i = 0; i < size; i++) {
    cin >> first[i];
  }

  string work;
  int much;

  for (auto i = 0; i < amount; i++) {
    cin >> work >> much;

    if (work == "sum") {
      cout << accumulate(first.begin(), first.begin() + much, 0) << endl;
    }

    else if (work == "del") {
      first.erase(first.begin() + much - 1);
    }

    else if (work == "pap") {
      first.insert(first.begin() + much, much * 2);
    }
  }

  return 0;
}
