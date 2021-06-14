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
void still_single()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int cnt[n][2];
    int i;
    int cnt1 = 0, cnt2 = 0;
    map<pii,int>m1;
    rep(i, n)
    {
        if (s[i] == 'D')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (cnt1 == 0 || cnt2 == 0)
        {
            cout << max(cnt1, cnt2) << " ";
        }
        else
        {
            int x1=cnt1/__gcd(cnt1,cnt2);
            int y1=cnt2/__gcd(cnt2,cnt1);
            cout<<++m1[{x1,y1}]<<" ";
        }
        // else
        // {
        //     if (cnt2 != 1 && cnt1 % cnt2 == 0)
        //     {

        //         if (cnt1 != cnt2)
        //             cout
        //                 << min(cnt1, cnt2) << " ";
        //         else if (cnt2 == cnt1)
        //             cout
        //                 << cnt2 << " ";
        //         else if(s[i]==s[i])
        //         {
        //             cnt1=0;
        //             cnt2=0;
        //         }
        //         else if ((cnt1 / cnt2) % 2 == 1)
        //         {
                    
        //             cout<< 1 << " ";
        //         }
        //     }
        //     else if (cnt1 != 1 && cnt2 % cnt1 == 0)
        //     {
        //         if (cnt1 != cnt2)
        //             cout << min(cnt1, cnt2) << " ";
        //         else if (cnt1 == cnt2)
        //             cout << cnt1 << ' ';
        //         else if(s[i]==s[i-1])
        //         {
        //             cnt1=0;
        //             cnt2=0;
        //         }
        //         else if ((cnt2 / cnt1) % 2 == 1)
        //         {
        //             // cnt1 = 0;
        //             // cnt2 = 0;
        //             cout << 1 << endl;
        //         }
        //     }
        //     else
        //     {
        //         cout << 1 << " ";
        //     }
        // }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}