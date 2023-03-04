#include <iostream>
#include <set>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string ent;
    int m = 0;
    cin >> ent;
    set<char> s;

    for (int i = 0; i < ent.length(); i++)
    {
        if (isalpha(ent[i]))
        {
            m++;
        }
        else if (isdigit(ent[1]))
        {
            s.insert(ent[i]);
        }
    }

    // cout << s.size() << m << endl;
    //cout << ent.length() - m - s.size();
    


    if (m >= 2 || ent.length() - s.size() > 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}