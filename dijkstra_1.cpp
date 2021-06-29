
vector<vector<pair<int,int>>>arr;
const int INF=1e9;
vector<int>d;
int n;
vector<int>p;
void dijkistra(int source)
{
    int i;
    d.assign(n,INF);
    p.assign(n,-1);
    vector<bool>u(n,false);
    rep(i,n)
    {
        int v=-1;
        for(int j=0;j<n;j++)
        {
            if(!u[j]&&(v==-1||d[j]<d[v]))
            {
                v=j;
            }
        }
        if(d[v]==INF)
        {
            break;
        }
        u[v]=true;
        for(auto edges:arr[v])
        {
            int to=edges.ff;
            int len=edges.ss;
            if(d[u]+len<d[to])
            {
                d[to]=d[v]+len;
                p[to]=v;
            }
        }
    }
}