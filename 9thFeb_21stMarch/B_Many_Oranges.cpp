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
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// ll gcd(ll a, ll b, ll& x, ll& y) {
//     if (b == 0) {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     ll x1, y1;
//     ll d = gcd(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a / b);
//     return d;
// }
// bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
//     g = gcd(abs(a), abs(b), x0, y0);
//     if (c % g) {
//         return false;
//     }

//     x0 *= c / g;
//     y0 *= c / g;
//     if (a < 0) x0 = -x0;
//     if (b < 0) y0 = -y0;
//     return true;
// }
// int main()
// {
//     ll a,b;
//     cin>>a>>b;
//     ll w;
//     cin>>w;
//     w*=1000;
//     ll i,j;
//     ll maxi=-1,mini=1e14;
//     bool flag=false;
//     for(i=a;i<=b;i++)
//     {
//         for(j=i;j<=b;j++)
//         {
//             ll p,q;
//             ll g=__gcd(i,j);
//             if(find_any_solution(i,j,w,p,q,g));
//             {
//                 ll sum=p+q;
//                 maxi=max(sum,maxi);
//                 mini=min(sum,mini);
//                 flag=true;
//             }   
//         }
//     }
//     if(flag==true)
//     cout<<mini<<" "<<maxi<<endl;
//     else 
//     cout<<"UNSATISFIABLE"<<endl;
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
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll a,b;
    cin>>a>>b;
    ll w;
    cin>>w;
    w*=1000;
    ll x=floor(w/double(a));
    ll y=ceil(w/double(b));
    if(y>x)
    {
        cout<<"UNSATISFIABLE";
    }
    else
    {
        cout<<y<<" "<<x;
    }
}