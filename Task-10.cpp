#include <bits/stdc++.h>

using namespace std;

map<string, string> rules = {{"S+S", "S"}, {"S*S", "S"}};

int main()
{
    string stk = "", extra, input;
    cin >> input;
    // INPUT FORMAT ----> id+id*id

    // IF id exist in the input then rplace it with X
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'i' && input[i + 1] == 'd')
        {
            extra.push_back('X');
            i++;
        }
        else
            extra.push_back(input[i]);
    }

    for (int i = 0; i < extra.size(); i++)
    {
        stk += extra[i];
        if (stk.back() == 'X')
        {
            stk.back() = 'S';
        }
        if (rules.find(rules[stk]) != rules.end())
        {
            stk = rules[stk];
        }
    }
    if (stk == "S")
        cout << "Accept";
    else
        cout << "Reject";
}
