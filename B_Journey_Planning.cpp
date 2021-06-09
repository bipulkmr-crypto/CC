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
void still_single()
{
    ll n;
    cin>>n;
    map<ll,vector<pll>>m;
    ll i;
    rep(i,n)
    {
        ll x;
        cin>>x;
        // if((x-i)>=0)
        {
            m[x-i].pb({i,x});
        }
    }
    
    ll ans=LLONG_MIN;
    ford(m,it)
    {
        ll cur=0;
        for(auto p:it->second)
        {
            cur+=p.ss;
        } 
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
    // set<pair<int,int>>s;
    // int i;
    // rep(i,n)
    // {
    //     int x;
    //     cin>>x;
    //     s.insert({x,i});
    // }
    // if(n==1)
    // {
    //     auto it=s.begin();
    //     cout<<(*it).ff<<endl;
    //     return ;
    // }
    // ll ans=LLONG_MIN;
    // ll cur=0;
    // auto it=s.begin();
    // auto last=*it;
    // cur=last.ff;
    // it++;
    // ans=max(ans,cur);
    // while(it!=s.end())
    // {
    //     auto p=*it;
    //     // if((p.ff-last.ff)==(p.ss-last.ss))
    //     if(s.find({last.ff+(p.ss-last.ss),last.ss+(p.ff-last.ff)})!=s.end())
    //     {
    //         cur+=p.ff;
    //         last=p;
    //     }
    //     // else if(last.ff==p.ff)
    //     // {
    //     //     it++;
    //     //     continue;
    //     // }
    //     else
    //     {
    //         ans=max(ans,cur);
    //         cur=p.ff;
    //         last=p;
    //     }
    //     // last=p;
    //     it++;
    // }
    // ans=max(ans,cur);
    // cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        still_single();
    }
    return 0;
}