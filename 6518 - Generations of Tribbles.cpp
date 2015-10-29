#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); i++)
#define RFOR(i,x,n) for (int i = x; i < (int)(n); i++)
#define takei(n) scanf("%d",&n)
#define takell(n) scanf("%lld",&n)
#define takes(n) scanf("%s",n)
#define takef(n) scanf("%lf",&n)
#define ii pair <int,int>
#define is pair <int,string>
#define ll long long
#define N 4
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

struct Matrix{
	ll M[N][N];
	void init(){
		FOR(i,N)
			FOR(j,N)
				M[i][j] = (i == j);
	}
	void print(){
		FOR(i,N){
			FOR(j,N)
				printf("%lld ",M[i][j]);
			printf("\n");
		}
	}
};

Matrix mult(Matrix x,Matrix y){
	Matrix ans;
	memset(ans.M,0,sizeof ans.M);
	FOR(i,N)
		FOR(j,N)
			FOR(k,N)
				ans.M[i][k] = ans.M[i][k] + x.M[i][j] * y.M[j][k];
	return ans;
}

Matrix power(Matrix m,int p){
	Matrix tmp;
	tmp.init();

	if (p == 0)
		return tmp;
	if (p & 1)
		return mult(m,power(m,p-1));
	else
		return power(mult(m,m),p/2);
}
int main(){
	//read("in.txt");
	int t,n;
	takei(t);
	while(t--){
		takei(n);
		Matrix ans;
		memset(ans.M,0,sizeof ans.M);
		FOR(i,N){
			ans.M[0][i] = 1;
			if (i != N-1)
				ans.M[i+1][i] = 1;
		}
		ans = power(ans,n+1);
		printf("%lld\n",ans.M[1][0]);
		/*FOR(i,N)
			ll arr[4][1],res[4][1];
			memset(res,0,sizeof res);
			arr[0][0] = 0;
			arr[1][0] = 1;
			arr[2][0] = 1;
			arr[3][0] = 2;
			FOR(j,N)
				res[i][0] += ans.M[i][j] * arr[j][0];
		FOR(i,N)
			printf("%lld\n",res[i][0]);*/
	}
}	
