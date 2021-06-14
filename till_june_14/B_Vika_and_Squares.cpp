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
// llmain()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int i;
//     rep(i, n) cin >> arr[i];
//     // sort(arr, arr + n);
//     // reverse(arr, arr + n);
//     auto pos=min_element(arr,arr+n);
//     int ans=(int)(pos-arr);
//     int ans = 0;
//     bool flag = tsrue;
//     while (true)
//     {
//         fu()
//         {
//             if (arr[i] > 0)
//             {

//                 arr[i]--;
//                 ans++;
//             }
//             else
//             {
//                 flag = false;
//                 goto ext;
//             }
//         }
//         if (!flag)
//         {
//         ext:
//             break;
//         }
//     }
//     cout << ans << endl;
// }
int main()
{
    fast
    ll n;
    cin >> n;
    ll arr[n + n + 1];
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    ll pos = 0, pos2 = 0;
    ll mini = arr[0];
    ll second_mini = arr[0];
    rep(i, n)
    {
        if (arr[i] <= mini)
        {
            pos = i;
            mini = arr[i];
        }
        if (arr[i] <= second_mini && arr[i] >= mini)
        {
            second_mini = arr[i];
            pos2 = i;
        }
    }
    ll ans = 0;
    bool flag = true;
    //     while (true)
    //     {
    //         for (i = pos + 1; i < n; i++)
    //         {
    //             if (arr[i] > 0)
    //             {

    //                 ans += 1;
    //                 arr[i]--;
    //             }

    //             else
    //             {
    //                 flag = false;
    //                 goto ext;
    //             }
    //         }
    //         for (i = 0; i <= pos; i++)
    //         {
    //             if (arr[i] > 0)
    //             {
    //                 ans += 1;
    //                 arr[i]--;
    //             }

    //             else
    //             {
    //                 flag = false;
    //                 goto ext;
    //             }
    //         }
    //         if (!flag)
    //         {
    // ext:
    //             cout << ans << endl;
    //             break;
    //         }
    ans = mini * n;
    ll mx = 0, rn = 0;
    rep(i, n)
    {
        arr[i] -= mini;
        arr[i + n] = arr[i];
    }
    rep(i, 2 * n)
    {
        if (arr[i] == 0)
        {
            rn = 0;
        }
        else
            rn++;
        mx = max(mx, rn);
    }
    ans += mx;
    cout << ans << endl;
}
