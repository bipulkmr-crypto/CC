#include "bits/stdc++.h"
using namespace std;
#define ll long long
ll max_int = 1e18;
vector<ll> adjacency[100001];
vector<ll> visited(100001, 0);

void level_order(ll i, ll vary)
{
    visited[i] = 1;
    bool flag = false;
    for (ll j = 0; j < adjacency[i].size(); j++)
    {
        if (!visited[adjacency[i][j]])
        {
            level_order(adjacency[i][j], ++vary);
            flag = true;
        }
    }
    if (flag == false)
    {
        max_int = min(max_int, vary);
    }
}
int main()
{
    ll input;
    cin >> input;
    if (input == -1)
    {
        cout << 0;
        return 0;
    }
    queue<ll> q;
    q.push(input);
    
    while (!q.empty())
    {

        ll size_var = q.size();
        for (ll i = 0; i < size_var; i++)
        {

            ll top = q.front();
            q.pop();

            ll fir, sec;
            if (cin >> fir && cin >> sec)
            {
                if (fir != -1)
                {
                    adjacency[top].push_back(fir);
                    adjacency[fir].push_back(top);
                    q.push(fir);
                }

                if (sec != -1)
                {
                    adjacency[top].push_back(sec);
                    adjacency[sec].push_back(top);
                    q.push(sec);
                }
            }
        }
    }
    level_order(input, 1);
    cout << max_int;
}