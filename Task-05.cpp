#include <bits/stdc++.h>
#define pb push_back
#define nl endl
using namespace std;

void lexical_analyzer()
{
    string input;
    getline(cin, input);

    int length = input.length();
    int result, i, count = 0;

    if (input[0] == '0' && (input[1] >= '0' && input[1 <= 9]))
        cout << "Invalid Input or Undefined";

    else if ((input[0] >= 'a' && input[0] <= 'h') || (input[0] >= 'A' && input[0] <= 'H') || (input[0] >= 'o' && input[0] <= 'z') || (input[0] >= 'O' && input[0] <= 'Z'))
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
                return;
            }
        }
        if (i == length)
            cout << "Float variable";
    }

    else if (input[0] >= '0' && input[0] <= '9')
    {
        for (i = 1; i < length; i++)
        {
            if (input[i] >= '0' && input[i] <= '9')
                continue;
            else if (input[i] == '.')
                break;
            else
            {
                cout << "Invalid Input or Undefined";
                return;
            }
        }

        if (input[i] == '.')
        {
            for (i = i + 1; i < length; i++)
            {
                if (input[i] >= '0' && input[i] <= '9')
                    count++;
                else
                {
                    cout << "Invalid Input or Undefined";
                    return;
                }
            }
        }

        if (i == length)
        {
            if (count == 2)
                cout << "Float Number";
            else if (count > 2)
                cout << "Double Number";
            else
                cout << "Invalid Input or Undefined";
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