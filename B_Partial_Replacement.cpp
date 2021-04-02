// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast        ios_base::sync_with_stdio(false); cin.tie(NULL);
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
//         ll n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         ll freq = 0, count = 0;
//         ll i;
//         rep(i, n)
//         {
//             if (s[i] == '*')
//             {
//                 if (freq == 0)
//                 {
//                     count += 2;
//                     s[i] = 'x';
//                     s[i + k] = 'x';
//                     i += 2*(k-2);
//                     freq+=2;

//                 }

//                 else
//                 {
//                     i += 2*(k-2);
//                     s[i] = 'x';
//                     s[i + k] = 'x';
//                     count += 2;
//                     freq+=2;
//                 }

//             }
//         }
//         if(freq==1)
//         {
//             count-=1;
//         }
//         // else if(freq==2)
//         // count=2;
//         ll posx=-1,pussy=-1;
//         // ll freq=i;
//         for(i=n-1;i>=0;i--)
//         {
//             if(s[i]=='x')
//             {
//                 posx=i;
//                 break;
//             }
//         }
//           for(i=n-1;i>=0;i--)
//         {
//             if(s[i]=='*')
//             {
//                 pussy=i;
//                 break;
//             }
//         }
//         if(pussy>posx)
//         count++;
//         cout << count << endl;
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll i, j;
        ll count = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                // count++;
                for (j = k; j >= 0; j--)
                {
                    if (s[i + j] == '*')
                    {
                        count++;
                        i += (j);
                        break;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}