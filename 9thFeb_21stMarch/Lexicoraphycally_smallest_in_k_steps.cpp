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
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         ll i;
//         cin >> n >> k;
//         vector<ll> arr;
//         rep(i, n)
//         {
//             ll inp;
//             cin >> inp;
//             arr.pb(inp);
//         }
//         i = 0;
//         ll curr = 0;
//         while ((i < n - 1) && (k > 0))
//         {
//             for (ll j = i + 1; j < n - 1; j++)
//             {
//                 if (arr[j] < arr[j+ 1])
//                 {
//                     swap(arr[j], arr[j + 1]);
//                     k--;
//                 }
//             }

//             i++;
//         }
//         rep(i, n)
//                 cout
//             << arr[i];
//         cout << endl;
//     }
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
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll arr[n];
        ll i;
        rep(i,n)
        cin>>arr[i];
        ll j;
        for(i=0;i<n-1&&k>0;i++)
        {
            ll inp=i;
            for(j=i+1;j<n;j++)
            {
                if(k<j-i)
                break;
                if(arr[j]>arr[inp])
                inp=j;
            }
            for(j=inp;j>i;--j)
            {
                swap(arr[j],arr[j-1]);
            }
            k-=inp-i;
        }
        rep(i,n)
        cout<<arr[i];
        cout<<endl;
    }
}