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
//     int n, q;
//     cin >> n >> q;
//     vll arr(n);
//     int i;
//     rep(i, n) cin >> arr[i];
//     int ans[n + 1] = {0};
//     int d = 1;
//     // for (d = 1; d <= n; d++)
//     // // {
//     // set<pll> s, p;
//     // for (i = 0; i < d; i++)
//     // {
//     //     s.insert({arr[i], i});
//     // }
//     // p.insert(*s.rbegin());
//     // for (i = d; i < n; i++)
//     // {
//     //     s.erase({arr[i - d], i - d});
//     //     s.insert({arr[i], i});
//     //     p.insert(*s.rbegin());
//     // }
//     // ans[d] = (*(p.begin())).ff;
//     // cout << (*(p.begin())).ff << endl;
//     // }
//     while (q--)
//     {
//         // int x;
//         cin >> d;
//         set<pll> s, p;
//         for (i = 0; i < d; i++)
//         {
//             s.insert({arr[i], i});
//         }
//         p.insert(*s.rbegin());
//         for (i = d; i < n; i++)
//         {
//             s.erase({arr[i - d], i - d});
//             s.insert({arr[i], i});
//             p.insert(*s.rbegin());
//         }

//         // cin >> x;
//         cout << (*(p.begin())).ff << endl;
//     }
// }
//set gives a tle using minimum queue for this
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
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> arr(n);
//     int i;
//     rep(i, n) cin >> arr[i];
//     while (q--)
//     {
//         int k;
//         cin >> k;
//         deque<int> s(k);
//         int best = 1 << 29;
//         rep(i, k)
//         {

//             while (s.size() && arr[i] > arr[s.back()])
//             {
//                 s.pop_back();
//             }
//             s.push_back(i);
//             while (s.size() && s.front() <= i - k)
//                 s.pop_front();
//             if (i >= (k - 1))
//             {
//                 assert(s.size());
//                 if (best > arr[s.front()])
//                 {
//                     best = arr[s.front()];
//                 }
//             }
//         }
//         cout << best << endl;
//     }
// }
using namespace std;

const int N = 1e5 + 100;

int a[N];
deque<int> dq;

int main()
{
    int n, cq;
    scanf(" %d %d", &n, &cq);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", a + i);
    }
    for (int it = 0; it < cq; it++)
    {
        int d;
        scanf(" %d", &d);
        dq.clear();
        int best = 1 << 29;
        for (int i = 0; i < n; i++)
        {
            while (dq.size() && a[dq.back()] < a[i])
                dq.pop_back();
            dq.push_back(i);
            while (dq.size() && dq.front() <= i - d)
                dq.pop_front();
            if (i >= d - 1)
            {
                assert(dq.size());
                if (best > a[dq.front()])
                {
                    best = a[dq.front()];
                }
            }
        }
        printf("%d\n", best);
    }
    return 0;
}