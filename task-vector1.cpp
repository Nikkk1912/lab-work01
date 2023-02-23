#include <iostream>
#include <vector>

using namespace std;

int main() {
  int size1, size2;

  cin >> size1 >> size2;

  vector<int> first(size1);

  for (auto i = 0; i < size1; i++) {
    cin >> first[i];
  }

  for (auto k = 0; k < size2; k++) {
    int u;
    cin >> u;
    first.erase(first.begin() + u - 1);
  }

  if (!first.empty()) {
    cout << first[0];
    for (int i = 1; i < first.size(); i++) {
      cout << " " << first[i];
    }
  }
}
