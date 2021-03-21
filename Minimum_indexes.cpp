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
bool good(ll a,ll b)
{
    ll sum1=0,sum2=0;
    while(a>0)
    {
        sum1+=a%10;
        a/=10;
    }
    while(b>0)
    {
        sum2+=b%10;
        b/=10;
    }
    return(sum1>sum2);
}
int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    stack<ll> s;
    ll res[n] = {0};
    s.push(n - 1);
    res[n - 1] = -1;
    for (i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && (arr[i] > arr[s.top()]))
        {
            s.pop();
        }
       
        // if (!s.empty()&&good(arr[i], arr[s.top()]))
        // {
        //     res[i] = s.top()+1;
        // }
        // else
        // {
        //     res[i] = -1;
        // }
        if(s.empty())
        {
            res[i]=-1;
        }
        else
        {
            if(good(arr[i],arr[s.top()]))
            res[i]=s.top()+1;
            else
            res[i]=-1;
        }
        s.push(i);
    }
    while (q--)
    {
        ll x;
        cin >> x;
        x--;
        cout << (res[x]) << endl;
    }
}