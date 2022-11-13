#include <bits/stdc++.h>
#define pb push_back
#define nl endl
using namespace std;

string keywords[49] = {"int", "namespace", "struct", "new", "switch", "and", "delete", "do", "not", "this",
                       "double", "auto", "nullptr", "throw", "else", "true", "enum", "or", "try", "bool", "typedef",
                       "break", "private", "case", "typename", "catch", "false", "public", "union", "char", "float",
                       "register", "unsigned", "for", "return", "class", "goto", "short", "void", "if", "signed", "const",
                       "sizeof", "int", "static", "while", "long", "xor", "continue"};

bool isCharacter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}

bool isKeyword(string str)
{
    for (int i = 0; i < 49; i++)
    {
        if (keywords[i] == str)
            return true;
    }
    return false;
}

bool isArithmetic(string str)
{
    if (str == "+" || str == "-" || str == "*" || str == "/" || str == "%")
        return true;
    else
        return false;
}

bool isOther(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (isCharacter(str[i]) || isdigit(str[i]) || str[i] == '_' || str[i] == '.')
            continue;
        else
            return true;
    }
    return false;
}

bool isFloat(string str)
{
    int sz = str.size();
    int cnt = 0;

    for (int i = 0; i < sz; i++)
    {
        if (str[i] == '.' && i < sz - 1)
            cnt++;
        else if (!isdigit(str[i]))
            return false;
    }
    if (cnt == 1 && str[0] != '.')
        return true;
    else
        return false;
}

bool isInteger(string str)
{
    int sz = str.size();
    for (int i = 0; i < sz; i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}

bool isIdentifier(string str)
{
    if (isdigit(str[0]))
        return false;
    else
        return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);

    if (isArithmetic(str))
        cout << "Arithmetic Operator\n";
    else if (isOther(str))
        cout << "Undefined\n";
    else if (isKeyword(str))
        cout << "Keyword\n";
    else if (isFloat(str))
        cout << "Float\n";
    else if (isInteger(str))
        cout << "Integer" << nl;
    else if (isIdentifier(str))
        cout << "Identifier\n";
    else
        cout << "Invalid Input\n";
}