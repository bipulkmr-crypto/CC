
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<bool> segmentedSieve(long long L, long long R)
{
    // generate all primes up to sqrt(R)
    long long lim = sqrt(R);
    vector<bool> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i)
    {
        if (!mark[i])
        {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<bool> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        ll k=0;
        vector<bool>::iterator i;
        cin >> l >> r;
        ll c=0;
       vector<bool> v=segmentedSieve(l,r);
       for(i=v.begin();i<v.end();i++)
       {

           if(v[k])
           {
               c++;
           }
           k++;
       }
       cout<<c<<endl;
    }
}