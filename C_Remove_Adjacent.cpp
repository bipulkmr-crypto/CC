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
    cin >> n >> s;
    int i, j;
    int cnt=0;
    multiset<char, greater<char>> ms;
    rep(i, n)
    {
        if(s[i]!='a')
        ms.insert(s[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > 0 && j < n - 1)
            {
                if (s[j] == *ms.begin())
                {
                    if (s[j] - s[j - 1] || s[j] - s[j + 1])
                    {
                        cnt++;
                        s[j] = '#';
                    }

                    break;
                }
            }
            else if(j==0&&s[j]==*ms.begin()&&(s[0]-s[1])==1)
            {
                cnt++;
                s[0]='#';
                break;
            
            }
            else if(j==n-1&&s[j]==*ms.begin()&&(s[n-1]-s[n-2])==1)
            {
                s[n-1]='#';
                cnt++;
                break;
            }
        }
        if(!ms.empty())
        ms.erase(ms.begin());
    }
    // rep(i, n)
    // {
    //     if (s[i] != ' ')
    //         cout << s[i];
    // }
    cout<<cnt<<endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}