#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int k=sqrt(2*n-1);
        cout<<(k-1)/2<<endl;
    }
}
