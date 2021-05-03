// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main(){
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int tt;
// 	cin >> tt;
// 	while(tt--){
// 		int k;
// 		cin >> k;
// 		int f = sqrt(k);
// 		if(f*f == k){
// 			cout << f << " " << f << "\n";
// 		}
// 		else{
// 			vector<pair<int, int> > ans;
// 			for(int i = 1;i<=f;i++){
// 				if(k%i == 0){
// 					ans.push_back({i, k/i});
// 				}
// 			}
// 			int l, r;
// 			int check = 0;
// 			for(auto &i: ans){
// 				int temp = __gcd(i.first, i.second);
// 				if(temp > check){
// 					check = temp;
// 					l = i.first;
// 					r= i.second;
// 				}
// 			}
// 			cout << max(l,r) << " " << min(l, r) << "\n";
// 		}
// 	}
// 	return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef  int ll;
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
    fast
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll i = 1;
        ll maxg = 0;
        bool flag = true;
        for (i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ll g = __gcd(i, n / i);
                // if(maxg<g&&((n/i)>=(sqrt(n))))
                // {
                //     maxg=g;
                //     break;
                // }
                // else if(maxg<g)
                // {
                //     maxg=g;
                // }

                // if (maxg < g)
                // {
                //     ll x = sqrt(n);
                //     if ((n / i) > x)
                //     {
                //         cout << (n / i) << " " << i << endl;
                //         flag = false;
                //         break;
                //     }
                //     maxg = g;
                // }
                maxg = max(maxg, g);
            }
        }
        // if (flag == false)
        {
            ll ans1 = maxg;
            ll ans2 = n / maxg;

            cout << (max(maxg, ans2)) << " " << min(ans1, ans2) << endl;
        }
    }
}