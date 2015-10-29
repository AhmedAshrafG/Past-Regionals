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
#define N 40
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int n,m,value[N],stickers[N];
vi v[N];

int main(){
	//read("in.txt");
	int t,k,x,ans,MIN;
	take(t);
	while(t--){
		ans = 0;
		take2(n,m);
		FOR(i,n){
			v[i].clear();
			take(k);
			while(k--){
				take(x);
				x--;
				v[i].push_back(x);
			}
			take(x);
			value[i] = x;
		}
		FOR(i,m)
			take(stickers[i]);
		FOR(i,n){
			MIN = 1e9;
			FOR(j,v[i].size())
				MIN = min(MIN,stickers[v[i][j]]);
			ans += value[i]*MIN;
		}
		printf("%d\n",ans);
	}
}
