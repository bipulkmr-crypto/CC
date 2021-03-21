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
// #define mod 1000
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
// ll binpowmod(ll a,ll b)
// {
//     a%=mod;
//     if(b==0)
//     {
//         return 1;
//     }
//     ll res=binpowmod(a,b/2);
//     if(b&1)
//     res=(res%mod)*(res%mod)*(a%1000);
//     else
//     {
//         res=(res%mod)*(res%mod);
//     }
//     return res;
// }
// int main()
// {
//     ll n;
//     cin>>n;
//     ll cycle=1;
//     ll p=1378;
//     p*=p;
//     while(p%10!=8)
//     {
//         cycle++;
//         p%=mod;
//         p*=p;
//     }
//     n%=cycle;
//     ll ans=binpowmod(n,cycle);
//     cout<<ans<<endl;
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
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll n;
    cin>>n;
    if(n==0)
    cout<<1<<endl;
    else 
    {
        if(n%4==0)
        cout<<6<<endl;
        else if(n%4==1)
        cout<<8<<endl;
        else if(n%4==2)
        cout<<4<<endl;
        else if(n%4==3)
        cout<<2<<endl;
    }
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    mll m;
    reverse();
}