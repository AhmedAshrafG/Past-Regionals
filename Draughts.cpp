#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); i++)
#define RFOR(i,x,n) for (int i = x; i < (int)(n); i++)
#define takei(n) scanf("%d",&n);
#define takell(n) scanf("%lld",&n);
#define takes(n) scanf("%s",n);
#define ii pair <int,int>
#define is pair <int,string>
#define ll long long
#define N 100010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

const int n = 10;
char grid[n+1][n+1];
int dx[] = {1,-1,-1,1};
int dy[] = {1,1,-1,-1};

bool valid(int x,int y){
	return x < n && y < n && x >= 0 && y >= 0;
}

int DFS(int x,int y){
	//printf("(%d,%d)\n",x,y);
	int ans = 0;
	FOR(i,4){
		int px1 = x+dx[i], py1 = y+dy[i] , px2 = x+dx[i]*2, py2 = y+dy[i]*2;
		if (valid(px2,py2) && grid[px1][py1] == 'B' && grid[px2][py2] == '#'){
			grid[x][y] = '#';
			grid[px1][py1] = '#';
			grid[px2][py2] = 'W';
			ans = max(ans,1+DFS(px2,py2));
			grid[x][y] = 'W';
			grid[px1][py1] = 'B';
			grid[px2][py2] = '#';

		}
	}
	return ans;
}

int main(){
	//read("in.txt");
	int t,ans;
	takei(t);
	while(t--){
		ans = 0;
		FOR(i,n)
			takes(grid[i]);
		FOR(i,n)
			FOR(j,n)
				if (grid[i][j] == 'W')
					ans = max(ans,DFS(i,j));
		printf("%d\n",ans);
	}
}