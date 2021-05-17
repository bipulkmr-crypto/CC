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
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         string s;
//         cin >> s;
//         ll i;
//         ll count = 0;
//         ll step = 0;
//         ll mini = LLONG_MAX;
//         for (i = 0; i < n; i++)
//         {
//             if (s[i] == '*')
//             {
//                 count++;
//                 ll next;
//                 i++;
//                 ll pos = i - 1;
//                 // bool flag = false;
//                 while (s[i] != '*' && i < n)
//                 {
//                     i++;
//                 }
//                 if (i == n && count == 1)
//                 {
//                     step = 0;
//                     break;
//                 }
//                 step += (count) * (pos);
//             }
//         }
//         for (i = n - 1; i >= 0; i--)
//         {
//             if (s[i] == '*')
//             {
//                 count++;
//                 ll next;
//                 i;
//                 ll pos = i - 1;
//                 // bool flag = false;
//                 while (s[i] != '*' && i < n)
//                 {
//                     i++;
//                 }
//                 if (i == n && count == 1)
//                 {
//                     step = 0;
//                     break;
//                 }
//                 step += (count) * (pos);
//             }
//         }
//         cout<<step<<endl;
//     }
// }
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (auto x : s)
            cnt += (x == '*' ? 1 : 0);
        int pos = -1;
        int cur = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                cur++;
                if (cur == cnt / 2)
                    pos = i;
            }
        }
        long long ans = 0;
        cur = pos - cnt / 2;
        for (int i = 0; i < n; i++)
            if (s[i] == '*')
            {
                ans += abs(cur - i);
                cur++;
            }
        cout << ans << endl;
    }
    // int n;
    // cin >> n;
    // string s;
    // cin >> s;
    // int i, j;
    // // int pos = -1;
    // // int pre[n] = {0};
    // // if (s[0] == '*')
    // //     pre[0] = 1;
    // // for (i = 1; i < n; i++)
    // // {
    // //     pre[i] += pre[i - 1];
    // //     if (s[i] == '*')
    // //         pre[i] += 1;
    // // }
    // int cnt=0;
    // rep(i,n)if(s[i]=='*')cnt++;
    // int pos = (lower_bound(pre, pre + n, pre[n - 1]) - pre);
    // int ans = 0;
    // rep(i, pos)
    // {
    //     if (s[i] == '*')
    //         ans += (pos - i-(pre[pos-1]-pre[i]));
    // }
    // int suff[n] = {0};
    // if (s[n - 1] == '*')
    //     suff[n - 1] = 1;
    // for (i = n - 2; i >= 0; i--)
    // {
    //     suff[i] += suff[i + 1];
    //     if (s[i] == '*')
    //         suff[i] += 1;
    // }
    // pos = abs(lower_bound(suff + n, suff, suff[0]) - suff + n);
    // int temp = 0;
    // for (i = n - 1; i > pos; i--)
    // {
    //     if (s[i] == '*')
    //         temp += abs(i - pos-(suff[i]-suff[pos-1]));
    // // }
    // // ans = min(ans, temp);
    // int pos=-1,curr=-1;
    // for( i=0;i<n;i++)
    // {
    //     if(s[i]=='*')
    //     {
    //         curr++;
    //         if(curr==cnt/2)
    //         pos=i;
    //     }
    // }
    // ll ans=0;
    //  curr=pos-cnt/2;
    // for(i=0;i<n;i++)
    // {
    //     if(s[i]=='*')
    //     ans+=abs(curr-i);
    //     curr++;
    // }
    // cout << ans << endl;
}