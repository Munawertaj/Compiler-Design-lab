#include <bits/stdc++.h>
#define pb push_back
#define nl endl
using namespace std;

void lexical_analyzer()
{
    string input;
    getline(cin, input);

    int length = input.length();
    int result, i;

    if ((input[0] >= 'i' && input[0] <= 'n') || (input[0] >= 'I' && input[0] <= 'N'))
    {
        for (i = 1; i < length; i++)
        {
            if (input[i] >= 'A' && input[i] <= 'Z')
                continue;
            else if (input[i] >= 'a' && input[i] <= 'z')
                continue;
            else if (input[i] >= '0' && input[i] <= '9')
                continue;
            else
            {
                cout << "Invalid Input or Undefined";
                break;
            }
        }
        if (i == length)
            cout << "Integer variable";
    }

    else if (input[0] >= '1' && input[0] <= '9')
    {
        for (i = 1; i < length; i++)
        {
            if (input[i] >= '0' && input[i] <= '9')
                continue;
            else
            {
                cout << "Invalid Input or Undefined";
                break;
            }
        }
        if (i == length)
        {
            if (length <= 4)
                cout << "ShortInt Number";
            else
                cout << "LongInt Number";
        }
    }

    else
        cout << "Invalid Input or Undefined";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    lexical_analyzer();

    return 0;
}