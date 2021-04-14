// // // // // // // // // // // // // #include <iostream>
// // // // // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // typedef long long int ll;
// // // // // // // // // // // // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // // // // // // // // // // // #define mod 1000000007
// // // // // // // // // // // // // #define pb push_back
// // // // // // // // // // // // // #define mp make_pair
// // // // // // // // // // // // // #define pii pair<int,int>
// // // // // // // // // // // // // #define tiii tuple<int, int, int>
// // // // // // // // // // // // // #define pll pair<long long,long long>
// // // // // // // // // // // // // #define sii set<int>
// // // // // // // // // // // // // #define sll set<long long>
// // // // // // // // // // // // // #define vii vector<int>
// // // // // // // // // // // // // #define vll vector<long long>
// // // // // // // // // // // // // #define vll vector<long long>
// // // // // // // // // // // // // #define mii map<int,int>
// // // // // // // // // // // // // #define mll map<long long, long long>
// // // // // // // // // // // // // #define lob lower_bound
// // // // // // // // // // // // // #define upb upper_bound
// // // // // // // // // // // // // #define ret return
// // // // // // // // // // // // // #define present(s,x) (s.find(x) != s.end())
// // // // // // // // // // // // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // // // // // // // // // // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // // // // // // // // // // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // // // // // // // // // // // #define ff first
// // // // // // // // // // // // // #define all(v) v.begin(),v.end()
// // // // // // // // // // // // // #define ss second
// // // // // // // // // // // // // #define rep(i,n) for(i=0;i<n;i++)
// // // // // // // // // // // // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // // // // // // // // // // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // // // // // // // // // // // #define gi(n) scanf(%d,&n)
// // // // // // // // // // // // // ll binpowmod(ll a,ll b)
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     a%=mod;
// // // // // // // // // // // // //     ll res=1;
// // // // // // // // // // // // //     while(b>0)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         if(b&1)
// // // // // // // // // // // // //         res=res*a%mod;
// // // // // // // // // // // // //         a=a*a%mod;
// // // // // // // // // // // // //         b>>=1;
// // // // // // // // // // // // //     }
// // // // // // // // // // // // //     return res;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     ll k,q;
// // // // // // // // // // // // //     cin>>k>>q;
// // // // // // // // // // // // //     // ll pre[100001]={0};
// // // // // // // // // // // // //     // ll i;
// // // // // // // // // // // // //     // rep(i,100001)
// // // // // // // // // // // // //     // {
// // // // // // // // // // // // //     //     if(i-n>=0)
// // // // // // // // // // // // //     //     pre[i]=binpowmod(2,i-n);
// // // // // // // // // // // // //     //     else
// // // // // // // // // // // // //     //     pre[i]=1;
// // // // // // // // // // // // //     // }
// // // // // // // // // // // // //     while(q--)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         ll n;
// // // // // // // // // // // // //         cin>>n;
// // // // // // // // // // // // //         ll x=n/k;
// // // // // // // // // // // // //         ll ans=n*x-(k*(x)*(x+1))/2+x+1;
// // // // // // // // // // // // //         cout<<ans<<endl;
// // // // // // // // // // // // //     }
// // // // // // // // // // // // // }
// // // // // // // // // // // // #include <iostream>
// // // // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // typedef long long int ll;
// // // // // // // // // // // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // // // // // // // // // // #define mod 1000000007
// // // // // // // // // // // // #define pb push_back
// // // // // // // // // // // // #define mp make_pair
// // // // // // // // // // // // #define pii pair<int,int>
// // // // // // // // // // // // #define tiii tuple<int, int, int>
// // // // // // // // // // // // #define pll pair<long long,long long>
// // // // // // // // // // // // #define sii set<int>
// // // // // // // // // // // // #define sll set<long long>
// // // // // // // // // // // // #define vii vector<int>
// // // // // // // // // // // // #define vll vector<long long>
// // // // // // // // // // // // #define vll vector<long long>
// // // // // // // // // // // // #define mii map<int,int>
// // // // // // // // // // // // #define mll map<long long, long long>
// // // // // // // // // // // // #define lob lower_bound
// // // // // // // // // // // // #define upb upper_bound
// // // // // // // // // // // // #define ret return
// // // // // // // // // // // // #define present(s,x) (s.find(x) != s.end())
// // // // // // // // // // // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // // // // // // // // // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // // // // // // // // // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // // // // // // // // // // #define ff first
// // // // // // // // // // // // #define all(v) v.begin(),v.end()
// // // // // // // // // // // // #define ss second
// // // // // // // // // // // // #define rep(i,n) for(i=0;i<n;i++)
// // // // // // // // // // // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // // // // // // // // // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // // // // // // // // // // #define gi(n) scanf(%d,&n)
// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     ll t;
// // // // // // // // // // // //     cin>>t;
// // // // // // // // // // // //     while(t--)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         string s1,s2;
// // // // // // // // // // // //         cin>>s1>>s2;
// // // // // // // // // // // //         vector<pair<char,ll> > arr1;
// // // // // // // // // // // //         vector<pair<char,ll> > arr2;
// // // // // // // // // // // //         ll count=0;
// // // // // // // // // // // //         ll len1=s1.length();
// // // // // // // // // // // //         ll len2=s2.length();
// // // // // // // // // // // //         ll i;
// // // // // // // // // // // //         rep(i,len1-1)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             if(s1[i]==s1[i+1])
// // // // // // // // // // // //             {
// // // // // // // // // // // //                 arr1.pb(make_pair(s1[i],i));
// // // // // // // // // // // //                 i++;
// // // // // // // // // // // //             }
// // // // // // // // // // // //         }
// // // // // // // // // // // //         rep(i,len2-1)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             if(s2[i]==s2[i+1])
// // // // // // // // // // // //             {
// // // // // // // // // // // //                 arr2.pb(make_pair(s2[i],i));
// // // // // // // // // // // //                 i++;
// // // // // // // // // // // //             }
// // // // // // // // // // // //         }
// // // // // // // // // // // //         bool flag=true;
// // // // // // // // // // // //         for(auto x:arr1)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             for(auto y:arr2)
// // // // // // // // // // // //             {
// // // // // // // // // // // //                 if((x).ff==(y).ff)
// // // // // // // // // // // //                 {
// // // // // // // // // // // //                     cout<<"NO\n";
// // // // // // // // // // // //                     flag=false;
// // // // // // // // // // // //                     break;
// // // // // // // // // // // //                 }
// // // // // // // // // // // //             }
// // // // // // // // // // // //         }
// // // // // // // // // // // //         if(flag)
// // // // // // // // // // // //         cout<<"YES\n";
// // // // // // // // // // // //     }
// // // // // // // // // // // // }
// // // // // // // // // // // #include <iostream>
// // // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // // using namespace std;
// // // // // // // // // // // typedef long long int ll;
// // // // // // // // // // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // // // // // // // // // #define mod 1000000007
// // // // // // // // // // // #define pb push_back
// // // // // // // // // // // #define mp make_pair
// // // // // // // // // // // #define pii pair<int,int>
// // // // // // // // // // // #define tiii tuple<int, int, int>
// // // // // // // // // // // #define pll pair<long long,long long>
// // // // // // // // // // // #define sii set<int>
// // // // // // // // // // // #define sll set<long long>
// // // // // // // // // // // #define vii vector<int>
// // // // // // // // // // // #define vll vector<long long>
// // // // // // // // // // // #define vll vector<long long>
// // // // // // // // // // // #define mii map<int,int>
// // // // // // // // // // // #define mll map<long long, long long>
// // // // // // // // // // // #define lob lower_bound
// // // // // // // // // // // #define upb upper_bound
// // // // // // // // // // // #define ret return
// // // // // // // // // // // #define present(s,x) (s.find(x) != s.end())
// // // // // // // // // // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // // // // // // // // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // // // // // // // // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // // // // // // // // // #define ff first
// // // // // // // // // // // #define all(v) v.begin(),v.end()
// // // // // // // // // // // #define ss second
// // // // // // // // // // // #define rep(i,n) for(i=0;i<n;i++)
// // // // // // // // // // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // // // // // // // // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // // // // // // // // // #define gi(n) scanf(%d,&n)
// // // // // // // // // // // bool isVowel(char ch)
// // // // // // // // // // // {
// // // // // // // // // // //     ch = toupper(ch);
// // // // // // // // // // //     return (ch=='A' || ch=='E' || ch=='I' ||
// // // // // // // // // // //                        ch=='O' || ch=='U');
// // // // // // // // // // // }

