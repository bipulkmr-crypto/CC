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
#define present(s, x) (s.find(x) != s.end())
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
#define siz 100000
int lp[siz + 5];
void seive()
{
	int i, j;
	forp(i, 2, sqrt(siz))
	{
		if (!lp[i])
		{
			for (j = i * i; j <= siz; j += i)
			{
				if (lp[j] == 0)
					lp[j] = i;
			}
		}
	}
}
int main()
{
    ll t;
    cin>>t;
    seive();
    while(t--)
    {
        map<ll,ll> m;
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        ll i;
        rep(i,n)
        {
            cin>>arr[i];
        }
        ll c=0;
        rep(i,n)
        {
            while(arr[i]!=1)
            {
                ll p=(lp[arr[i]]==0)?arr[i]:lp[arr[i]];
                c=0;
                while(arr[i]%p==0)
                {
                    c++;
                    arr[i]/=p;
                }
                if(!present(m,p))
                {
                    m[p]=c;
                }
                else
                m[p]+=c;
            }
        }
        while(q--)
        {
            ll l,r,x;
            cin>>l>>r>>x;
            ra
        }
    }
}