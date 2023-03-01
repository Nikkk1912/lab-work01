#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    int amount;

    cin >> amount;

    for (int i = 0; i < amount; i++){
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
}