// // // // // // // // // // // ll countVowels(string str)
// // // // // // // // // // // {
// // // // // // // // // // //     int count = 0;
// // // // // // // // // // //     for (int i=0; i<str.length(); i++)
// // // // // // // // // // //         if (isVowel(str[i]))
// // // // // // // // // // //             ++count;
// // // // // // // // // // //     return count;
// // // // // // // // // // // }
// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     ll t;
// // // // // // // // // // //     cin>>t;
// // // // // // // // // // //     while(t--)
// // // // // // // // // // //     {
// // // // // // // // // // //         string s;
// // // // // // // // // // //         cin>>s;
// // // // // // // // // // //         ll v,con,num=0;
// // // // // // // // // // //         ll i;
// // // // // // // // // // //         ll n=s.length();
// // // // // // // // // // //         string temp="";
// // // // // // // // // // //         string s1="",s2="";
// // // // // // // // // // //         for(i=0;i<n/2;i++)
// // // // // // // // // // //         {
// // // // // // // // // // //             s1=s[i]+s1;
// // // // // // // // // // //             s2=s2+s[n-i-1];
// // // // // // // // // // //         }
// // // // // // // // // // //         // cout<<s1<<endl;
// // // // // // // // // // //         // cout<<s2<<endl;
// // // // // // // // // // //         v=countVowels(s);
// // // // // // // // // // //         rep(i,n)
// // // // // // // // // // //         {
// // // // // // // // // // //             if(isdigit(s[i]))
// // // // // // // // // // //             num++;
// // // // // // // // // // //         }
// // // // // // // // // // //         con=n-num-v;
// // // // // // // // // // //         if(n%2)
// // // // // // // // // // //         {
// // // // // // // // // // //             temp=s2+s[n/2]+s1;
// // // // // // // // // // //         }
// // // // // // // // // // //         else
// // // // // // // // // // //         temp=s2+s1;

