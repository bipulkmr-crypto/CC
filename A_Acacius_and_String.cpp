#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
    cin >> n;
    string s;
    cin >> s;
    int i, j;
    int cnt = 0;
    string temp;
    string b = "abacaba";
    if (n < 7)
    {
        cout << "No" << endl;
        ret;
    }
    else if (n == 7)
    {
        string tem = s;
        rep(j, 7)
        {
            if (tem[j] == '?')
                tem[j] = b[j];
        }
        if (tem == b)
        {
            cout << "Yes" << endl;
            cout << tem << endl;
        }
        else
            cout << "No" << endl;
        return;
    }
    for (i = 0; i < n - 7; i++)
    {
        temp = "";
        rep(j, 7)
        {
            temp += s[i + j];
        }
        rep(j, 7)
        {
            if (temp[j] == '?')
                temp[j] = b[j];
        }
        if (temp == b)
        {
            cnt++;
        }
    }
    j = n - 1;
    int p = 6;
    bool flag = true;
    while (p >= 0 && j >= 0)
    {
        // if (s[j] == '?')
        //     s[j] = b[p];
        if (s[j] != b[p])
        {
            flag = false;
            break;
        }
        j--;
        p--;
    }
    if (flag == true)
        cnt++;
    if (cnt == 1)
    {
        rep(i, n)
        {
            if (s[i] == '?')
                s[i] = 'z';
        }
        cout << "Yes" << endl;
        cout << s << endl;
        ret;
    }
    for (i = 0; i < n - 7; i++)
    {
        temp = "";
        rep(j, 7)
        {
            temp += s[i + j];
        }
        rep(j, 7)
        {
            if (temp[j] == '?')
                temp[j] = b[j];
        }
        if (temp == b)
        {
            cnt++;
            int k = 0;
            j = i;
            while (j < n && k < 7)
            {
                if (s[j] == '?')
                    s[j] = b[k];
                k++;
                j++;
            }
        }
    }

    j = n - 1;
    p = 6;
    flag = true;
    while (p >= 0 && j >= 0)
    {
        // if (s[j] == '?')
        //     s[j] = b[p];
        if (s[j] != b[p])
        {
            flag = false;
            break;
        }
        j--;
        p--;
    }
    if (flag == true)
        cnt++;
    if (cnt == 1)
    {
        rep(i, n)
        {
            if (s[i] == '?')
                s[i] = 'z';
        }
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}