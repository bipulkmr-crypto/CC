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
    ll arr[n];
    ll i;
    rep(i,n)
    cin>>arr[i];
    stack<ll> s1;
    stack<ll> s2;
    rep(i,n)
    {
        s1.push(arr[i]);
        s2.push(arr[n-i-1]);
    }
    while((!s1.empty())&&(!s2.empty()))
    {
        ll x1=s1.top();
        ll x2=s2.top();
        if(x1>x2)
        {
            cout<<2<<" ";
            s2.pop();
        }
        else if(x2>x1)
        {
            cout<<1<<" ";
            s1.pop();
        }
        else
        {
                  cout<<0<<" ";
            s1.pop();
            s2.pop();
        }
    }
}