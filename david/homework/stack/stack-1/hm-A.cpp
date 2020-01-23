#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l = 0, r = 0;

    getline(cin, s, '@');

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            l++;
        }
        if (s[i] == ')')
        {
            r++;
        }
    }

    if (l == r)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    

    return 0;
}