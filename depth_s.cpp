#include <bits/stdc++.h>
#include <sstream>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
using namespace std;
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
node *make_tree(vector<int> v)
{
    if (v.empty())
    {
        return NULL;
    }
    queue<node *> q;
    int i = 0;
    node *root = new node(v[0]);
    q.push(root);
    i++;
    while (!q.empty() && i < v.size())
    {
        node *curr = q.front();
        q.pop();
        if (v[i] != -1)
        {
            curr->left = new node(v[i]);
            q.push(curr->left);
        }
        i++;
        if (i < v.size() && v[i] != -1)
        {
            curr->right = new node(v[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}
int depth(node *root)
{
    if (!root)
        return INT_MAX;
    if (!root->left && !root->right)
        return 1;
    return 1 + min(depth(root->left), depth(root->right));
}
int minDepth(node *root)
{
    if (!root)
        return 0;
    else if (!root->left && !root->right)
        return 1;
    return depth(root);
}
int main()
{
    string str;
    getline(cin, str);
    istringstream s(str);
    vector<string> v;
    for (string str; s >> str;)
    {
        v.push_back(str);
    }
    vector<int> a;
    for (auto x : v)
    {
        if (isdigit(x[0]))
        {
            a.push_back(stoi(x));
        }

        else
            a.push_back(-1);
    }
    node *root = make_tree(a);
    cout << minDepth(root);
}