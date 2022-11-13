#include <bits/stdc++.h>
#define nl endl
#define pb push_back
using namespace std;

bool is_vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return true;

    return false;
}

bool is_alphabet(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return true;
    if (ch >= 'a' && ch <= 'z')
        return true;
    return 0;
}

void count_vowels_and_consonent(string st)
{
    int vowel = 0, consonent = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (is_vowel(st[i]))
            vowel++;
        else if (is_alphabet(st[i]))
            consonent++;
    }
    cout << "Number of Vowels = " << vowel << nl;
    cout << "Number of Consonents = " << consonent << nl;
}

void show_vowels_and_consonents(string st)
{
    set<char> vowel;
    set<char> consonent;
    for (int i = 0; i < st.size(); i++)
    {
        if (is_vowel(st[i]))
            vowel.insert(st[i]);
        else if (is_alphabet(st[i]))
            consonent.insert(st[i]);
    }
    cout << "Vowels existed in the String are = ";
    for (auto x : vowel)
        cout << x << ", ";

    cout << nl << "Consonents existed in the String are = ";
    for (auto x : consonent)
        cout << x << ", ";
    cout << nl;
}

void words(string st)
{
    vector<string> vowel, consonent;

    for (int i = 0; i < st.size(); i++)
    {
        string sub;
        while (st[i] != ' ' && st[i] != '\0')
            sub.pb(st[i++]);

        if (is_vowel(sub[0]))
            vowel.pb(sub);
        else if (is_alphabet(sub[0]))
            consonent.pb(sub);
    }
    cout << "Words started with Vowel are = ";
    for (auto x : vowel)
        cout << x << " ";

    cout << nl << "Words started with Consonent are = ";
    for (auto x : consonent)
        cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // string str="Munmun is the student of Computer Science & Engineering";
    string st;
    getline(cin, st);
    count_vowels_and_consonent(st);
    show_vowels_and_consonents(st);
    words(st);

    return 0;
}