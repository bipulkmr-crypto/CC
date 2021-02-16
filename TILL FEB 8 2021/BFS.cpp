#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
vector<vector<ll> > v;
ll n,m;
vector<bool> visited;
void bfs(ll source)
{
    // bool visited[n]=false;
    queue<ll> q;
    q.push(source);
    ll i;
    visited[source]=true;
    while(!q.empty())
    {
        ll current=q.front();
        q.pop();
        cout<<current<<" ";
        rep(i,v[current].size())
        {
            ll child=v[current][i];
            if(visited[child]==false)
            {
                q.push(child);
                visited[child]=true;
            }
        }
    }
    cout<<endl;
}
int main()
{
    ll i;
    cin>>n>>m;
    visited.resize(n);
    v.resize(n);
    visited[n]={false};
    fu(i,1,n)
    {
        ll x,y;
        cin>>x>>y;
        // v.push_back(x);
        v[x].pb(y);
    }
    cout<<"Traversing the graph using BFS\n";
    for(i=0;i<n;i++)
    {
        if(visited[i]==false)
        bfs(i);
    }

}
