#include<bits/stdc++.h>
using namespace std;
bool isPrimes(int n);
int main()
{
    int n;
    cin>>n;
    vector<int> getprimes(int n)
    {
        vector<int> primes;
        for(int i=2;i<n;i++)
        {
            if(isPrimes(i))
                primes.push_back();
        }
    }

    return primes;
}

bool isPrimes(int n)
{
    long long i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
