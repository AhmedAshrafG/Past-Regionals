#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); i++)
#define RFOR(i,x,n) for (int i = x; i < (int)(n); i++)
#define take(n) scanf("%d",&n)
#define take2(n,m) scanf("%d%d",&n,&m)
#define take3(n,m,k) scanf("%d%d%d",&n,&m,&k)
#define takell(n) scanf("%lld",&n)
#define takes(n) scanf("%s",n)
#define takef(n) scanf("%lf",&n)
#define ii pair <int,int>
#define is pair <int,string>
#define ll long long
#define N 30
#define vi vector <int>
#define iv pair <int,vi>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int n;
vi adj[N];
bool v[N];

void visit(int x){
	v[x] = true;
	FOR(i,adj[x].size())
		v[adj[x][i]] = true;
}

void print(){
	printf("begin\n");
	FOR(i,n)
		printf("%d ",v[i]);
		printf("\n");
		printf("end\n");
}

bool done(){
	FOR(i,n)
		if (!v[i])
			return false;

	return true;
}

int Try(int mask){
	memset(v,0,sizeof v);
	int c = 0;
	FOR(i,n){
		if (mask & (1 << i)){
			visit(i);
			c++;
		}
	}
	//printf("mask = %d, c = %d\n",mask,c);
	//print();
	if (done()) return c;
	else return 1e9;
}

int main(){
	//read("in.txt");
	int t,m,x,ans;
	take(t);
	while(t--){
		ans = 1e9;
		take(n);
		FOR(i,n){
			adj[i].clear();
			take(m);
			while(m--){
				take(x);
				adj[i].push_back(x-1);
				adj[x-1].push_back(i);
			}
		}
		FOR(i,(1 << n))
			ans = min(ans,Try(i));
		printf("%d\n",ans);
	}
}
