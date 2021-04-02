using namespace std;
#include <bits/stdc++.h>
long long int k, n, a, b;
bool good(long long int x)
{
    // return ((x + (k - a * x) / b) >= n);
    return(((k-n*b)+(b-a)*x)>=0);
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {

        cin >> k >> n >> a >> b;
        int ans = -1;
        long long int l = 0;
        long long int r, mid;
        long long int u = k / a;
        if (k % a == 0)
        {
            r = u -1;
        }
        else
            r = u;
        // r = u;
        // while (l <= r)
        // {
        //     mid = (l + r) / 2;
        //     if (good(mid))
        //     {
        //         ans = mid;
        //         l = mid + 1;
        //     }
        //     else
        //         r = mid - 1;
        // }
        // if(ans>n)
        // ans=-1;
        while(r-l>1)
        {
            mid=l+(r-l)/2;
            if(good(mid))
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        if(good(r))
        {
            ans=r;
        }
        else 
        ans=l;
        ans=min(ans,n);
        if(ans==0)
        {
            long long int test=k/b;
            if(k%b==0)
            test=test-1;
            if(test<n)
            ans=-1;
        }
        cout << ans << endl;
    }

    return 0;
}