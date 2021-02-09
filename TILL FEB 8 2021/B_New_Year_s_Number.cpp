#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll c2021 = n % 2020;
        ll c2020 = (n - c2021) / 2020 - c2021;
        if (c2020 >= 0 && 2020 * c2020 + 2021 * c2021 == n)

        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
    /* while(temp>0)
        {
            c++;
            temp/=10;
        }
        last=(n)/(ll)(pow(10,c-1));
        if(n%2020==0)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2021==0)
        {
            cout<<"YES"<<endl;
        }
        else if(((n%10)*2)<=(last))
            {
                cout<<"YES"<<endl;
            }
        else
        cout<<"NO"<<endl;
        */