#include <bits/stdc++.h>
#define nl endl
#define pb push_back
using namespace std;

map<string, string> department;
map<string, string> year;
map<string, string> semester;
map<string, string> courseName;
map<string, string> courseType;

void setUpSampleText()
{
    department["CSE"] = "Computer Science & Engineerring";
    year["1"] = "1st year";
    year["2"] = "2nd year";
    year["3"] = "3rd year";
    year["4"] = "4th year";

    semester["1"] = "1st semester";
    semester["2"] = "2nd semester";
    semester["3"] = "3rd semester";
    semester["4"] = "4th semester";

    courseName["1"] = "System Analysis and Design";
    courseName["2"] = "Database Management System";
    courseName["3"] = "Digital Signal Processing";
    courseName["4"] = "Compiler Design";
    courseName["5"] = "Computer Networks";

    courseType["1"] = "Theory";
    courseType["2"] = "Lab";
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string st;
    getline(cin, st);

    setUpSampleText();

    int i = 0;
    string temp;

    while (st[i] != '-')
    {
        temp.pb(st[i]);
        i++;
    }
    i++;
    cout << department[temp] << ",";
    temp = st[i++];
    cout << year[temp] << ",";
    temp = st[i++];
    cout << semester[temp] << ",";
    temp = st[i++];
    cout << courseName[temp] << ",";
    temp = st[i++];
    cout << courseType[temp] << ".";
}