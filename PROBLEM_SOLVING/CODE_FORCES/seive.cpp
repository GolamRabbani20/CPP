#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool marked[M];
void sieve(int n);
int main()
{
    int n;
    cin>>n;
  sieve(n);
}
void sieve(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }
  cout<<marked[j];
}
