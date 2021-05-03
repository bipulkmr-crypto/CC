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
        ll n;
        cin >> n;
        char arr[n][n];
        ll i, j;
        rep(i, n)
        {
            rep(j, n)
            {
                cin >> arr[i][j];
            }
        }
        auto isvalid = [&](ll i, ll j) {
            if ((0 <= i&& i< n) && (0 <= j &&j< n))
                return true;
            else
                return false;
        };
        pll p1, p2;
        ll freq = 0;
        rep(i, n)
        {
            rep(j, n)
            {
                if (arr[i][j] == '*')
                {
                    if (freq == 0)
                    {
                        p1.ff = i;
                        p1.ss = j;
                        freq++;
                    }
                    else if(freq==1)
                    {
                        p2.ff = i;
                        p2.ss = j;
                        freq++;
                    }
                    // for (ll k = 1; k < n; k++)
                    // {
                    //     ll count = 0;
                    //     if (isvalid(i + 1, j) && isvalid(i, j + 1))
                    //     {
                    //         count += (arr[i+k][j]=='*');
                    //         count+=(arr[i][j+1]=='*');

                    //     }
                    // }
                }
                else if(freq==2)
                {
                    break;
                }
            }
        }
        if (p1.ff == p2.ff)
        {
            // ll wid = abs(p1.ss - p2.ss);
            // if (isvalid(p1.ff + wid, p1.ss))
            // {
            //     arr[p1.ff + wid][p1.ss] = '*';
            //     arr[p1.ff + wid][p2.ss] = '*';
            // }
            // else
            // {
            //     arr[p1.ff - wid][p1.ss] = '*';
            //     arr[p1.ff - wid][p2.ss] = '*';
            // }
            arr[(p1.ff+1)%n][(p1.ss+1)%n]=
        }
        else if (p1.ss == p2.ss)
        {
            // ll wid = abs(p1.ff - p2.ff);
            // if (isvalid(p1.ff, p1.ss + wid))
            // {
            //     arr[p1.ff][p1.ss + wid] = '*';
            //     arr[p2.ff][p2.ss + wid] = '*';
            // }
            // else 
            // {
            //     arr[p1.ff][p1.ss - wid] = '*';
            //     arr[p2.ff][p2.ss - wid] = '*';
            // }
            if()
        }
        // else if (abs((p1.ss - p2.ss) / (p1.ff - p2.ff)) == 1)
        else
        {
            arr[p1.ff][p2.ss] = '*';
            arr[p2.ff][p1.ss] = '*';
        }
        rep(i, n)
        {
            rep(j, n)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}