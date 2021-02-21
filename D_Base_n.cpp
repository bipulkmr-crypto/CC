// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef unsigned long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// int main()
// {
//     string s;
//     ll x = 0;
//     ll m;
//     ll c = 0;
//     cin >> s;
//     cin >> m;
//     ll i;
//     ll n = (ll)s.length();
//     rep(i, n)
//     {
//         if (x < (ll)(s[i] - 48))
//             x = (s[i] - 48);
//     }
//     bool flag = true;

//     rep(i, n)
//     {
//         if (s[i] == '0' || s[i] == '1')
//         {
//             continue;
//         }
//         else
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag == false)
//     {
//         ll temp = 0;

//         while (temp <= m)
//         {
//             x++;
//             temp = stoll(s, 0, x);
//             c++;
//         }
//         cout << (c - 1) << endl;
//     }
//     else
//         cout << 1 << endl;
// }

    #include <bits/stdc++.h>
    using namespace std;
     
    string x;
    int64_t m;
    int xn;
     
    bool f(int64_t n) {
    	int64_t sum = 0;
    	int64_t mul = 1;
    	for(int i = 0; i < xn; ++i) {
    		sum += (x[i] - '0') * mul;
    		if(sum > m) {
    			return false;
    		}
    		if(i + 1 < xn and (mul * n < mul or mul > (m - sum + n - 1) / n)) {
    			return false;
    		}
    		mul *= n;
    	}
    	return true;
    }
     
    int main() {
    	cin >> x;
    	cin >> m;
    	xn = x.size();
    	if(xn == 1) {
    		int _x = stoi(x);
    		cout << (_x <= m) << '\n';
    		return 0;
    	}
    	int maxi = 0;
    	for(char c : x) {
    		maxi = max(maxi, c - '0');
    	}
    	reverse(x.begin(), x.end());
    	int64_t ok = maxi, ng = m + 10;
    	while(abs(ok - ng) > 1) {
    		int64_t mid = (ok + ng) / 2;
    		if(f(mid)) {
    			ok = mid;
    		} else {
    			ng = mid;
    		}
    	}
    	cout << ok - maxi << '\n';
    	return 0;
    }