#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        set<string> s;
        ll i;
        rep(i, n)
        {
            string temp;
            cin >> temp;
            s.insert(temp);
        }
        set<string>::iterator it;
        set<string>::iterator it2;
        for (it = s.begin(); it != s.end(); it++)
        {
            string temp1 = *it;
            it++;
            for (it2 = it; it2 != s.end(); it2++)
            {
                string temp2 = *it2;
                char ch1 = temp1[0], ch2 = temp2[0];
                temp1[0] = ch2;
                temp2[0] = ch1;
                s.insert(temp1);
                s.insert(temp2);
            }

            it--;
        }
        cout << (s.size() - n) << endl;
    }
    return 0;
}