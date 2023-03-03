#include<iostream>
#include<set>

using namespace std;

int main(){

    int x, y;

    cin >> x >> y;

    
    set<int> one;

for (int k = 0; k < x; k++) {
	for(int l = 0; l < y; l++) {
		int num;
		cin >> num;

	if(k == 0 || l == 0 || k == x - 1 || l == y -1){
		one.insert(num);
	}
	}
}
	 
    cout << one.size();
}