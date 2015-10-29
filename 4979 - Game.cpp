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
#define N 5
#define vi vector <int>
#define iv pair <int,vi>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)
#define left(x) (2*x)
#define right(x) (2*x+1)

bool valid(int x,int y){
	return x < N && y < N && x >= 0 && y >= 0;
}

char G[N][N];
int dx[] = {0,0,1,-1,1,-1,1,-1};
int dy[] = {1,-1,0,0,-1,1,1,-1};

bool bound(int x,int y){
	return x == 0 || y == 0 || x == N-1 || y == N-1;
}

int main(){
	//read("in.txt");
	int t;
	bool A,B;
	take(t);
	while(t--){
		A = B = false;
		FOR(i,N)
			takes(G[i]);
		FOR(i,N)
			FOR(j,N){
				if (i != 0 && i != N-1 && G[i][j] == G[i-1][j] && G[i][j] == G[i+1][j])
					if (G[i][j] == 'A')
						A = true;
					else
						B = true;
				if (j != 0 && j != N-1 && G[i][j] == G[i][j-1] && G[i][j] == G[i][j+1])
					if (G[i][j] == 'A')
						A = true;
					else
						B = true;
				if (!bound(i,j) && G[i][j] == G[i+1][j+1] && G[i][j] == G[i-1][j-1])
					if (G[i][j] == 'A')
						A = true;
					else
						B = true;
				if (!bound(i,j) && G[i][j] == G[i-1][j+1] && G[i][j] == G[i+1][j-1])
					if (G[i][j] == 'A')
						A = true;
					else
						B = true;
				
			}
		if (A)
			if (B)
				printf("draw\n");
			else
				printf("A wins\n");
		else
			printf("B wins\n");
	}
}
