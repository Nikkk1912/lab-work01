#include <iostream>
#include <set>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string ent;
    cin >> ent;
    set<char> s;

    for (int i = 0; i < ent.length(); i++)
    {
        if (isalpha(ent[i]))
        {
            s.insert(ent[i]);
        }
    }
    cout << ent.length() - s.size();
}