#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size1, size2;
    int firstcard, secondcard;
    bool work = false;
    int iter = 0;

    cin >> size1 >> size2;

    vector<int> deck1(size1);
    vector<int> deck2(size2);

    for (auto i = 0; i < size1; i++) {
        cin >> deck1[i];
    }

    for (auto i = 0; i < size2; i++) {
        cin >> deck2[i];
    }

    work = true;
    while(work = true){
        firstcard = deck1[1];
        secondcard = deck2[1];
        iter++;

        if (firstcard > secondcard){
            deck1.erase(deck1.begin());
            deck2.erase(deck2.begin());
            deck1.push_back(secondcard);
            deck1.push_back(firstcard);
        } 
        else if (secondcard > firstcard){
            deck1.erase(deck1.begin());
            deck2.erase(deck2.begin());
            deck2.push_back(firstcard);
            deck2.push_back(secondcard);
        } 
        else if (deck1.empty()){
            cout << iter << " " << "Peter";
            work = false;
        } 
        else if (deck2.empty()){
            cout << iter << " " << "Jhon";
            work = false;
        } 
        else if (deck1.empty() && deck2.empty()){
            cout << "Both losers";
            work = false;
        }
    }

}