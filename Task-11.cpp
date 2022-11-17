#include <bits/stdc++.h>
using namespace std;

vector<string> tree(50, "                                         ");

bool is_operator(char ch);
void Syntax_Tree_Generate(string st);
void Syntax_Tree_Print(string st);

int main()
{
    string input;
    input = "a+b*c+d+e";
    // cin >> input;
    Syntax_Tree_Generate(input);
    Syntax_Tree_Print(input);
}

void Syntax_Tree_Generate(string st)
{
    int row = 0, col = 2;
    for (int i = 0; i < st.size(); i++)
    {
        if (is_operator(st[i]))
        {
            tree[row][col] = st[i];
            tree[row + 1][col - 1] = '/';
            tree[row + 2][col - 2] = st[i - 1];
            tree[row + 1][col + 1] = '\\';
            row += 2;
            col += 2;
        }
    }
    tree[row][col] = st.back();
}
bool is_operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    else
        return false;
}

void Syntax_Tree_Print(string st)
{
    cout << "Given Expression = " << st << endl;
    cout << endl;
    for (auto x : tree)
        cout << x << "\n";
}