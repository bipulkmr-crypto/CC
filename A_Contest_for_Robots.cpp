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
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int i;
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    int cnt1=0,cnt2=0;
    rep(i,n)
    {
        if(a[i]==1&&b[i]==0)cnt1++;
        else if(a[i]==0&&b[i]==1)cnt2++;
    }
    if(cnt1==0)
    {
        cout<<-1<<endl;
    }
    else if(cnt2<cnt1)
    {
        cout<<1<<endl;
    }
    else
    {
        int ans=0;
         
        if(cnt2%cnt1==0)
        {
            ans=cnt2/cnt1+1;
        }
        else
        ans=ceil((double)cnt2/(double)cnt1);
        cout<<ans<<endl;
    }
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