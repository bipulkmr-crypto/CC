// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update
// #include <ext/pb_ds/detail/standard_policies.hpp>
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// using namespace __gnu_pbds;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)

// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
//     Ordered_set;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     int i;
//     rep(i, n) cin >> arr[i];
//     int j;
//     Ordered_set s;
//     rep(i, k)
//     {
//         s.insert(arr[i]);
//     }
//     if (k & 1)
//     {
//         int ans = *s.find_by_order(k / 2);
//         cout << ans << ' ';
//         for (i = 0; i < n - k; i++)
//         {
//             s.erase(s.find_by_order(s.order_of_key(arr[i])));
//             s.insert(arr[i + k]);
//             ans = *s.find_by_order(k / 2);
//             cout << ans << ' ';
//         }
//         cout << "\n";
//     }
//     else
//     {
//         int ans = (double)(*s.find_by_order((k + 1) / 2 - 1) + *s.find_by_order(k / 2)) / 2.0;
//         cout << ans << ' ';
//         for (i = 0; i < n - k; i++)
//         {
//             s.erase(s.find_by_order(s.order_of_key(arr[i])));
//             s.insert(arr[i + k]);
//             ans = (double)(*s.find_by_order((k + 1) / 2 - 1) + *s.find_by_order(k / 2)) / 2.0;
//             cout << ans << ' ';
//         }
//         cout << "\n";
//     }
// }
// C++ Program to implement the
// above approach
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

// Policy based data structure
typedef tree<int, null_type,
             less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    Ordered_set;

// Function to find and return the
// median of every window of size k
void findMedian(int arr[], int n,
                int k)
{

    Ordered_set s;

    for (int i = 0; i < k; i++)
        s.insert(arr[i]);

    if (k & 1)
    {

        // Value at index k/2
        // in sorted list.
        int ans = *s.find_by_order(k / 2);

        cout << ans << " ";

        for (int i = 0; i < n - k; i++)
        {

            // Erasing Element out of window.
            s.erase(s.find_by_order(
                s.order_of_key(
                    arr[i])));

            // Inserting newer element
            // to the window
            s.insert(arr[i + k]);

            // Value at index k/2 in
            // sorted list.
            ans = *s.find_by_order(k / 2);

            cout << ans << " ";
        }
        cout << endl;
    }
    else
    {

        // Getting the two middle
        // median of sorted list.
        int ans = ((float)*s.find_by_order(
                       (k + 1) / 2 - 1) +
                   (float)*s.find_by_order(k / 2)) /
                  2;
        cout << ans << " ";
        // printf("%.2f ", ans);

        for (int i = 0; i < n - k; i++)
        {
            s.erase(s.find_by_order(
                s.order_of_key(arr[i])));

            s.insert(arr[i + k]);

            ans = ((float)*s.find_by_order(
                       (k + 1) / 2 - 1) +
                   (float)*s.find_by_order(k / 2)) /
                  2;

            // printf("%.2f ", ans);
            cout << ans << " ";
        }
        cout << endl;
    }
}
#include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update
// #include <ext/pb_ds/detail/standard_policies.hpp>
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// using namespace __gnu_pbds;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)

// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
//     Ordered_set;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     int i;
//     rep(i, n) cin >> arr[i];
//     int j;
//     Ordered_set s;
//     rep(i, k)
//     {
//         s.insert(arr[i]);
//     }
//     if (k & 1)
//     {
//         int ans = *s.find_by_order(k / 2);
//         cout << ans << ' ';
//         for (i = 0; i < n - k; i++)
//         {
//             s.erase(s.find_by_order(s.order_of_key(arr[i])));
//             s.insert(arr[i + k]);
//             ans = *s.find_by_order(k / 2);
//             cout << ans << ' ';
//         }
//         cout << "\n";
//     }
//     else
//     {
//         int ans = (double)(*s.find_by_order((k + 1) / 2 - 1) + *s.find_by_order(k / 2)) / 2.0;
//         cout << ans << ' ';
//         for (i = 0; i < n - k; i++)
//         {
//             s.erase(s.find_by_order(s.order_of_key(arr[i])));
//             s.insert(arr[i + k]);
//             ans = (double)(*s.find_by_order((k + 1) / 2 - 1) + *s.find_by_order(k / 2)) / 2.0;
//             cout << ans << ' ';
//         }
//         cout << "\n";
//     }
// }
// Driver Code
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findMedian(arr, n, k);
}
