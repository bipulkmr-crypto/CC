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
bool ispallindrome(string s)
{
    ll i;
    ll n=s.length();
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        return false;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll i, n = s.length();
        bool flag=true;
        rep(i, n)
        {
            if(s[i]!='a')
            {
                flag=false;
                 break;
            }
           
        }
        if(flag)
        {
            cout<<"NO\n";
            continue;
        }
        if (n == 1)
        {
            if (s == "a")
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                cout<<s<<"a"<<endl;
            }
                
                
        }
        else
        {
            // if (s[0] == 'a')
            // {
            //     s = 'a' + s;
            // }
            // else
            // {
            //     s = s + 'a';
            // }
            string ans;
            if(!ispallindrome(s+'a'))
            {
                ans=s+'a';
            }
            else 
            {
                ans='a'+s;
            }
            cout<<"YES\n";
            cout<<ans<<endl;
        }
    }
}