// // // // // // // // // // //         cout<<v<<" "<<con<<" "<<num<<endl;
// // // // // // // // // // //         cout<<temp<<endl;
// // // // // // // // // // //     }
// // // // // // // // // // // }
// // // // // // // // // // /*
// // // // // // // // // // // Sample code to perform I/O:

// // // // // // // // // // #include <iostream>

// // // // // // // // // // int main() {
// // // // // // // // // // 	int num;
// // // // // // // // // // 	cin >> num;										// Reading input from STDIN
// // // // // // // // // // 	cout << "Input number is " << num << endl;		// Writing output to STDOUT
// // // // // // // // // // }

// // // // // // // // // // // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// // // // // // // // // // */

// // // // // // // // // // // Write your code here
// // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // using namespace std;
// // // // // // // // // // typedef long long int ll;
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // // 	ll t;
// // // // // // // // // // 	cin>>t;
// // // // // // // // // // 	while(t--)
// // // // // // // // // // 	{
// // // // // // // // // // 		string s;
// // // // // // // // // // 		cin>>s;
// // // // // // // // // // 		ll i,j;
// // // // // // // // // // 		string s1="",s2="",temp="";
// // // // // // // // // // 		ll n=s.length();
// // // // // // // // // // 		for(i=0;i<n/2;i++)
// // // // // // // // // // 		{
// // // // // // // // // // 			char ch1=s[i];
// // // // // // // // // // 			char ch2=s[n-i-1];
// // // // // // // // // // 			ch2=toupper(ch2);
// // // // // // // // // // 			ch1=toupper(ch1);
// // // // // // // // // // 			if(ch1!=ch2)
// // // // // // // // // // 			{
// // // // // // // // // // 				s1=s[i]+s1;
// // // // // // // // // // 				s2=s2+s[n-i-1];
// // // // // // // // // // 			}
// // // // // // // // // // 		}
// // // // // // // // // // 		if(n%2)
// // // // // // // // // // 		{
// // // // // // // // // // 			temp=s2+s[n/2]+s1;
// // // // // // // // // // 		}
// // // // // // // // // // 		else
// // // // // // // // // // 		temp=s2+s1;
// // // // // // // // // // 		cout<<(n-temp.length())<<endl;
// // // // // // // // // // 		cout<<temp<<endl;
// // // // // // // // // // 	}
// // // // // // // // // // }
// // // // // // // // // /*
// // // // // // // // // // Sample code to perform I/O:

