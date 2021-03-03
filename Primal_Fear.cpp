// // // #include <iostream>
// // // #include <map>
// // // #include <cstdio>
// // // #include <vector>
// // // #include <time.h>
// // // #include <utility>
// // // #include <cmath>
// // // #include <cstring>
// // // #include <algorithm>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define ff first
// // // #define ss second
// // // #define rep(i,n) for(i=0;i<n;i++)
// // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // #define gi(n) scanf(%d,&n)
// // // #define gl(n) scanf(%d,&n)
// // // #define pi(n) printf(%d,n)
// // // #define pl(n) printf(%lld,n)
// // // int main()
// // // {
// // //     ll t;
// // //     cin>>t;
// // //     ll n=1e8;
// // //     vector<bool> prime(n+1,true);
// // //     ll i,j;
// // //     prime[0]=prime[1]=false;
// // //     prime[2]=true;
// // //     for(i=4;i<=n;i+=2)
// // //     {
// // //         prime[i]=false;
// // //     }
// // //     for(i=3;i*i<=n;i+=2)
// // //     {
// // //         if(prime[i])
// // //         {
// // //             for(j=i*i;j<=n;j++)
// // //             {
// // //                 prime[i]=false;
// // //             }
// // //         }
// // //     }
// // //     while(t--)
// // //     {
// // //         ll q;
// // //         cin>>q;
// // //         ll temp;
// // //         bool flag=true;
// // //         if()
// // //     }
// // // }
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
// vector<ll> pre(1e6 + 5, 0);
// ll range = (ll)1e6 + 1;
// vector<bool> isprime(range, true);
// bool toBeAfraid(ll num)
// {
//     ll dig = 0;
//     ll tmpNum = num;
//     while (num > 0)
//     {
//         if (num % 10 == 0)
//             return false;
//         dig++;
//         num /= 10;
//     }
//     ll div = (ll)pow(10,dig-1);
//     num = tmpNum;
//     while (num > 0)
//     {
//         num %= div;
//         div /= 10;
//         if ((num != 0 && isprime[num] == 1))
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     ll t;
//     ll i, j;
//     isprime[0] = isprime[1] = false;
//     for (i = 4; i < range; i+=2)
//     {
//         isprime[i] = false;
//     }
//     cin >> t;
//     for (i = 3; i * i < range; i+=2)
//     {
//         if (isprime[i])
//         {
//             for (j = i * i; j < range; j += i)
//             {
//                 isprime[j] = false;
//             }
//         }
//     }
//     vector<ll> primes;
//     rep(i, range)
//     {
//         if (isprime[i])
//             primes.pb(i);
//     }
//     vector<ll> ans;
//     // for (ll x : primes)
//     // {
//     //     ll temp = x;
//     //     bool flag = true;
//     //     ll c = (ll)log10(x);
//     //     while (temp > 0)
//     //     {
//     //         bool val = isprime[x % (ll)pow(10, c)];
//     //         if (temp % 10 == 0)
//     //         {
//     //             flag = true;
//     //             break;
//     //         }
//     //         else if (val)
//     //         {
//     //             flag = false;
//     //         }
//     //         c--;
//     //         temp /= 10;
//     //     }
//     //     if (flag)
//     //         ans.pb(x);
//     // }
//     for (i = 2; i <= 1e6; i++)
//     {
//         pre[i] = pre[i - 1];
//         if (isprime[i])
//         {
//             if (toBeAfraid(i))
//             {
//                 pre[i]++;
//             }
//         }
//     }
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         cout << pre[n] << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007LL
#define EPS 1e9
#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define M_PI 3.14159265358979323846

// template <typename T> T gcd(T a, T b){return (b==0)?a:gcd(b,a%b);}
// template <typename T> T lcm(T a, T b){return a(b/gcd(a,b));}
// template <typename T> T mod_exp(T b, T p, T m){T x = 1;while(p){if(p&1)x=(xb)%m;b=(bb)%m;p=p>>1;}return x;}
// template <typename T> T invFermat(T a, T p){return mod_exp(a, p-2, p);}
// template <typename T> T exp(T b, T p){T x = 1;while(p){if(p&1)x=(xb);b=(bb);p=p>>1;}return x;}

const int MAXN = 1e6 + 5;
int isPrime[MAXN];

void sieve()
{
    isPrime[0] = isPrime[1] = 1;
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (isPrime[i] == 0)
        {

            for (int j = i * i; j <= 1000000; j += i)
                isPrime[j] = 1;
        }
    }
}

int cnt[MAXN];

bool toBeAfraid(ll num)
{
    ll dig = 0;
    ll tmpNum = num;
    while (num > 0)
    {
        if (num % 10 == 0)
            return false;
        dig++;
        num /= 10;
    }
    ll div = pow(10LL, dig - 1);
    num = tmpNum;
    while (num > 0)
    {
        num %= div;
        div /= 10;
        if ((num != 0 && isPrime[num] == 1))
            return false;
    }
    return true;
}

void precal()
{
    for (int i = 2; i <= 1000000; i++)
    {
        cnt[i] = cnt[i - 1];
        if (isPrime[i] == 0)
        {
            if (toBeAfraid(i))
                cnt[i]++;
        }
    }
}

int main()
{
    io;
    sieve();
    precal();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt[n] << endl;
    }
    return 0;
}