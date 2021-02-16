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
    bool good(ll x)
    {
        ll temp=x;
        ll check=0;
        while(x>0)
        {
            ll d=x%10;
            check+=d*d;
            x/=10;
        }
        return(temp==check);
    }
    int main()
    {
        ll t=1e7;
        ll i;
        ll ans=0;
      for(i=1;i<=t;i++)
        {
            if(good(i))
            {
               ans=i; 
                break;
                
            }
        }
        cout<<ans;
    }