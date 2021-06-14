// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     ll n;
//     cin>>n;
//     multiset<ll> arr;
//     set<ll> s;
//     ll i;
//     rep(i,n)
//     {
//         ll inp;
//         cin>>inp;
//         s.insert(inp);
//         arr.insert(inp);
//     }
//     mll dp;
//     for(ll x:s)
//     {
//         for()
//         if(m[d!=-1)
//         {
            
//         }
//     }

// }
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
mll m;
mll dp;
ll solve(ll x,set<ll> temp)
{
    if(temp.size()==1)
    return *(temp.begin());
    else 
    {
        temp.erase(x-1);
        temp.erase(x+1);
        ll val=*(temp.begin());
        ll ans=x+solve(val,temp);
        return ans;
    }
}

int main()
{
    ll n;
    cin>>n;
    ll i;
    ll maxi=-1;
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        m[inp]++;
        maxi=max(inp,maxi);
    }
    vector<pair<ll,ll> > arr;
    for(auto it=m.begin();it!=m.end();it++)
    {
        arr.pb({it->first,it->second});
    }
    ll dp[100001]={0};
    dp[0]=0;
    dp[1]=m[1];
    for(i=2;i<100001;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+m[i]*i);

    }
    cout<<(dp[maxi])<<endl;

}