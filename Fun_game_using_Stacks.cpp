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
    ll n,m;
    cin>>n>>m;
    stack<ll> s1;
    stack<ll> s2;
    ll sum1=0,sum2=0;
    ll i;
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        s1.push(inp);
        sum1+=inp;
    }
    rep(i,m)
    {
        ll inp;
        cin>>inp;
        s2.push(inp);
        sum2+=inp;
    }
    while(sum1!=sum2||(!s1.empty()&&!s2.empty()))
    {
        if(sum1>sum2)
        {
            ll x=s1.top();
            s1.pop();
            sum1-=x;
        }
        else if(sum1<sum2)
        {
            ll x=s2.top();
            s2.pop();
            sum2-=x;
        }
        else 
        {
            break;
        }
    }
    if(sum1==sum2&&(sum1!=0))
    {
        cout<<sum1<<endl;
    }
    else
    {
        cout<<"Not possible"<<endl;
    }
}