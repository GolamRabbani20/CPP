#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin >> s;

   regex r(".*h.*e.*l.*l.*o.*");
   cout << (regex_match(s, r) ? "YES" : "NO") << endl;

   return 0;
}
