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
        ll n, m;
        cin >> n >> m;
        ll arr[n];
        ll i;
        ll cnt1 = 0, cnt2 = 0;
        bool flag = true;
        string s;
        cin>>s;
        rep(i, n)
        {
            arr[i] = s[i] - '0';
        }
        // rep(i, n)
        // {
        //     if (arr[i] == 0)
        //     {
        //         if (i == 0)
        //         {
        //             arr[i] = arr[i + 1];
        //         }
        //         else
        //         {
        //             int j = i;
        //             if (i < n - 1 && !arr[i])
        //             {
        //                 for (j = i; j < min(m, n); j++)
        //                 {
        //                     if (arr[j] != 1)
        //                     {
        //                         arr[j] = 1;
        //                     }
        //                     else
        //                     {
        //                         break;
        //                     }
        //                 }
        //             }
        //             j = i;
        //         }
        //     }
        // }
        int ans[n]={0};
        for(i=0;i<n-2;i++)    
        {
            if(arr[i]==0)
            {
                while(arr[i])
            }
        rep(i, n) cout << arr[i];
        cout << endl;
    }
}