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

int main(){
	//read("in.txt");
	int t,n,c;
	double D,v,f,r;
	takei(t);
	while(t--){
		c = 0;
		takei(n); takef(D);
		while(n--){
			takef(v); takef(f); takef(r);
			if (D/v <= f/r)
				c++;
		}
		printf("%d\n",c);
	}	
}	
