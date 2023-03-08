#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
  map<int, int> marks;
  int markCount, questionCount;

  cin >> markCount;
  for (int i = 0; i < markCount; i++) {
    int temp;
    cin >> temp;
    marks[temp]++;
  }

  cin >> questionCount;
  for (int i = 0; i < questionCount; i++) {
    int temp;
    cin >> temp;
    if (i < questionCount - 1) {
      cout << marks[temp] << " ";
    } else {
      cout << marks[temp];
    }
  }
}