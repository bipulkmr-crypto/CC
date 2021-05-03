#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#include <ext/pb_ds/assoc_container.hpp>using namespace __gnu_pbds;
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
ll Maxgcd(ll arr[],ll n)
{
    ll pre[n+2];
    ll suff[n+2];
    pre[1]=arr[0];
    ll i;
    for(i=2;i<=n;i+=1)
    {
        pre[i]=__gcd(pre[i-1],arr[i-1]);
    }
    suff[n]=arr[n-1];
    for(i=n-1;i>=0;i--)
    {
        suff[i]=__gcd(suff[i+1],arr[i-1]);
    }
    ll ans=max(suff[2],pre[n-1]);
    for(i=2;i<n;i++)
    {
        ans=max(ans,__gcd(pre[i-1],suff[i+1]));
    }
    return ans;
}
int main ()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll i;
    rep(i,n)
    {
        cin>>arr[i];
    }
    ll ans=Maxgcd(arr,n);
    cout<<ans<<endl;
}