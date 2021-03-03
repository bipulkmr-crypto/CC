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
// #include<set>
// int main()
// {
//     ll n = 30;
//     ll num;
//     cin >> num;
//     vector<bool> is_prime(n + 1, true);
//     ll i, j;
//     is_prime[0]=is_prime[1]=false;
//     is_prime[2]=true;
//     for(i=4;i<=n;i+=2)
//     is_prime[i]=false;
//     for (i = 3; i * i <= n; i+=2)
//     {
//         if (is_prime[i])
//         {
//             for (j = i * i; j <= n; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     // ll count = 0;
//     // for (i = 3; i <= x; i++)
//     // {
//     //     map<ll, ll> m;
//     //     ll c = 0;
//     //     j = 2;
//     //     if (!is_prime[i])
//     //     {
//     //         while (i > 0)
//     //         {
//     //             if (i % j == 0)
//     //             {
//     //                 m[j]++;
//     //                 i /= j;
//     //                 c++;
//     //             }
//     //             else
//     //             {
//     //                 i++;
//     //             }
//     //         }
//     //     }
//     //     if (m.size() == c)
//     //     {
//     //         count++;
//     //     }
//     // }
//     // cout << count << endl;]
//     vector<ll> primes;
//     set<ll> s;
//     for(i=2;i<=n;i++)
//     {
//         if(is_prime[i])
//         primes.pb(i);
//     }
//     for(ll x:primes)
//     {
//         for(ll y: primes)
//         {
//             if(x!=y)
//             {
//                 s.insert(x*y);
//             }
//         }
//     }
//     ll count=0;
//     set<ll>::iterator it;
//     for(it=s.begin();it!=s.end();it++)
//     {
//         if(*it<=num)
//         count++;
//     }
//     cout<< count << endl;
// }
#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#include <set>
#define pl(n) printf(% lld, n)
int main()
{
    ll n;
    set<ll> s;
    ll i = 2;
    cin >> n;
    ll count=0;
    ll j=2;
    for (; j <= n; j++)
    {
        i=2;
        while (j> 1)
        {
            if (j % i == 0)
            {
                j/=i;
                s.insert(i);
            }
            else
            {
                i++;
            }
        }
        if(s.size()==2)
        count++;
        s.clear();
    }
    cout<<count<<endl;
}
