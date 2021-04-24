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
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    rep(i,n)cin>>a[i];
    ll m;
    cin>>m;
    ll b[m];
    rep(i,m)cin>>b[i];
    ll j=0;
    i=0;
    ll count=0;
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n&&j<m;)
    {
        if(abs(a[i]-b[j])<=1)
        {
            i++;j++;
            count++;
        }
        else if(a[i]>b[j])
        j++;
        else if(b[j]>a[i])
        i++;
    }
    cout<<count<<endl;
}
ll solve(ll pos)
{
    if(pos==n-1)
    {
        if(arr[pos-1]<arr[pos])
        return 0;
        else 
        return 1;
    }
    else 
    {
        for(i=pos;i<n;i++)
        {
            ll val=(arr[pos]<arr[i])+solve(i);
            ans=max(ans,val);
        }
    }
    return ans;
}