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
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// ll etf(ll n)
// {
//     if(n==1)
//     return 0;
//     ll i = 2, count = n;
//     for (i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             while (n % i == 0)
//             {
//                 n /= i;
//             }
//             count -= count / i;
//         }
//     }
//     if (n > 1)
//         count -= count / n;
//         // count--;
//     return count;
// }
// bool isprime(ll n)
// {
//         // if(n==1||n==0) return false;
//         // if(n==2) return true;
//         // ll c = 0, i = 2;
//         // for (i = 2; i * i <= n; i++)
//         // {
//         //     if (n % i == 0)
//         //         c++;
//         //     if (c > 1)
//         //         return false;
//         // }
//         // if (c == 1)
//         //     return true;
//         // else
//         //     return false;
//         if(n==1||n==0)
//         return false;
//         ll c=1;
//         ll i;
//         if(n==2)
//         return true;
//         for(i=2;i*i<=n;i++)
//         {
//             if(n%i==0)
//             c++;
//         }
//         return(c==2);

// }
// int main()
// {
//     ll n, q;
//     // vector<pair<ll,ll>  > arr;
//     cin>>n>>q;
//     // ll i;

//     // rep(i,n)
//     // {
//     //     ll inp;
//     //     cin>>inp;
//     //     ll phi=etf(inp);
//     //     arr.pb(make_pair(inp,inp-phi));
//     // }
//     // sort(arr.begin(),arr.end());
//     // rep(i,n)
//     // cout<<arr[i].ff<<" "<<arr[i].ss<<endl;
//     ll arr[n];
//     ll et[n];
//     ll i;
//     rep(i, n)
//     {
//         cin >> arr[i];
//         ll p = etf(arr[i]);
//         if (isprime(p))
//         {
//             et[i] = 1;
//         }
//         else
//             et[i] = 0;
//     }
//     for(i=1;i<n;i++)
//     {
//         et[i]=et[i]+et[i-1];
//     }
//     while (q--)
//     {
//         ll l, r;
//         cin >> l >> r;
//         l-=2;r--;
//         cout<<(et[r]-et[l])<<endl;
//     }
// }
#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(x) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll n,q;
    cin>>n>>q;
    vector<ll> arr(n);
    vector<ll> ans(n+1);
    ll i;
    rep(i,n)
    {
        cin>>arr[i];
    }
    ll x=0;
    rep(i,n)
    {
        if(arr[i]==3||arr[i]==4||arr[i]==6)
        x++;
        ans[i+1]=x;
    }
    // fu(i,1,n)
    // {
    //     ans[i]=ans[i]+ans[i-1];
    // }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<(ans[r]-ans[l-1])<<endl;
    }
}