#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
const int mod = 1e9 + 7;
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      char a[n][27];
      for(int i=0;i<n;i++)
      cin>>a[i];
      ll dist=INT_MAX;
      for(int i=0;i<n-1;i++){
          for(int k=i+1;k<n;k++){
             string c=a[i];
             string d=a[k];
             if(c==d){
                ll temp=k-i;
                dist=min(dist,temp);
                break;
             }
          }
      }
      if(dist==INT_MAX)
        cout<<"-1";
      else
        cout<<dist;

    }

}

