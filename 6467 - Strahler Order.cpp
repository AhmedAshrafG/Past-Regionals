#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); i++)
#define RFOR(i,x,n) for (int i = x; i < (int)(n); i++)
#define takei(n) scanf("%d",&n);
#define takell(n) scanf("%lld",&n);
#define takes(n) scanf("%s",n);
#define takef(n) scanf("%lf",&n);
#define ii pair <int,int>
#define is pair <int,string>
#define ll long long
#define N 1010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int degree[N];
vi adj[N];

void DFS(int x){
	bool notyet = 0;
	int order = 0, c = 0;
	for(auto child : adj[x]){
		if (degree[child] == 0)
			notyet = 1;
		if (degree[child] == order)
			c++;
		if (degree[child] > order){
			order = degree[child];
			c = 1;
		}
	}
	if(!notyet)
		degree[x] = order + (c >= 2);
}

int main(){
	//read("in.txt");
	int t,e,n,m,x,y;
	takei(t);
	while(t--){
		takei(e);takei(n);takei(m);
		FOR(i,n) adj[i].clear(), degree[i] = 0;
		
		while(m--){
			takei(x);takei(y);
			x--, y--;
			adj[y].push_back(x);
		}

		FOR(i,n) if (adj[i].size() == 0) degree[i] = 1;
		
		while(degree[n-1] == 0){
			FOR(i,n){
				if (degree[i] == 0)
					DFS(i);
			}
		}
		FOR(i,n) printf("%d %d\n",i+1,degree[i]);
		printf("%d %d\n",e,degree[n-1]);
	}
}	
