// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// #include<set>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// #define gl(n) scanf(%d,&n)
// #define pi(n) printf(%d,n)
// #define pl(n) printf(%lld,n)
// int main()
// {
//     ll n;
//     cin>>n;
//     ll i, j;
//     ll range = n+1;
//     vector<bool> isprime(range, true);
//     isprime[0] = isprime[1] = false;
//     for (i = 4; i < range; i += 2)
//     {
//         isprime[i] = false;
//     }
//     for (i = 3; i * i < range; i += 2)
//     {
//         if (isprime[i])
//         {
//             for (j = i * i; j < range; j += i)
//             {
//                 isprime[j] = false;
//             }
//         }
//     }
//     vector<ll> prime;
//     // ll count = 1;
//     rep(i, range)
//     {
//         if (isprime[i])
//             prime.pb(i);
//     }
//     set<ll> s;
//     for(ll x:prime)
//     {
//         ll temp=x;
//         while(temp<=n)
//         {
//             temp*=x;
//             if(temp<=n)
//             s.insert(temp);
//         }
//     }
//     ll count=s.size();
//     // vector<ll>::iterator it;
//     // for(it=prime.begin();it!=prime.end();it++)
//     // {
//     //     ll temp=*it;
//     //     ll l=(log10(n)/log10(temp));
//     //     if(l>0)
//     //     count+=(l-1);
//     // }
//     cout<<(n-count)<<endl;
// }
#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include<set>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
    ll n;
    cin>>n;
    set<ll> s;
    ll i;
    ll temp;
    for(i=2;i<=sqrt(n);i++)
    {
        temp=i;
        temp*=i;
        while(temp<=n)
        {
            s.insert(temp);
            temp*=i;
        }
    }
    cout << (n-s.size())<<endl;
}