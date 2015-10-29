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
#define N 1000010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int fibo[N];

int main(){
	//read("in.txt");
	int t,e,m,ans;
	takei(t);
	while(t--){
		takei(e); takei(m);
		fibo[0] = fibo[1] = 1;
		RFOR(i,2,N){
			fibo[i] = (fibo[i-1]+fibo[i-2]) % m;
			if (fibo[i-1] % m == 0 && fibo[i-2] % m == 1){
				ans = i; break;
			}
		}
		printf("%d %d\n",e,ans);
	}
}	
