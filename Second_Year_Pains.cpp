#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    // ios_base::sync_with_stdio(NULL);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m1;
        int n, m;
        scanf("%lld",&n );
        scanf("%d",&m);
        for (int i = 0; i < n; i++)
        {
            int c;
            scanf("%d",&c)
            m1[c]++;
        }

        for (int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            if (m1[y] > 0)
            {

                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
                m1[y]++;
            }
        }
    }
}