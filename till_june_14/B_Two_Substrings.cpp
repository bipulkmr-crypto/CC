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
// void still_single()
// {
//     string s;
//     cin >> s;
//     int n = s.length();
//     int i;
//     bool flag1 = false, flag2 = false;
//     rep(i, n - 1)
//     {
//         string temp = s.substr(i, 2);
//         if (temp == "AB")
//         {
//             s[i + 2] = ' ';
//             flag1=true;
//             break;
//         }
//     }
//     rep(i, n - 1)
//     {
//         string temp=s.substr(i,2);
//         if(temp=="BA")
//         {
//             flag2=true;
//             break;
//         }
//     }
//     if(flag1&&flag2)
//     {
//         cout<<"YES"<<endl;
//     }
//     else cout<<"NO\n";
// }
// int main()
// {
//     int t=1;
//     // cin >> t;
//     while (t--)
//     {
//         still_single();
//     }
//     return 0;
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
    string s;
    cin >> s;
    bool flag1 = false;
    bool flag2 = false;
    ll n=s.length();
    ll i;
    for (i = 0; i < n - 2; i++)
    {
        string temp = s.substr(i, 2);
        if (temp == "AB")
        {
            flag1 = true;
            break;
        }
    }
 
    for (ll j = i+2; j < n - 1; j++)
    {
        string temp = s.substr(j, 2);
        if (temp == "BA")
        {
            flag2 = true;
            break;
        }
    }
    if (flag1 && flag2)
    {
        cout << "YES\n";
        return 0;
    }
    flag1 = false;
    flag2 = false;
    for (i = 0; i < n - 2; i++)
    {
        string temp = s.substr(i, 2);
        if (temp == "BA")
        {
            flag1 = true;
            break;
        }
    }
 
    for (ll j = i+2; j < n - 1; j++)
    {
        string temp = s.substr(j, 2);
        if (temp == "AB")
        {
            flag2 = true;
            break;
        }
    }
    if (flag1 && flag2)
    {
        cout << "YES\n";
        return 0;
    }
    cout<<"NO\n";
}