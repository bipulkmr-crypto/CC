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
// #define siz 100000005
// vector<ll> isprime(siz, true);
// // vector<int> pi(siz, 1);
// void seive()
// {
//     ll i, j;
//     isprime[0] = isprime[1] = 0;
//     isprime[2]=1;
//     for (i = 3; i * i < siz; i+=2)
//     {
//         if (isprime[i])
//         {
//             for (j = i * i; j < siz; j += i)
//             {
//                 isprime[j] = 0;
//             }
//         }
//     }
//     ll x = 0;
//     for (i = 2; i < siz; i++)
//     {
//         if(isprime[i])
//         isprime[i]=isprime[i-1]+1;
//         else
//         {
//             isprime[i]=isprime[i-1];
//         }
//     }
// }
// int main()
// {
//     seive();
//     ll n;
//     while (cin >> n)
//     {
//         /* code */
//         // if (n >= 2 && n <= 10000001)
//         {
//             if (n == 0 || n == 1)
//                 return 0;
//             double error;
//             double val = (((double)n )/ (log(n)));
//            error = (100.0) * ((double)((double)isprime[n] - val) / ((double)(isprime[n])));
//             error = abs(error);
//             cout << fixed << setprecision(1) << error << endl;
//         }
//         // else
//         // {
//         //     cout<<" "<<endl;
//         // }
//     }
// }
// // #include<bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // bool prime[100000005];
// // // float solve(float a,float b){
// // //     return (abs((a-b)*1.0)/a)*100;
// // // }
// // // void seive(){
// // //     for(ll i=0;i<100000005;i++){
// // //         prime[i]=1;
// // //     }
// // //     prime[0]=prime[1]=0;
// // //     for(int i=2;i*i<100000005;i++){
// // //         if(prime[i]==1){
// // //             for(int j=i*i;j<100000005;j+=i){
// // //                 prime[j]=0;
// // //             }
// // //         }
// // //     }
// // //     for(int i=2;i<100000005;i++){
// // //         if(prime[i]==1){
// // //             prime[i]=prime[i-1]+1;
// // //         }else{
// // //             prime[i]=prime[i-1];
// // //         }
// // //     }
    
// // // }
// // // int main(){
// // //     seive();
// // //     while(true){
// // //         long long n;
// // //         cin>>n;
// // //         if(n==0){
// // //             break;
// // //         }else{
// // //             double a=prime[n];
// // //             double b=(n*1.0)/log(n);
// // //             cout<<fixed<<setprecision(1)<<solve(a,b)<<endl;
// // //         }
// // //     }
// // // }
// // using namespace std;
// // bool prime[100000005];
// // double solve(double a,double b){
// //     return (abs((a-b)*1.0)/a)*100;
// // }
// // void seive(){
// //     for(long long i=0;i<100000005;i++){
// //         prime[i]=1;
// //     }
// //     prime[0]=prime[1]=0;
// //     prime[2]=1;
// //     for(long long i=3;i*i<100000005;i+=2){
// //         if(prime[i]==1){
// //             for(long long j=i*i;j<100000005;j+=i){
// //                 prime[j]=0;
// //             }
// //         }
// //     }
// //     for(long long i=2;i<100000005;i++){
// //         if(prime[i]==1){
// //             prime[i]=prime[i-1]+1;
// //         }else{
// //             prime[i]=prime[i-1];
// //         }
// //     }
    
// // }
// // int main(){
// //     seive();
// //     ios_base::sync_with_stdio(NULL);
// //     std::cin.tie(0);
// //     std::cout.tie(0);
// //     while(true){
// //         long long n;
// //         cin>>n;
// //         if(n==0){
// //             break;
// //         }else{
// //             double a=prime[n];
// //             double b=(n*1.0)/log(n);
// //             cout<<fixed<<setprecision(1)<<solve(a,b)<<endl;
// //         }
// //     }
// // }
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&
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
#define siz 10000001ll
vector<ll> isprime(siz, 1);
void seive()
{
    ll i, j;
    isprime[0] = isprime[1] = 0;
    isprime[2]=1;
    for (i = 3; i * i < siz; i+=2)
    {
        if (isprime[i])
        {
            for (j = i * i; j < siz; j += i)
            {
                isprime[j] = 0;
            }
        }
    }
    ll x = 0;
    for (i = 2; i < siz; i++)
    {
        if (isprime[i])
        {
            x++;
            isprime[i]=x;
        }
        else
        {
            isprime[i] = x;
        }
    }
}
int main()
{
    seive();
    ll n;
    while (cin >> n)
    {
        /* code */
        if (n >= 2 && n <= 10000001)
        {
            if (n == 0 || n == 1)
                return 0;
            double error;
            double val = (double)n / (log(n));
            error = (100.0) * ((double)((double)isprime[n] - val) / ((double)(isprime[n])));
            error = abs(error);
            cout << fixed << setprecision(1) << error << endl;
        }
        else
        {
            cout<<" "<<endl;
        }
    }
}
