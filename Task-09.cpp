#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> subject = {"Sagor", "Selim", "Salma", "Nipu", "he", "she", "I", "we", "you", "they"};
    set<string> verb = {"read", "eat", "take", "run", "take", "write"};
    set<string> noun = {"book", "cow", "dog", "home", "grass", "rice", "mango"};

    string word;
    int cnt = 0;
    bool res = true;
    while (cin >> word)
    {
        cnt++;
        if (cnt == 1 && !subject.count(word))
            res = false;
        else if (cnt == 2 && !verb.count(word))
            res = false;
        else if (cnt == 3 && !noun.count(word))
            res = false;
        else if (cnt > 3)
            res = false;
    }
    if (res)
        cout << "Valid";
    else
        cout << "Invalid";
}