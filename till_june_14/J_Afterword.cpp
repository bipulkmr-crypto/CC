#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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


// Structure to store information of a suffix
struct suffix
{
	int index; // To store original index
	int rank[2]; // To store ranks and next
				// rank pair
};

int cmp(struct suffix a, struct suffix b)
{
	return (a.rank[0] == b.rank[0])?
		(a.rank[1] < b.rank[1] ?1: 0):
		(a.rank[0] < b.rank[0] ?1: 0);
}

vector<int> buildSuffixArray(string txt, int n)
{

	struct suffix suffixes[n];
	// old indexes while sorting
	for (int i = 0; i < n; i++)
	{
		suffixes[i].index = i;
		suffixes[i].rank[0] = txt[i] - 'a';
		suffixes[i].rank[1] = ((i+1) < n)?
							(txt[i + 1] - 'a'): -1;
	}

	// Sort the suffixes using the comparison function
	// defined above.
	sort(suffixes, suffixes+n, cmp);

	int ind[n]; 
	for (int k = 4; k < 2*n; k = k*2)
	{
		// Assigning rank and index values to first suffix
		int rank = 0;
		int prev_rank = suffixes[0].rank[0];
		suffixes[0].rank[0] = rank;
		ind[suffixes[0].index] = 0;

		// Assigning rank to suffixes
		for (int i = 1; i < n; i++)
		{
			if (suffixes[i].rank[0] == prev_rank &&
			suffixes[i].rank[1] == suffixes[i-1].rank[1])
			{
				prev_rank = suffixes[i].rank[0];
				suffixes[i].rank[0] = rank;
			}

			else // Otherwise increment rank and assign
			{
				prev_rank = suffixes[i].rank[0];
				suffixes[i].rank[0] = ++rank;
			}
			ind[suffixes[i].index] = i;
		}

		// Assign next rank to every suffix
		for (int i = 0; i < n; i++)
		{
			int nextindex = suffixes[i].index + k/2;
			suffixes[i].rank[1] = (nextindex < n)?
					suffixes[ind[nextindex]].rank[0]: -1;
		}

		// Sort the suffixes according to first k characters
		sort(suffixes, suffixes+n, cmp);
	}

	// Store indexes of all sorted suffixes in the suffix
	// array
	vector<int>suffixArr;
	for (int i = 0; i < n; i++)
		suffixArr.push_back(suffixes[i].index);

	// Return the suffix array
	return suffixArr;
}

/* To construct and return LCP */
vector<int> kasai(string txt, vector<int> suffixArr)
{
	int n = suffixArr.size();


	vector<int> lcp(n, 0);

	vector<int> invSuff(n, 0);


	for (int i=0; i < n; i++)
		invSuff[suffixArr[i]] = i;


	int k = 0;

	
	for (int i=0; i<n; i++)
	{
		
		if (invSuff[i] == n-1)
		{
			k = 0;
			continue;
		}


		int j = suffixArr[invSuff[i]+1];

		while (i+k<n && j+k<n && txt[i+k]==txt[j+k])
			k++;

		lcp[invSuff[i]] = k;


		if (k>0)
			k--;
	}

	return lcp;
}

int countDistinctSubstring(string txt)
{
	int n = txt.length();
	// calculating suffix array and lcp array
	vector<int> suffixArr = buildSuffixArray(txt, n);
	vector<int> lcp = kasai(txt, suffixArr);
	int result = n - suffixArr[0];

	for (int i = 1; i < lcp.size(); i++)

		// subtract lcp from the length of suffix
		result += (n - suffixArr[i]) - lcp[i - 1];

	result++; // For empty string
	return result;
}
void still_single()
{
    string s;
    cin>>s;
    ll ans=countDistinctSubstring(s);
    cout<<ans-1<<endl;
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    fast
    int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}