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
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll pre[n];
    ll i;
    ll sum = 0;
    rep(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // if((sum/3)!=0)
    // {
    //     cout<<0<<endl;
    //     return 0;
    // }
    ll c1 = 0, c2 = 0;
    // ll s=0;
    // for(i=0;i<n-1;i++)
    // {
    //     s+=arr[i];
    //     if(s==((2*sum)/3))
    //     c2+=c1;
    //     else if(s==(sum/3))
    //     c1++;
    // }
    // cout<<c2<<endl;
    memset(pre, 0, sizeof(pre));
    pre[0] = arr[0];
    for (i = 1; i < n; i++)
        pre[i] = pre[i - 1] + arr[i];
    ll l = -1, r = -1;
    if (pre[n - 1] % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            if (pre[i] == (2 * sum / 3))
            {
                c2 += c1;
            }
            if (pre[i] == (sum / 3))
                c1++;
        }
    }
    cout << c2 << endl;
    // rep(i, -1)
    // {
    //     ll sum = pre[n - 1];
    //     if (sum / 3 == pre[i])
    //     {
    //         l = i;
    //     }
    //     else if ((2 * (sum / 3)) == pre[i])
    //         r = i;
    // }
    // ll count = 1;
    // if (l != 0)
    // {
    //     if (arr[l - 1] == 0)
    //         count += 1;
    // }
    // if (arr[l + 1] == 0)
    //     count += 1;
    // if (r != n - 1)
    // {
    //     if (arr[r + 1] == 0)
    //         count += 1;
    // }
    // if (arr[r - 1] == 0)
    //     count += 1;
    // mll m;
    // for(i=0;i<n;i++)
    // m[pre[i]]++;
    // if(pre[n-1]!=0)
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     if(it->second>1)
    //     count+=(it->second-1);
    // }
    // // cout << count << endl;
    // stack<string> mumdit;
    // mumdit.push("hello");
    // string temp=mumdit.top();
    // cout<<temp<<endl;
}