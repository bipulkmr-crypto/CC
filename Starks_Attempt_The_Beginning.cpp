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
// long long binpow(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         // ll a,b;
//         // cin>>a>>b;
//         string a,b;
//         cin>>a>>b;
//         ll len=a.length();
//         ll x=a[len-1]-'0';
//         len=b.length();
//         ll y=b[len-1]-'0';
//         if(len>1)
//         {
//              ll z=b[len-2]-'0';
//              ll y=z*10+y;
//              y%=4;
//              if(y==0)
//              y=4;
//         }
//         ll ans=pow(x,y);
//         ans%=10;
//         cout<<ans<<endl;
//     }
// }
#include <bits/stdc++.h>
#define mx 200005
#define mod 1000000007
#define ll long long
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
      string a,b;
      cin>>a>>b;
      ll l=a.size();
      int x=a[l-1]-'0';
      l=b.size();
      int y=b[l-1]-'0';
      if(l>1)
      {
          int z=b[l-2]-'0';
          y=z*10+y;
          y%=4;
          if(y==0)
          y=4;
      }
      x=pow(x,y);
      x%=10;
      cout<<x<<endl;
    }
    return 0;
}