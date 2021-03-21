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
    while (t--)
    {
        string s;
        cin>>s;
        ll i,n=s.length();
        ll pos=-1;
       fu(i,1,n-1)
        {
            if(s[i]==s[i-1]&&s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        ll j;
        ll x=-1;
        bool flag=false;
        for(j=n-1;j>=0;j--)
        {
            if(s[j]==s[j+1]&&s[j]=='0')
            {
               x==j;
               break;
            }
            // if(n==0)
            // {
            //     cout<<"YES\n";
            // }
        }

        // if(!flag)
        // cout<<"YES\n";
        if(pos<x)
        puts("NO");
        else
        puts("YES");
    }
    
}