// // // // // // // // // #include <iostream>

// // // // // // // // // using namespace std;

// // // // // // // // // int main() {
// // // // // // // // // 	int num;
// // // // // // // // // 	cin >> num;										// Reading input from STDIN
// // // // // // // // // 	cout << "Input number is " << num << endl;		// Writing output to STDOUT
// // // // // // // // // }

// // // // // // // // // // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// // // // // // // // // */

// // // // // // // // // // Write your code here
// // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // using namespace std;
// // // // // // // // // typedef long long int ll;
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // // 	int t;
// // // // // // // // // 	cin>>t;
// // // // // // // // // 	while(t--)
// // // // // // // // // 	{
// // // // // // // // // 		ll n;
// // // // // // // // // 		cin>>n;
// // // // // // // // // 		ll p=1;
// // // // // // // // // 		while(n>0)
// // // // // // // // // 		{
// // // // // // // // // 			p=p*(n%10);
// // // // // // // // // 			n/=10;
// // // // // // // // // 		}
// // // // // // // // // 		cout<<p<<endl;
// // // // // // // // // 	}
// // // // // // // // // }
// // // // // // // // /*
// // // // // // // // // Sample code to perform I/O:

// // // // // // // // #include <iostream>

// // // // // // // // using namespace std;

// // // // // // // // int main() {
// // // // // // // // 	int num;
// // // // // // // // 	cin >> num;										// Reading input from STDIN
// // // // // // // // 	cout << "Input number is " << num << endl;		// Writing output to STDOUT
// // // // // // // // }

// // // // // // // // // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// // // // // // // // */

// // // // // // // // // Write your code here
// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // typedef long long int ll;
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // // 	ll t;
// // // // // // // // 	cin>>t;
// // // // // // // // 	while(t--)
// // // // // // // // 	{
// // // // // // // // 		ll n;
// // // // // // // // 		cin>>n;
// // // // // // // // 		ll i=1;
// // // // // // // // 		while((i*i)<n)
// // // // // // // // 		{
// // // // // // // // 			i++;
// // // // // // // // 		}
// // // // // // // // 		cout<<(i*i)<<endl;
// // // // // // // // 	}
// // // // // // // // }
// // // // // // // /*
// // // // // // // // Sample code to perform I/O:

// // // // // // // #include <iostream>

// // // // // // // int main() {
// // // // // // // 	int num;
// // // // // // // 	cin >> num;										// Reading input from STDIN
// // // // // // // 	cout << "Input number is " << num << endl;		// Writing output to STDOUT
// // // // // // // }

// // // // // // // // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// // // // // // // */

// // // // // // // // Write your code here
// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // typedef long long int ll;
// // // // // // // int main()
// // // // // // // {
// // // // // // // 	ll t;
// // // // // // // 	cin>>t;
// // // // // // // 	while(t--)
// // // // // // // 	{
// // // // // // // 		ll n;
// // // // // // // 		cin>>n;
// // // // // // // 		ll p=1;
// // // // // // // 		while(n>0)
// // // // // // // 		{
// // // // // // // 			p=p*(n%10);
// // // // // // // 			n/=10;
// // // // // // // 		}

// // // // // // // 		ll x=p;
// // // // // // // 		while(x>9)
// // // // // // // 		{
// // // // // // // 			ll temp=1;
// // // // // // // 			while(p>0)
// // // // // // // 			{
// // // // // // // 				temp=temp*(p%10);
// // // // // // // 				p/=10;
// // // // // // // 			}
// // // // // // // 			x=temp;
// // // // // // // 			p=temp;
// // // // // // // 		}
// // // // // // // 		cout<<x<<endl;

