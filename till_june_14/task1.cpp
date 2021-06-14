// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
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
// void still_single()
// {
//     int n,k;
//     cin>>n>>k;
//     ll arr[n];
//     ll i;
//     ll sum=0;
//     rep(i,n)cin>>arr[i];
//     mll m;
//     // k=0;
//     int p=0;
//     rep(i,n)
//     {
//         if(arr[i]>0)
//         {
//             p=1;
//         }
//         sum+=arr[i];
//         m[arr[i]]++;
//     }
//     if(p==0)
//     {
//         cout<<0<<endl;
//         return ;
//     }
//     if(k>=m.size())
//     {
//         ford(m,it)
//         {
//             if(it->first<0)
//             {
//                 sum+=(it->first*it->second);
//             }
//         }
//         cout<<sum<<endl;
//         return ;
//     }
//     ll cur=0,maxi=LLONG_MIN;
//     auto it=m.rbegin();
//     i=k;
//     while(i>0)
//     {
//         if(it->first>0)
//         cur+=(it->second*it->first);
//         else break;
//         it--;        
//         i--;
//     }
//     for(;it!=m.begin();it--)
//     {

//     }
//     cout<<cur<<endl;
// }
// /*Don't just sit and hope that God will solve this
//   fucking do some	thing, try to observe or solve it a different way.
//   Use that pen and paper.
//   If nothing works take a deep breath and start again*/
// int main()
// {
//     fast
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         still_single();
//     }
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
    ll n,k;
    cin>>n>>k;
    ll i;
    ll arr[n];
    rep(i,n)cin>>arr[i];
    sort(arr,arr+n);
    ll cur=0,maxi=0;
    ll pos=upper_bound(arr,arr+n,0)-arr;
    i=pos;
    mll m;
    if(k==0)
    {
        cout<<0<<endl;
        return ;
    }
    if(pos==n)
    {
        cout<<0<<endl;
        return ;
    }
    ll temp=k;
    while(k>0&&i<n)
    {
        if(m[arr[i]]==0)
        k--;
        cur+=arr[i];
        m[arr[i]]++;
        i++;
    }
    maxi=cur;
    for(;i<n;i++)
    {
        auto p=m.begin();
        cur-=(p->first*p->second);
        m.erase(p->first);
        int x=arr[i];
        while(i<n&&arr[i]==x)
        {
            cur+=arr[i];
            i++;
        }
        maxi=max(maxi,cur);
    }
    cout<<maxi<<endl;
}

/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    fast
    int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}