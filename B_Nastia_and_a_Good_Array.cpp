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
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         ll arr[n + 1];
//         int i, j;
//         int temp[n];
//         rep(i, n)
//         {
//             cin >> arr[i + 1];
//         }
//         // temp[i] = arr[i];
//         // }
//         // int count = 0;
//         // for (i = 1; i < n; i++)
//         // {
//         //     if (__gcd(temp[i], temp[i - 1]) != 1)
//         //     {
//         //         count++;
//         //         if (temp[i] > temp[i - 1])
//         //         {
//         //             temp[i] = mod;
//         //             // cout << (i + 1) << " " << mod << i << arr[i - 1] << endl;
//         //         }
//         //         else
//         //         {
//         //             if (i > 1 && temp[i - 2] != mod)
//         //             {
//         //                 temp[i] = mod;
//         //             }
//         //             else
//         //             {
//         //                 temp[i] = mod +86;
//         //             }
//         //             temp[i - 1] = mod;
//         //             // cout << (i) << " " << mod << (i + 1) << arr[i] << endl;
//         //         }
//         //     }
//         // }
//         // cout << count << endl;
//         // for (i = 1; i < n; i++)
//         // {
//         //     if (__gcd(arr[i], arr[i - 1]) != 1)
//         //     {
//         //         if (arr[i] > arr[i - 1])
//         //         {
//         //             arr[i] = mod;
//         //             cout << (i + 1) << " " << i << " " << mod << " " << arr[i - 1] << endl;
//         //         }
//         //         else
//         //         {
//         //             if (i > 1 && arr[i - 2] != mod)
//         //                 arr[i - 1] = mod;
//         //             else
//         //                 arr[i - 1] = (mod+86);
//         //             cout << (i) << " " << (i + 1) << " " << arr[i - 1] << " " << arr[i] << endl;
//         //         }
//         //         // cout << endl;
//         //     }
//         // }
//         int count = 0;
//         for (i = 2; i < n; i += 2)
//         {
//             count++;
//         }
//         cout << count << endl;
//         for (i = 2; i <= n; i += 2)
//         {
//             cout << i << " " << i + 1 << " " << min(arr[i], arr[i + 1]) << " " << mod << endl;
//             arr[i] = mod;
//         }
//     }
// }


#include <bits/stdc++.h>

#define ll long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

const int M = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    rep(i, 1, n + 1) cin >> a[i];
    int cnt = 0;
    for(int i = 2; i <= n; i+=2) cnt++;
    cout << cnt << '\n';
    for(int i = 2; i <= n; i += 2) {
        cout << i - 1 << ' ' << i << ' ' << min(a[i - 1], a[i]) << ' ' << M << '\n';
        a[i] = M;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te;
    cin >> te;
    while(te--) solve();
}