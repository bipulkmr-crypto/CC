#include <iostream>
using namespace std;
#define ll long long
ll n, k;
ll stoi_my(string s)
{
    ll val = 0;
    reverse(s.begin(), s.end());
    int i=0;
    int len=s.size();
    rep(i,len)
    {
        val+=((s[i]-'0')*)
    }
}
int main()
{
    ll num;
    cin >> num;
    while (num--)
    {

        cin >> n >> k;
        string s;
        cin >> s;
        ll ans = (stoi(s)) % k, ct = 0;
        if (n != 1)
        {
            for (ll i = 0; i < n; i++)
            {
                string s2 = s;
                s2.erase(i, 1);
                ct = (stoi(s2)) % k;
                if (ct > ans)
                    ans = ct;
            }
        }
        cout << ans << endl;
    }
    return 0;
}