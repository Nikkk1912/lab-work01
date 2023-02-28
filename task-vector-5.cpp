#include <iostream>
#include <vector>

using namespace std;

int main() {
  int size;

  cin >> size;

  vector<int> A(size);
  vector<int> B;

  for (int i = 0; i < size; i++) {
    A[i] = i + 1;
  }

  while (true) {
    B.push_back(A.at(0));
    A.erase(A.begin());

    if (A.empty()) {
      cout << B[0];
      for (int i = 1; i < B.size(); i++) {
        cout << "," << B[i];
      }
      return 0;
    }

    A.push_back(A.at(0));
    A.erase(A.begin());

    if (A.empty()) {
      cout << B[0];
      for (int i = 1; i < B.size(); i++) {
        cout << "," << B[i];
      }
      return 0;
    }
  }

  return 0;
}
