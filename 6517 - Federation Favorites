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
#define N 1010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int ping[N],n;

int main(){
	//read("in.txt");
	int n,sum;
	while(takei(n) && n != -1){
		sum = 0;
		vi v;
		RFOR(i,1,n/2+1){
			if (n % i == 0)
				sum += i, v.push_back(i);
		}
		if (sum == n){
			printf("%d = ",n);
			FOR(i,v.size()){
				if (i == v.size()-1)
					printf("%d\n",v[i]);
				else
					printf("%d + ",v[i]);
			}
		}
		else
			printf("%d is NOT perfect.\n",n);
	}
}	
