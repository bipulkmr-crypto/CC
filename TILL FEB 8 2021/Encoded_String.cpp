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
char decode(string s)
{
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    ll n;
    ll i;
    ll dec = 0;
    n = stoi(s, nullptr, 2);
    return (ch[n]);
}

int main()
{
    ll i, t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s="";
        string decoded = "";
        cin>>s;
        string p = "";
        for (i = 0; i < n; i += 4)
        {
            p = "";
            for (ll j = i; j < i + 4; j++)

            {
                p += s[j];
            }
            decoded += decode(p);
        }
        /*for(i=0;i<n;)
        {
            p=s.substr(i,i+4);
            i=i+4;
            
           //decoded+= decode(s);
           cout<<p<<endl;
           p="";
        }*/
        cout << decoded << endl;
        /* code */
    }

    // cout<<"Hello World";
    return 0;
}