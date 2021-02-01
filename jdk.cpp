#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int first,i;
        int total_x=0;
        vector<int> decoded;
        first=encoded[0];
        
        for(i=1;i<(encoded.size()+1);i++)
            total_x^=i;
        for(i=1;i<encoded.size();i+=2)
        {
            first^=encoded[i];
        }
        decoded.push_back((first^total_x));
        for(i=1;i<encoded.size();i++)
        {
            decoded[i]=decoded[i-1]^encoded[i-1];
        }
        return decoded;
    }
};