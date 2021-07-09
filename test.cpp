
// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left, *right;
// };

// int minDepth(Node *root)
// {

//     if (root == NULL)
//         return 0;
//     if (root->left == NULL && root->right == NULL)
//         return 1;

//     int l = INT_MAX, r = INT_MAX;

//     if (root->left)
//         l = minDepth(root->left);

//     if (root->right)
//         r = minDepth(root->right);

//     return min(l, r) + 1;
// }

// Node *newNode(int data)
// {
//     Node *temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return (temp);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     Node *root = newNode(n);
//     while (cin >> n)
//     {
//         if (n != -1)
//         {
//             root = newNode(n);
//         }
//     }
//     cout << minDepth(root);

//     return 0;
// }
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
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};
BstNode *GetNewNode(int data)
{
    BstNode *new_node = new BstNode();
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
BstNode *insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}
bool search(BstNode *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

int minDepth(BstNode *root)
{

    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = INT_MAX, r = INT_MAX;

    if (root->left)
        l = minDepth(root->left);

    if (root->right)
        r = minDepth(root->right);

    return min(l, r) + 1;
}
int main()
{
    BstNode *root=NULL;
    int n;
    while(cin>>n)
    {
        if(n!=-1)
        {
            root=insert(root,n);
        }
    }
    cout<<minDepth(root)<<endl;
}