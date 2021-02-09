#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s, d, x, y;
    cin >> n >> s >> d;
    bool flag = false;
    while (n--)
    {
        cin >> x >> y;
        if (y > d && x < s)
        {
            flag = true;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}