// // // // // // // 	}
// // // // // // // }
// // // // // // /*
// // // // // // // Sample code to perform I/O:

// // // // // // #include <iostream>

// // // // // // int main() {
// // // // // // 	int num;
// // // // // // 	cin >> num;										// Reading input from STDIN
// // // // // // 	cout << "Input number is " << num << endl;		// Writing output to STDOUT
// // // // // // }

// // // // // // // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// // // // // // */

// // // // // // // Write your code here
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // typedef long long int ll;
// // // // // // int main()
// // // // // // {
// // // // // // 	ll t;
// // // // // // 	cin>>t;
// // // // // // 	while(t--)
// // // // // // 	{
// // // // // // 		ll n;
// // // // // // 		cin>>n;
// // // // // // 		ll sum=n*(n+1);
// // // // // // 		sum=sum/2;
// // // // // // 		if(sum%6==0||sum%10==0)
// // // // // // 		{
// // // // // // 			if(n%2)
// // // // // // 			cout<<0<<endl;
// // // // // // 			else
// // // // // // 			cout<<n<<endl;
// // // // // // 		}
// // // // // // 		else
// // // // // // 		{
// // // // // // 			ll i=2;
// // // // // // 			// for(i=2;i*i<=sum;)
// // // // // // 			// {
// // // // // // 			// 	if(sum%i==0)
// // // // // // 			// 	{

// // // // // // 			// 	}
// // // // // // 			// }
// // // // // //             if(i==1)
// // // // // //             {
// // // // // //                 cout<<i<<endl;
// // // // // //             }
// // // // // //             else if(i==2)
// // // // // //             cout<<3<<endl;
// // // // // //             else
// // // // // //             {
// // // // // //                 while(sum>0)
// // // // // // 			{
// // // // // // 				if(sum%i==0)
// // // // // // 				{
// // // // // // 					sum/=i;
// // // // // // 				}
// // // // // // 				else
// // // // // // 				i++;
// // // // // // 			}
// // // // // // 			cout<<i<<endl;
// // // // // //             }

// // // // // // 		}
// // // // // // 	}
// // // // // // }
// // // // // #include <iostream>
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // typedef long long int ll;
// // // // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // // // #define mod 1000000007
// // // // // #define pb push_back
// // // // // #define mp make_pair
// // // // // #define pii pair<int,int>
// // // // // #define tiii tuple<int, int, int>
// // // // // #define pll pair<long long,long long>
// // // // // #define sii set<int>
// // // // // #define sll set<long long>
// // // // // #define vii vector<int>
// // // // // #define vll vector<long long>
// // // // // // #define vll vector<long long>
// // // // // // #define mii map<int,int>
// // // // // // #define mll map<long long, long long>
// // // // // // #define lob lower_bound
// // // // // // #define upb upper_bound
// // // // // // #define ret return
// // // // // // #define present(s,x) (s.find(x) != s.end())
// // // // // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // // // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // // // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // // // // #define ff first
// // // // // // #define all(v) v.begin(),v.end()
// // // // // // #define ss second
// // // // // // #define rep(i,n) for(i=0;i<n;i++)
// // // // // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // // // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // // // // #define gi(n) scanf(%d,&n)
// // // // // // int main()
// // // // // // {

