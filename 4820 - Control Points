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
#define left(x) (2*x)
#define right(x) (2*x+1)

int main(){
	//read("in.txt");
	int n,c;
	double prev,x;
	while(take(n) == 1){
		c = 0;
		prev = 0;
		FOR(i,n){
			takef(x);
			if (i){
				if (x > prev){
					c++;
					prev = x+1-1e-9;
				}
			}
			else{
				prev = x+1-1e-9;
				c = 1;
			}
			//printf("prev %lf c %d\n",prev,c);
		}
		printf("%d\n",c);
	}
}
