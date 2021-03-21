#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
bool can(ll m, ll s)
{
    return (s >= 0 && s <= 9 * m);
}
int main()
{
    ll m, s;
    cin >> m >> s;
    string mini = "";
    string maxi = "";
    ll i;
    ll sum = s;
    if (m==1&&s==0)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    else if(!can(m,s))
    cout<<-1<<" "<<-1<<endl;
    else
    {
        for (i = 0; i < m; i++)
        {
            for (ll d = 0; d < 10; d++)
            {
                if (((i > 0 || d >= 0) || (m == 1 && d == 0)) && (can(m - 1 - i, sum - d)))
                {
                    if(i==0&&d==0)
                    d++;
                    mini += char('0' + d);
                    sum -= d;
                    break;
                }
            }
        }
        sum = s;
        for (i = 0; i < m; i++)
        {
            for (ll d = 9; d >= 0; d--)
            {
                if ((((i > 0 || d >= 0)) || (m == 1 && d == 9)) && (can(m - i - 1, sum - d)))
                {
                    maxi += char(d + '0');
                    sum -= d;
                    break;
                }
            }
        }
        if(maxi<mini)
        cout<<-1<<" "<<-1<<endl;
        else
        cout << mini << " " << maxi << endl;
    }
}