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
#define N 60
#define vi vector <int>
#define iv pair <int,vi>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)
#define write(s) freopen(s,"w",stdout)

int a[N][N],n,m;
int dx[] = {0,0,1,-1};
int dy[] = {-1,1,0,0};
int dp[N][N];

bool valid(int x,int y){
	return x < n && y < m && x >= 0 && y >= 0;
}

int DFS(int x,int y){
	int ans = 0,px,py;
	//if (dp[x][y] != -1) return dp[x][y];
	FOR(i,4){
		px = x+dx[i], py = y+dy[i];
		if (valid(px,py) && a[x][y] > a[px][py])
			ans += DFS(px,py);
	}
	return dp[x][y] = ans + (ans == 0);
}

bool big(int x,int y){
	FOR(i,4){
		int px = x+dx[i], py = y+dy[i];
		if (valid(px,py) && a[px][py] > a[x][y])
			return false;
	}
	return true;
}

int main(){
	//read("in.txt");
	int t,ans,e = 1;
	take(t);
	while(t--){
		take2(n,m);
		//memset(a,0,sizeof a);
		FOR(i,n)
			FOR(j,m)
				take(a[i][j]);
		ans = 0;
		memset(dp,-1,sizeof dp);
		FOR(i,n)
			FOR(j,m)
				if (big(i,j))
					ans += DFS(i,j);
		printf("Case #%d: %d\n",e++,ans);
	}
}
