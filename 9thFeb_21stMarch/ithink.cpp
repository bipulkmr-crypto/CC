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
bool comp(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return false;
    }
    else
    {
        return (s1.length() < s2.length());
    }
}
int main()
{
    ll t;
    scanf("%lld", &t);
    t++;
    while (t--)
    {
        string temp;
        vector<string> s;
        getline(cin,temp);
        temp+=" ";
        ll i;
        string s1="";
        rep(i,temp.size())
        {
            if(temp[i]==' ')
            {
                s.pb(s1);
                s1="";
            }
            
            else
            {
                s1+=temp[i];
            }
        }
        sort(s.begin(), s.end(), comp);
        rep(i, s.size())
        {
            cout << s[i] << " ";
        }
        cout<<endl;
    }
}