// // // // // // }
// // // // // #include <iostream>
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // typedef long long int ll;
// // // // // #define fast                          \
// // // // //     ios_base::sync_with_stdio(false); \
// // // // //     cin.tie(NULL);
// // // // // #define mod 1000000007
// // // // // #define pb push_back
// // // // // #define mp make_pair
// // // // // #define pii pair<int, int>
// // // // // #define tiii tuple<int, int, int>
// // // // // #define pll pair<long long, long long>
// // // // // #define sii set<int>
// // // // // #define sll set<long long>
// // // // // #define vii vector<int>
// // // // // #define vll vector<long long>
// // // // // #define vll vector<long long>
// // // // // #define mii map<int, int>
// // // // // #define mll map<long long, long long>
// // // // // #define lob lower_bound
// // // // // #define upb upper_bound
// // // // // #define ret return
// // // // // #define present(s, x) (s.find(x) != s.end())
// // // // // #define cpresent(s, x) (find(all(s), x) != s.end())
// // // // // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // // // // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // // // // #define ff first
// // // // // #define all(v) v.begin(), v.end()
// // // // // #define ss second
// // // // // #define rep(i, n) for (i = 0; i < n; i++)
// // // // // #define fu(i, a, n) for (i = a; i <= n; i++)
// // // // // #define fd(i, n, a) for (i = n; i >= a; i--)
// // // // // #define gi(n) scanf(% d, &n)
// // // // // int main()
// // // // // {
// // // // //     ll n, q;
// // // // //     cin >> n >> q;
// // // // //     ll arr[n];
// // // // //     ll i;
// // // // //     rep(i, n)
// // // // //     {
// // // // //         cin >> arr[i];
// // // // //     }

// // // // //     while (q--)
// // // // //     {
// // // // //         ll c;
// // // // //         cin >> c;
// // // // //         ll sum = 0;
// // // // //         rep(i, n)
// // // // //         {
// // // // //             ll val = min(arr[i], c);
// // // // //             arr[i] = arr[i] - val;
// // // // //             sum +=val;
// // // // //         }
// // // // //         cout<<sum<<endl;
// // // // //     }

// // // // // }
// // // // #include <iostream>
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // typedef long long int ll;
// // // // #define fast                          \
// // // //     ios_base::sync_with_stdio(false); \
// // // //     cin.tie(NULL);
// // // // #define mod 1000000007
// // // // #define pb push_back
// // // // #define mp make_pair
// // // // #define pii pair<int, int>
// // // // #define tiii tuple<int, int, int>
// // // // #define pll pair<long long, long long>
// // // // #define sii set<int>
// // // // #define sll set<long long>
// // // // #define vii vector<int>
// // // // #define vll vector<long long>
// // // // #define vll vector<long long>
// // // // #define mii map<int, int>
// // // // #define mll map<long long, long long>
// // // // #define lob lower_bound
// // // // #define upb upper_bound
// // // // #define ret return
// // // // #define present(s, x) (s.find(x) != s.end())
// // // // #define cpresent(s, x) (find(all(s), x) != s.end())
// // // // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // // // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // // // #define ff first
// // // // #define all(v) v.begin(), v.end()
// // // // #define ss second
// // // // #define rep(i, n) for (i = 0; i < n; i++)
// // // // #define fu(i, a, n) for (i = a; i <= n; i++)
// // // // #define fd(i, n, a) for (i = n; i >= a; i--)
// // // // #define gi(n) scanf(% d, &n)
// // // // int main()
// // // // {
// // // //     ll t;
// // // //     cin >> t;
// // // //     while (t--)
// // // //     {
// // // //         ll n, q;
// // // //         cin >> n >> q;
// // // //         ll arr[n];
// // // //         ll mini = 1e12;
// // // //         ll maxi = -1;
// // // //         ll i;
// // // //         ll pre[n] = {0};
// // // //         ll sum = 0;

// // // //         rep(i, n)
// // // //         {
// // // //             cin >> arr[i];
// // // //             sum += arr[i];
// // // //             mini = min(mini, arr[i]);
// // // //             maxi = max(maxi, arr[i]);
// // // //             if (i == 0)
// // // //             {
// // // //                 pre[i] = arr[i];
// // // //             }
// // // //             else
// // // //             {
// // // //                 pre[i] = arr[i] + pre[i - 1];
// // // //             }
// // // //         }
// // // //         double normalised[n] = {0};
// // // //         double dem = (maxi - mini + 1);
// // // //         rep(i, n)
// // // //         {
// // // //             double val = (1e6) *((double) (arr[i] - mini + 1));
// // // //             val = val / dem;
// // // //             if (i == 0)
// // // //                 normalised[i] = val;
// // // //             else
// // // //             {
// // // //                 normalised[i] = val + normalised[i - 1];
// // // //             }
// // // //         }

