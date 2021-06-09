const int M = 1e6 + 3;
int pr[M];
vector<int> primes;
//sieve of erathoses
void pre()
{
    int i;
    rep(i,M)
    pr[i]=1;
    pr[1] = 0, pr[0] = 0;
    for (i = 2; i * i < M; i++)
    {
        if (pr[i])
        {
            for (int j = i * i; j < M; j += i)
            {
                pr[j] = 0;
            }
        }
    }
    for (i = 2; i < M; i++)
    {
        if (pr[i])
            primes.pb(i);
    }
}