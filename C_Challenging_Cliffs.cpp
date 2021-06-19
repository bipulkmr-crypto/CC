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
// void still_single()
// {
//     int n;
//     cin >> n;
//     vll arr(n);
//     int i;
//     vll temp(n);
//     rep(i, n)
//     {
//         cin >> arr[i];
//         temp[i] = arr[i];
//     }
//     sort(all(temp));
//     mll m;
//     rep(i, n)
//     {
//         m[arr[i]]++;
//     }
//     int val = -1;
//     ford(m, it)
//     {
//         if (it->second % 2 == 0)
//         {
//             it->second -= 2;
//             val = it->first;
//             break;
//         }
//     }

//     if (val != -1)
//     {
//         // int cnt = 0;
//         // int p1,p2;
//         // rep(i, n)
//         // {
//         //     if (arr[i] == val)
//         //     {
//         //         if(cnt==0)
//         //         {
//         //             p1=i;
//         //             cnt++;
//         //         }
//         //         else if(cnt==1)
//         //         {
//         //             p2=i;
//         //             cnt++;
//         //         }
//         //     }
//         // }
//         // arr.erase(find(all(arr), val));
//         // arr.erase(find(all(arr), val));
//         vector<int> ans;
//         // // cout << val << ' ';
//         ans.pb(val);
//         // vector<int>g,l;
//         // for(auto x:arr)
//         // {
//         //     g.pb(x);
//         //     l.pb(x);
//         // }
//         // sort(all(g));
//         // sort(all(l));
//         // reverse(all(l));
//         // i=(n-2)/2;
//         // int k=0;
//         // while(i--)
//         // {
//         //     an
//         // }
//         // cout << val << endl;
//         sort(all(arr));
//         arr.pb(*arr.rbegin());
//         auto p = upper_bound(all(arr), val);
//         auto h = p;
//         arr.erase(find(all(arr), val));
//         arr.erase(find(all(arr), val));
//         // reverse(all(arr));

//         for (auto z = arr.begin(); z != p - 1; z++)
//         {
//             ans.pb(*z);
//         }

//         p = h;
//         for (; p != arr.end() && p <= arr.end(); p++)
//         {
//             ans.pb(*p);
//         }
//         ans.pb(val);

//         for (auto x : ans)
//             cout << x << ' ';
//     }
//     else
//     {
//         sort(all(arr));
//         int val1, val2;
//         int diff = INT_MAX;
//         for (i = 0; i < n - 1; i++)
//         {
//             if ((arr[i + 1] - arr[i]) < diff)
//             {
//                 diff = arr[i + 1] - arr[i];
//                 val1 = arr[i];
//                 val2 = arr[i + 1];
//             }
//         }
//         vll ans;
//         ans.pb(val1);

//         arr.erase(find(all(arr), val1));
//         arr.erase(find(all(arr), val2));
//         for (auto x : arr)
//         {
//             ans.pb(x);
//         }
//         ans.pb(val2);
//         for (auto x : ans)
//             cout << x << ' ';
//     }
//     cout << endl;
// }
void still_single()
{
    int n;
    cin>>n;
    vll arr(n);
    int i;
    rep(i,n)cin>>arr[i];
    int pos1,pos2;
    sort(all(arr));
    int d=INT_MAX;
    rep(i,n-1)
    {
        if((arr[i+1]-arr[i])<d)
        {
            d=(arr[i+1]-arr[i]);
            pos1=i;
            pos2=i+1;
        }
    }
    cout<<min(arr[pos1],arr[pos2])<<' ';
    for(i=pos2+1;i<n;i++)
    cout<<arr[i]<<' ';
    rep(i,pos1)
    cout<<arr[i]<<' ';
    cout<<max(arr[pos1],arr[pos2])<<endl;

}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}