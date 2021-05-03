// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// /*
//  * Complete the 'crosswordPuzzle' function below.
//  *
//  * The function is expected to return a STRING_ARRAY.
//  * The function accepts following parameters:
//  *  1. STRING_ARRAY crossword
//  *  2. STRING words
//  */

// int pos = 0;
// n = words.length();
// void solve(int i, int j, int pos)
// {
//     if (crossword[i][j] == '+' || pos == n - 1)
//         return;
//     // else if(pos==n-1)
//     else
//     {
//         if (words[i] != ';')
//         {
//             crossword[i][j] = words[pos];
//             if (isvalid(i + 1, j))
//                 solve(i + 1, j, pos + 1);
//             if (isvalid(i, j + 1))
//                 solve(i, j + 1, pos + 1);
//         }
//         else
//         {
//             crossword[i][j] = words[pos+1];
//             if (isvalid(i + 1, j))
//                 solve(i + 1, j, pos + 2);
//             if (isvalid(i, j + 1))
//                 solve(i, j + 1, pos + 2);
//         }
//     }
// }
// vector<string> crosswordPuzzle(vector<string> crossword, string words)
// {
//     vector<string> s;
//     int i, j;
//     string temp = "";
//     words += ';';
//     // for(i=0;i<words.length();i++)
//     // {
//     //     temp+=words[i];
//     //     if(words[i]==';')
//     //     {
//     //         s.pb(temp);
//     //         temp="";
//     //     }
//     // }
//     void solve(0, 0)
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     vector<string> crossword(10);

//     for (int i = 0; i < 10; i++)
//     {
//         string crossword_item;
//         getline(cin, crossword_item);

//         crossword[i] = crossword_item;
//     }

//     string words;
//     getline(cin, words);

//     vector<string> result = crosswordPuzzle(crossword, words);

//     for (size_t i = 0; i < result.size(); i++)
//     {
//         fout << result[i];

//         if (i != result.size() - 1)
//         {
//             fout << "\n";
//         }
//     }

//     fout << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str)
// {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

//     return s;
// }

// string rtrim(const string &str)
// {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end());

//     return s;
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
// int pos = 0;
string words;
int n = words.length();
char crossword[10][10];
bool isvalid(int i, int j)
{
    return (i >= 0 && i < 10 && j >= 0 && j < 10);
}
int pos = 0;
void solve(int i, int j)
{
    if (i == 10 || j == 10 || pos == n - 1)
        return;
    // else if(pos==n-1)
    else if (crossword[i][j] == '+')
    {
        if (isvalid(i, j + 1))
            solve(i, j + 1);
        if (isvalid(i + 1, j))
            solve(i + 1, j);
    }
    else
    {
        if (words[i] != ';')
        {
            crossword[i][j] = words[pos];
            pos += 1;
            if (isvalid(i, j + 1))
                solve(i, j + 1);
            if (isvalid(i + 1, j))
                solve(i + 1, j);
        }
        else
        {
            crossword[i][j] = words[pos + 1];
            pos += 2;
            if (isvalid(i, j + 1))
                solve(i, j + 1);
            if (isvalid(i + 1, j))
                solve(i + 1, j);
        }
    }
}
int main()
{
    int i, j;
    rep(i, 10)
    {
        string temp;
        cin >> temp;
        for (j = 0; j < 10; j++)
            crossword[i][j] = temp[j];
    }
    cin >> words;
    solve(0, 0);

    rep(i, 10)
    {
        rep(j, 10)
        {
            cout << crossword[i][j];
        }
        cout << endl;
    }
}
