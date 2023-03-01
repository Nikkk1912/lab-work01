#include <iostream>
#include <set>

using namespace std;

int main(){

    int size, min, max;
    int n = 0;
    set<int> s1;

    cin >> size >> min >> max;
    
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        s1.insert(val);
    }

    for (int val : s1) {
        if (min <= val && val < max) {
            n++;
        }
    }

    cout << n;

}