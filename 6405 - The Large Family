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
#define N 1000010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

double goat,p,k;

void solve(int n){
	int avg = n/7;
	double x,y,z;
	goat = 1e9;
	FOR(i,3){
		x = avg+(i*0.5);
		RFOR(j,-1,2){
			y = x+(j*0.5);
			z = n-2*x-5*y;
			if (z >= 0 && z < goat){
				goat = z;
				p = x;
				k = y;
			}
		}
	}
}

int main(){
	//read("in.txt");
	int n;
	while(takei(n) && n){
		solve(n);
		printf("%.1lf %.1lf %.1lf %.1lf\n",goat,p,p,k);
	}
}	
