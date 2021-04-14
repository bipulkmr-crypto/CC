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
    ll n,m;
    char ch[101][101];
    ll ans=0;
bool solve(ll x,ll y)
{
    if(x>=n||x<0||y>=n||y<0)
    return false;
    if(ch[x][y]=='#')
    {
        false;
    }
    else if(ch[x][y]=='O')
    {
        return true;
    }
    else if(ch[x][y]=='.')
    {
        ans++;
        return((solve(x+1,y)||solve(x-1,y)||solve(x,y+1)||solve(x,y-1)));
    }
    return false;
}
int main()
{

    cin>>n>>m;

    ll i,j;
    ll x,y;
    rep(i,n)
    {
        rep(j,m)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='P')
            {
                x=i;
                y=j;
            }
        }
    }
    bool flag=solve(x,y);
    if(flag)
    cout<<ans<<endl;
    else 
    cout<<-1<<endl;

}