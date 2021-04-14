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
//         ll k, n;
//         cin >> k >> n;
//         if ((k * 26) < n)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             string s = "";
//             ll i;
//             ll val;
//             rep(i, k)
//             {
//                 val = min(25ll, n);
//                 if(val!=0)
//                 s += char('a' + val);
//                 else
//                 {
//                     s+='a';
//                 }
//                 n -= (val+1);
//                 // if(n==0)
//                 // {
//                 //     break;
//                 // }
//             }
//             reverse(all(s));
//             rep(i,k)
//             {
//                 if(s[i]=='`')
//                 s[i]='a';
//             }
//             cout<<s<<endl;
//         }
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
ll binpow(ll a,ll b)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> k >> n;
        ll i;
        string s = "";
        ll val=pow(26ll,k);
        if (val < n)
        {
            cout << -1 << endl;
        }
        else
        {
            // for (i = 0; i < k; i++)
            // {
            //     if (n > 0)
            //     {
            //         ll val = min(25ll, n - 1);
            //         s += char('a' + val);
            //         n -= (val + 1);
            //     }
            //     else
            //     {
            //         s += 'a';
            //     }
            // }
            string s="";
            rep(i,k)
            s+="a";
            ll inc[k]={0};
            ll j=1;
            for(i=k-1;i>=1;i--)
            {
                ll val=binpow(26,j);
                ll quo=(n)/val;
                inc[i-1]+=quo;
                ll mud=n%val;
                // cout<<mud;
                // inc[i]=min((26-mud),mud);
                j++;
            }
            rep(i,k)
            {
                s[i]=char('a'+inc[i]);
            }
            // reverse(all(s));
            cout << s << endl;
        }
    }
}