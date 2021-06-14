#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];

    int freq[n]={0};
      for(int i=0;i<n;i++)
       {
           if(a[i]<=n)
           {
               int k=i;
               if(a[i]-1>k)
               {
                   k=k+n;
               }
              // cout<<k-(b[i]-1)<<endl;
               freq[k-(a[i]-1)]++;

           }
       }




       ll minimum=100000000;
       for(ll i=0;i<n;i++)
       {
       //    cout<<freq[i]<<" ";
           if(i+n-(freq[i])<minimum)
           {
               minimum=i+n-freq[i];
           }
       }



    //   for(int i=0;i<n;i++)
      //  cout<<freq[i]<<" ";
       //cout<<endl;

   int q;
   cin>>q;
   while(q--)
   {
       ll x,y;
       cin>>x>>y;

       map<ll,ll> map;

         ll i=x-1;

               int k=i;
            if(a[i]<=n)
           {
               int k=i;
               if(a[i]-1>k)
               {
                   k=k+n;
               }
              // cout<<k-(b[i]-1)<<endl;
              if(minimum==k-(a[i]-1)+n-freq[k-(a[i]-1)])
                minimum++;

               freq[k-(a[i]-1)]--;

           }

         a[i]=y;
           if(a[i]<=n)
           {
               int k=i;
               if(a[i]-1>k)
               {
                   k=k+n;
               }
              // cout<<k-(b[i]-1)<<endl;
               freq[k-(a[i]-1)]++;

               if(k-(a[i]-1)+n-(freq[k-(a[i]-1)])<minimum)
           {
               minimum=k-(a[i]-1)+n-freq[k-(a[i]-1)];
           }



           }






   //   for(int i=0;i<n;i++)
     // cout<<freq[i]<<" ";
    //cout<<endl;



     //  cout<<endl;
       cout<<minimum<<endl;

   }

}