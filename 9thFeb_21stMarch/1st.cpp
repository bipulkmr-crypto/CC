// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// vector<ll> arr;
// ll k;
// ll n;
// bool good(ll x)
// {
//     ll i,j;
//     ll val=0;
//     rep(i,x)
//     val=val|arr[i];
//     if(val<=k)
//     return true;
//     else
//     {

//     }
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {

//         cin >> n;

//         cin >> k;
//         arr.resize(n);
//         ll i;
//         rep(i, n)
//                 cin >>
//             arr[i];
//         ll low = 1, mid, high = n;
//         while (high - low > 1)
//         {
//             mid = low + (high - low) / 2;
//             if (good(mid))
//             {
//                 low = mid;
//             }
//             else
//             {
//                 high = mid;
//             }
//         }
//     }
// }
#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll z = arr[0];
        bool flag = true;
        rep(i, n)
        {
            if (arr[i] != z)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            ll maxi = -1;
            ll count = 0;
            ll check = log2(k) + 1;
            for (i = 0; i < n; i++)
            {
                ll x = log2(arr[i]) + 1;
                if (x < check)
                    count++;
                else
                {
                    maxi = max(maxi, count);
                    count = 0;
                }
            }
            cout << maxi << endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
}