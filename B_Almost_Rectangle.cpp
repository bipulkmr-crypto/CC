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
        int n;
        cin >> n;
        char arr[n][n];
        int i, j;
        rep(i, n)
            rep(j, n)
        {
            cin >> arr[i][j];
        }
        int x1, x2, y1, y2, c = 0;
        rep(i, n)
            rep(j, n)
        {
            if (arr[i][j] == '*')
            {
                if (c == 0)
                {
                    c++;
                    x1 = i;
                    y1 = j;
                }
                else
                {
                    x2 = i;
                    y2 = i;
                }
            }
        }
        int z;
        if (x1 == x2)
        {
            z = abs(y2 - y1);
            if ((x1 - z) >= 0)
            {
                arr[x1][y1 - z] = arr[x1][y2 - z] = '*';
            }
            else
            {
                arr[x1][y1 + z] = arr[x1][y2 + z] = '*';
            }
        }
        else if (y1 == y2)
        {
            z = abs(x1 - x2);
            if (y1 - z >= 0)
            {
                arr[x1 - z][y1] = arr[x2 - z][y2] = '*';
            }
            else
                arr[x1 + z][y1] = arr[x2 + z][y2] = '*';
        }
        else 
        {
            z=abs(x1-x2);
            if(x1-z>=0)
            {
                arr[
            }
        }
    }
}