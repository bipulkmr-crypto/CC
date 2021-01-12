#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
        
        
		cin>>s1>>s2;
        ll n=s2.length();
        ll m=s1.length();
		ll j=0;
		ll i=0;
		for(i=0;(i<n&&j<m);i++)
		{
			if(s1[j]==s2[i])
			{
				j++;
			}
		}
		if(j==m)
		{
			cout<<"Love you too"<<endl;
		}
		else
		cout<<"We are only friends"<<endl;
	}
}