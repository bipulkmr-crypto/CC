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
//     ll t;
//     ll i,j;
//     ll n=1e4;
//     set<ll> s;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             s.insert(i*i*i+j*j*j);
//         }
//     }
//     cin>>t;
//     while(t--)
//     {
//         ll q;
//         cin>>q;
//         if(s.find(q)!=s.end())
//         {
//             cout<<"YES\n";
//         }
//         else 
//         {
//             cout<<"NO\n";
//         }
//         // bool flag=false;
//         // for(i=1;i*i*i<=q;i++)
//         // {
//         //     for(j=1;j*j*j<=q;j++)
//         //     {
//         //         ll sum=(i*i*i+j*j*j);
//         //         if(sum==q)
//         //         {
//         //             flag=true;
//         //             break;
//         //         }
//         //     }
//         // }
//         // if(flag==true)
//         // cout<<"YES\n";
//         // else 
//         // cout<<"NO\n";
//     }
// }
#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include<set>
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
    set<ll> s;
    ll n=1e4;
    ll i;
    fu(i,1,n)
    {
        s.insert(i*i*i);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll q;
        cin>>q;
        bool flag=false;
        fu(i,1,(ll)cbrt(q))
        {
            bool val=(s.find(i*i*i)!=s.end())&&(s.find(q-i*i*i)!=s.end());
            if(val)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}