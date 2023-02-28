#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

size_t vhash(vector<int> const &vec) {
  size_t seed = vec.size();
  for (auto &i : vec) {
    seed ^= i + 0x9e3779b9 + (seed << 6) + (seed >> 2);
  }
  return seed;
}

template <typename T> bool vectorContains(const vector<T> &vec, T val) {
  return find(vec.begin(), vec.end(), val) != vec.end();
}

int main() {
  int size1, size2;
  int firstcard, secondcard;
  int iter = 0;

  cin >> size1 >> size2;

  vector<int> deck1(size1);
  vector<int> deck2(size2);
  vector<size_t> seen;

  for (auto i = 0; i < size1; i++) {
    cin >> deck1[i];
  }

  for (auto i = 0; i < size2; i++) {
    cin >> deck2[i];
  }

  size_t vector_hash;

  while (true) {

    vector_hash = vhash(deck1) + vhash(deck2);

    if (deck1.empty()) {
      cout << iter << " "
           << "Jhon";
      return 0;
    } else if (deck2.empty()) {
      cout << iter << " "
           << "Peter";
      return 0;
    } else if (vectorContains(seen, vector_hash)) {
      cout << "Both losers";
      return 0;
    }

    seen.push_back(vector_hash);
    iter++;

    firstcard = deck1.at(0);
    secondcard = deck2.at(0);

    if (firstcard > secondcard) {
      deck1.erase(deck1.begin());
      deck2.erase(deck2.begin());
      deck1.push_back(secondcard);
      deck1.push_back(firstcard);

    } else if (secondcard > firstcard) {
      deck1.erase(deck1.begin());
      deck2.erase(deck2.begin());
      deck2.push_back(firstcard);
      deck2.push_back(secondcard);
    }
  }
}