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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n;
        cin>>s;
        ll c[2];
        c[1]=c[0]=0;
        ll i;
        bool flag=false;
        ll len=LLONG_MAX;
        rep(i,n)
        {
            c[s[i]-'0']+=1;
            if(c[1]>=c[0])
            {
                flag=true;
                len=i+1;
                break;
            }
        }
        ll val=min(len,n);
        if(val%2==0)
        {
            if(c[1]>=(val/2))
            {
                flag=true;
            }
            else 
            flag=false;
        }
        else 
        {
            if(c[1]>(val/2))
            flag=true;
        }
        
        if(flag)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}