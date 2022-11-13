#include <bits/stdc++.h>
#define pb push_back
#define nl endl
using namespace std;

bool isBinary(string st)
{
    if (st[0] == '0')
    {
        for (int i = 1; i < st.size(); i++)
        {
            if (st[i] != '0' && st[i] != '1')
                return false;
        }
        return true;
    }
    return false;
}

bool isCharacter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    return false;
}

bool isOther(string str)
{
    int sz = str.size();
    for (int i = 0; i < sz; i++)
    {
        if (isdigit(str[i]) || isCharacter(str[i]) || str[i] == '_')
            continue;
        else
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string str;
    getline(cin, str);

    string subString = str.substr(0, 3);

    // cout<<subString<<endl;
    if (isOther(str))
        cout << "Invalid Input or Undefined\n";
    else if (subString == "ch_" && (isCharacter(str[3]) || isdigit(str[3]))) // isdigit(ch) is built in function
        cout << "Character variable\n";
    else if (subString == "bn_" && (isCharacter(str[3]) || isdigit(str[3])))
        cout << "Binary variable\n";
    else if (isBinary(str))
        cout << "Binary Number\n";
    else
        cout << "Invalid Input or Undefined\n";
}