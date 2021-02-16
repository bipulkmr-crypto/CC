#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll win(ll c,ll b,ll a[])
{
	ll m=a[c]^a[b];
	if(abs(a[c]-m)>abs(a[b]-m)) return b;
	else if (abs(a[c]-m)<abs(a[b]-m)) return c;
	else return min(c,b); 
}
ll game(ll l,ll r, ll a[])
{
	if(l==r) return l;
	ll mid=(l+r)/2;
	ll c=game(l,mid,a);
	ll b=game(mid+1,r,a);
	return win(c,b,a);
}
int  main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		cin>>a[i];
		cout<<game(0,n-1,a)+1<<endl;

	}
    return 0;
}