// // // //         while (q--)
// // // //         {
// // // //             ll l, r;
// // // //             cin >> l >> r;
// // // //             l--;
// // // //             r--;
// // // //             // ll ans=sum-(pre[r]-pre[l-1]);
// // // //             // ans=ans-((mini-1)*(r-l));
// // // //             // double normal=(ans*1000000.0)/dem;
// // // //             // ll val=normal;
// // // //             ll val = (normalised[r] - normalised[l - 1]);
// // // //             cout << val << endl;
// // // //         }
// // // //     }
// // // // }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
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
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll k, n;
//         cin >> k >> n;
//         if ((k * 26) < n)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             string s = "";
//             ll i;
//             ll val;
//             rep(i, k)
//             {
//                 val = min(25ll, n);
//                 if (val != 0)
//                     s += char('a' + val);
//                 else
//                 {
//                     s += 'a';
//                 }
//                 n -= (val + 1);
//                 // if(n==0)
//                 // {
//                 //     break;
//                 // }
//             }
//             reverse(all(s));
//             rep(i, k)
//             {
//                 if (s[i] == '`')
//                     s[i] = 'a';
//             }
//             cout << s << endl;
//         }
//     }
// }
// // // #include <iostream>
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define pii pair<int,int>
// // // #define tiii tuple<int, int, int>
// // // #define pll pair<long long,long long>
// // // #define sii set<int>
// // // #define sll set<long long>
// // // #define vii vector<int>
// // // #define vll vector<long long>
// // // #define vll vector<long long>
// // // #define mii map<int,int>
// // // #define mll map<long long, long long>
// // // #define lob lower_bound
// // // #define upb upper_bound
// // // #define ret return
// // // #define present(s,x) (s.find(x) != s.end())
// // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // #define ff first
// // // #define all(v) v.begin(),v.end()
// // // #define ss second
// // // #define rep(i,n) for(i=0;i<n;i++)
// // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // #define gi(n) scanf(%d,&n)
// // // int main()
// // // {

// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long
// // signed main(){
// //     ios::sync_with_stdio(0);
// //     cin.tie(0);

// //     int tt;
// //     cin >> tt;
// //     while(tt--){
// //         int a, b, c, d;
// //         cin >> a >> b >> c >>d;
// //         if(a*b >= c*d){
// //             cout << 1 << "\n";
// //         }else{
// //             cout << 2 << "\n";
// //         }
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
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
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         string a, b;
//         cin >> a >> b;
//         ll maxposa = -1, maxpos = -1;
//         ll n = a.length(), m = b.length();
//         // char ch = a[0];
//         ll i;
//         // rep(i, n)
//         // {
//         //     if (ch < a[i])
//         //     {
//         //         ch = a[i];
//         //         maxposa = i;
//         //     }
//         // }
//         // char ch2 = b[0];
//         // rep(i, m)
//         // {
//         //     if (ch2 < b[i])
//         //     {
//         //         ch2 = b[i];
//         //         maxposa = i;
//         //     }
//         // }
//         // ll pos=0;
//         // for(i=0;i<min(n,m);i++)
//         // {
//         //     if(b[i]<a[i])
//         //     {
//         //         pos=i;
//         //         break;
//         //     }
//         // }
//         // ll ans=0;
//         // for(i=pos+1;i<m;i++)
//         // {
//         //     if(a[pos]<b[i])
//         //     {
//         //         break;
//         //     }
//         //     ans++;
//         // }
//         // i
//         ll pos = i;
//         char ch;
//         bool flag = true;
//         for (i = 0; i < min(n, m); i++)
//         {
//             if (a[i] > b[i])
//             {
//                 flag = false;
//                 pos = i;
//                 ch = a[i];
//                 break;
//             }
//             else if (b[i] > a[i])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             bool check = false;
//             ll ans = 0;
//             for (i = pos + 1; i < m; i++)
//             {
//                 if (ch <= b[i])
//                 {
//                     check = true;
//                     ans = (i - pos + 2);
//                 }
//             }
//             if (check)
//             {
//                 cout << ans << endl;
//             }
//             else
//             {
//                 cout << -1 << endl;
//             }
//         }
//     }
// }
// Csk Vs MI CFresh
