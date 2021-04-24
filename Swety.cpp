#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb(a) push_back(a);
using namespace std;

vector<int>v[100005];
int state[100004];
int bfs(int num);

int main(){
	int n, m, x, y, i;
	int t;
	cin >> t;
	while(t--){
	    
		cin >> n >> m;

		for(int i=0; i<m; i++){
			cin >> x >> y;
			v[x].pb(y);
			v[y].pb(x);
		}
		int count=0;
		for(int i=0; i<n; i++){
			if(state[i]==0){
				bfs(i);
		    	count++;
			    
			}
		}
		cout << count << endl;
	}
}
int bfs(int num){
	queue<int>q;
	q.push(num);
	state[num]=1;
	while(!q.empty()){
		int current= q.front();
		q.pop();
		for(int i=0; i<v[current].size(); i++){
			int tail= v[current][i];
			if(state[tail]==0){
				q.push(tail);
				state[tail]=1;
			}
		}
	}
}