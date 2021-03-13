// #include <iostream>
// #include <map>
// #include <cstdio>
// #include<set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll arr[n];
//         ll i;
//         rep(i,n)
//         cin>>arr[i];
//         ll j=n-1;
//         ll g=0;
//         g=__gcd(arr[0],arr[1]);
//         fu(i,2,n-1)
//         {
//             g=__gcd(arr[i],g);
//         }
//         i=0;
//         bool flag=true;
//         for(;i<n&&j>=0;i++,j--)
//         {
//             for(ll k=i;k<j;k++)
//             {
//                 if(arr[i]>arr[k]&&__gcd(arr[i],arr[j])!=g)
//                 {
//                     flag=false;
//                     break;
//                 }
//                 else
//                 {
//                     swap(arr[i],arr[k]);
//                 }
//             }
//             if(flag==false)
//             {
//                 break;
//             }
//         }
//         if(flag)
//         cout<<"YES\n";
//         else
//         {
//             cout<<"NO\n";
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
#define ss second
#define all(v) v.begin(), v.end()
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
        ll n;
        cin >> n;
        ll arr[n];
        ll i;
        ll mini = 1e13;
        rep(i, n)
        {
            cin >> arr[i];
            mini = min(arr[i], mini);
        }
        vector<ll> v;
        rep(i, n)
        {
            if (arr[i] % mini == 0)
            {
                v.pb(arr[i]);
            }
        }
        sort(all(v));
        ll k = 0;
        rep(i, n)
        {
            if (arr[i] % mini == 0)
            {
                arr[i] = v[k];
                k++;
            }
        }
        bool flag=true;
        rep(i, n-1)
        {
            if(arr[i+1]-arr[i]<0)
            {
                flag=false;
                break;
            }

        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}