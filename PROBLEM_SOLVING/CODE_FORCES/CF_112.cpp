#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b; cin >> a >> b;
    for (auto &c : a) c = tolower(c);
    for (auto &c : b) c = tolower(c);
    cout << (a > b) - (b > a);
}
