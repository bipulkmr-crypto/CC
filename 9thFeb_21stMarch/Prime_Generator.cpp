// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// void solve(ll l, ll r)
// {
//     ll lim = sqrt(r);
//     vector<bool> mark(lim + 1, false);
//     vector<bool> isprime(r - l + 1, true);
//     vector<ll> primes;
//     ll i, j;
//     for(i = 2; i < lim; i++)
//     {
//         if (!mark[i])
//         {
//             primes.emplace_back(i);
//             for (j = i * i; j <= lim; j += i)
//                 mark[j] = true;
//         }
//     }
//     for (ll x : primes)
//     {
//         for (j = max(i * i, ((l - i + 1) /( i * i))); j <= r; j += x)
//             isprime[j - l] = false;
//     }
//     if (l == 1)
//         isprime[0] = false;

//     for(i = l; i <= r; i++)
//     {
//         if (isprime[i])
//             cout << i << endl;
//     }
// }
// // void segmentedSieveNoPreGen(long long L, long long R) {
// //     vector<bool> isPrime(R - L + 1, true);
// //     long long lim = sqrt(R);
// //     for (long long i = 2; i <= lim; ++i)
// //         for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
// //             isPrime[j - L] = false;
// //     if (L == 1)
// //         isPrime[0] = false;
// //     for(ll i=L;i<=R;i++)
// //     {
// //         if(isPrime[i])
// //         cout<<i<<endl;
// //     }
// // }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll l, r;
//         cin >> l >> r;
//        solve(l,r);
//     }
// }
#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
void calculate_primes(vector<int>& primes); //Helper Function to calculate primes from 1 to 32000
int main()
{
    vector<int> primes(32001,1); // An array which holds the list of primes from 1 to 32000 (1 for prime, 0 for composite)
    calculate_primes(primes); 
    int cases;
    cin >> cases;
    for(int t=0;t<cases;t++)
    {
        long long int m,n,i,j;
        cin >> m >> n;
        vector<int> sieve(n-m+1,1); // A sieve or a boolean array that stores the list of primes from m to n (1 for prime, 0 for composite)
        for(i=2;i<=32000;i++)
        {
            /* Proceed only if i is prime*/
            if(primes[i]==1)
            {
                /* If m is divisible by, we start j from m/i , else from the next value*/
                if(m%i == 0)
                {
                    j = m/i;
                }
                else{
                    j = m/i + 1;
                }
                /* Very Critical Case: If j comes out to be 1, or less than i*/
                if( j < i)
                {
                    j = i;
                }

                long long int temp = j*i;
                while(temp<=n)
                {
                    sieve[temp-m]=0;
                    j++;
                    temp = j*i;
                }
            }
        }

        if(m == 1)
        {
            sieve[0] = 0; // 1 is always composte
        }

        for(i=0;i<n-m+1;i++)
        {
            if(sieve[i]==1)
                printf("%lld\n",m+i);
        }
        printf("\n");
    }
}

void calculate_primes(vector<int>& primes)
{
    primes[0]=0;
    primes[1]=0;
    for(long long int i=2;i<=32000;i++)
    {
        long long int j = i;
        long long int temp = j*i;
        while(temp <= 32000)
        {
            primes[temp] = 0;
            j++;
            temp = j*i;
        }
    }
}