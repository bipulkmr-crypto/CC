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
//     int n, m;
//     cin >> n >> m;
//     int i;
//     int arr[m];
//     bool flag = true;
//     int p;
//     rep(i, m)
//     {
//         cin >> arr[i];
//         if (i == 0)
//         {
//             p = arr[0];
//         }
//         else
//         {
//             if (arr[i] != p)
//             {
//                 flag = false;
//             }
//         }
//     }
//     if(flag == true&&(m%4==0))
//     {
//         cout<<"NO";
//         return 0;
//     }
//     int sum = 0;
//     for (i = 0; i < m; i++)
//     {
//         if (arr[i] > (4 * n))
//         {
//             cout << "NO";
//             return 0;
//         }
//         sum += arr[i];
//     }
//     if (sum > (8 * n))
//     {
//         cout << "NO";
//         exit(0);
//     }
//     cout << "YES";
//     return 0;
// }
//wrong approach
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
    fast int n, m;
    cin >> n >> m;
    int seats[5] = {0}, cnt[5] = {0};
    int i;
    seats[4] = n;
    seats[2] = 2 * n;
    for (i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        while (x >= 3)
        {
            if (seats[4] > 0)
            {
                seats[4]--;
                x -= 4;
            }
            else if (seats[2] > 0)
            {
                seats[2]--;
                x -= 2;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        if (x > 0)
        {
            cnt[x]++;
        }
    }
    seats[1] = 0;
    while (cnt[2])
    {
        if (seats[2] > 0)
        {
            seats[2]--;
            cnt[2]--;
        }
        else if (seats[4] > 0)
        {
            cnt[2]--;
            seats[4]--;
            seats[1]++;
        }
        else
        {
            cnt[2]--;
            cnt[1] += 2;
        }
    }

    if (cnt[1] > seats[1] + seats[2] + seats[4] * 2)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
}
