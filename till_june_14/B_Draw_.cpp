#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define pll pair<long long, long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s, x) (s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
void still_single()
{
    int n;
    vector<pll>arr;
    int i;
    cin>>n;
    arr.resize(n+1,{0,0});
    fu(i,1,n)
    {
        ll a,b;
        cin>>a>>b;
        arr[i]={a,b};
    }
    ll cnt=0;
    fu(i,1,n)
    {
        if(arr[i-1].ff==arr[i-1].ss)
        {
            cnt+=(min(arr[i].ff,arr[i].ss)-arr[i-1].ff);
        }
        else
        {
            cnt+=(max(0ll,1+min(arr[i].ff,arr[i].ss)-max(arr[i-1].ss,arr[i-1].ff)));
        }
    }
    cout<<cnt+1<<endl;

}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}