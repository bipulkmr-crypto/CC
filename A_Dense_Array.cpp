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
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// #define gl(n) scanf(%d,&n)
// #define pi(n) printf(%d,n)
// #define pl(n) printf(%lld,n)
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         vector<ll> arr;
//         vector<ll> ans;
//         ll inp;
//         ll i;
//         rep(i,n)
//         {
//             cin>>inp;
//             arr.pb(inp);
//         }
//         vector<ll>::iterator it;
//         for(i=0;i<arr.end()-1;i++)
//         {
//             ll mini=min(arr[i],arr[i+1]);
//             ll maxi=max(arr[i],arr[i+1]);
//             if((maxi/mini)<=2)
//             {
//                 ans.pb(arr[i]);
//                 arr.pb(arr[i+1]);
//             }
//             else
//             {  
//                 ans

//             }
//         }

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
bool good(ll a,ll b)
{
    ll maxi=max(a,b);
    ll mini=min(a,b);
    bool val=((maxi/(double(mini))-2)<=0);
    return val;
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i;
        rep(i,n)
        cin>>arr[i];
        ll ans=0;
        rep(i,n-1)
        {
            if(good(arr[i],arr[i+1])==false)
            {
                ll maxi=max(arr[i],arr[i+1]);
                ll mini=min(arr[i],arr[i+1]);
                ll j;
                // mini++;
                // ans+=1;
                // while(!good(maxi,mini))
                // {
                //     mini+=2;
                //     ans+=1;
                // }
                // if((((double(maxi))/(double)mini)-(maxi/mini))>0)
                // ans+=(maxi-mini)/4+1;
                // else
                // ans+=(maxi-mini)/4;
                double  va=log2((double)maxi/mini);
                if(maxi>mini)
                {
                    ans+=(ll) ceil(va)-1;
                }

            }
        }
        cout<<ans<<endl;

    }      
}