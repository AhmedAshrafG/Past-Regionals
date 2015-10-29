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
#define N 100010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int main(){
	//read("in.txt");
	int t,e;
	double Va,Vb,Vf,D,ans,l,r;
	takei(t);
	while(t--){
		takei(e);takef(D);takef(Va);takef(Vb);takef(Vf);
		printf("%d %.2f\n",e,(D/(Va+Vb))*Vf);
	}
}	
