#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> sequence(n);
  for (int i = 0; i < n; i++) {
    cin >> sequence[i];
  }

  vector<bool> removed(n, false);
  for (int i = 0; i < k; i++) {
    int index;
    cin >> index;
    removed[index - 1] = true;
  }

  vector<int> result;
  for (int i = 0; i < n; i++) {
    if (!removed[i]) {
      result.push_back(sequence[i]);
    }
  }

  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}