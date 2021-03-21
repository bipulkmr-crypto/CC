// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// int main()
// {
//     ll n;
//     cin >> n;
//     ll arr[n];
//     ll i;
//     rep(i, n)
//             cin >>
//         arr[i];
//     if (n == 2)
//     {
//         if (arr[0] <= arr[1])
//             cout << (max({arr[0], (arr[0] ^ arr[1]), arr[1]}));
//         else
//             cout << arr[0] << endl;
//     }
//     else

//     {
//         stack<ll> s;
//         ll j = n - 1;
//         while (j > 0)
//         {
//             if (arr[j - 1] > arr[j])
//             {
//                 break;
//             }
//             j--;
//         }
//         s.push(arr[j-1]);
//         ll ans = s.top();
//         ll p = ans;
//         ll xo[n]={0};
//         for (i = j - 1; i >= 0; i--)
//         {
//             ll x = s.top();

//             if (arr[i] < x)
//             {
//                 p ^= arr[i];
//                 ans = max(p, ans);
//                 s.push(arr[i]);
//             }
//         }
//         cout << ans << endl;
//     }
// }
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
    ll next[n];
    stack<ll> s;
    s.push(0);
    for(i=1;i<n;i++)
    {
        while(!s.empty()&&arr[s.top()]<arr[i])
        {
            next[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        next[s.top()]=-1;
        s.pop();
    }
    vector<ll> sum(n,0);
    ll ans=0;
    for(i=n-1;i>=0;i--)
    {
        if(next[i]==-1)
        {
            sum[i]=arr[i];
            ans=max(ans,sum[i]);
            continue;
        }
        sum[i]=sum[next[i]]^arr[i];
        ans=max(ans,sum[i]);
    }
    cout<<ans<<endl;
}
