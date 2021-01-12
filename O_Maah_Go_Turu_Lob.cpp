#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		bool  f1=true,f2=true;
		string s;
		cin>>s;
		char uv[]={'A','E','I','O','U'};
		ll uvc[5]={0};
		char lv[]={'a','e','i','o','u'};
		ll lvc[5]={0};
		ll i,j;
		for(i=0;i<s.length();i++)
		{
			for(j=0;j<5;j++)
			{
				if(s[i]==uv[j])
				{
					uvc[j]++;
				}

			}
			for(j=0;j<5;j++)
			{
				if(s[i]==lv[j])
				{
					lvc[j]++;
				}

			}

		}
		for(i=0;i<5;i++)
		{
			if(uvc[i]==0)
			{
				f1=false;
				break;
			}
		}
		for(i=0;i<5;i++)
		{
			if(lvc[i]==0)
			{
				f2=false;
				break;
			}
		}
		if(f1)
        cout<<"lovely string"<<endl;
        else if(f2)
        cout<<"lovely string"<<endl;
        else
        cout<<"ugly string"<<endl;
	}

}


		
