#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <numeric>
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
ll acc(vector<ll>::iterator it1, vector<ll>::iterator it2, ll sum)
{

    for (; it1 < it2; it1++)
        sum += *(it1);

    return sum;
}
int main()
{
    ll t, i;
    cin >> t;
    /*
    while (t--)
    {
        ll input;
        ll m, n;
        cin >> n >> m;
        vector<ll> a;
        vector<ll> b;
        rep(i, n)
        {
            cin >> input;
            a.push_back(input);
        }
        rep(i, m)
        {
            cin >> input;
            b.push_back(input);
        }
        if ((acc(a.begin(), a.end(), 0) > acc(b.begin(), b.end(), 0)))
        {
            cout << 0 << endl;
        }
        else
        {
            bool flag = false;
            ll mi = min(m, n);
            ll k = 0;
            ll count = 0;
            rep(k, mi)
            {

                if ((acc(a.begin(), a.end(), 0) > acc(b.begin(), b.end(), 0)))
                {

                    cout << count << endl;
                    flag = true;
                    break;
                }
                else
                {
                    count++;
                    swap(a[k], b[k]);
                }
            }
            if (flag == false)
                cout << -1 << endl;
        }*/
    while (t--)
    {
        ll input;
        ll m, n;
        cin >> n >> m;
        vector<ll> a;
        vector<ll> b;
        rep(i, n)
        {
            cin >> input;
            a.push_back(input);
        }
        rep(i, m)
        {
            cin >> input;
            b.push_back(input);
        }
        ll sum1 = acc(a.begin(), a.end(), 0);
        ll sum2 = acc(b.begin(), b.end(), 0);
        if(sum1 > sum2)
        {
            cout << 0 << endl;
        }
        else
        {
            ll mi = min(m, n);
            sort(a.begin(), a.end());
            sort(b.begin(), b.end(), greater<int>());
            ll count = 0;
            ll k = 0;
            bool flag = false;
            for (k = 1; k <= mi; k++)
            {

                swap(a[k - 1], b[k - 1]);
                if ((acc(a.begin(), a.end(), 0) > acc(b.begin(), b.end(), 0)))
                {
                    flag = true;
                    break;
                }
            }

            if (flag == false)
                cout << -1 << endl;
            else
                cout << k << endl;
        }
    }
}
