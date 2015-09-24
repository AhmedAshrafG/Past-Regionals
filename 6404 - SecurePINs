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

int v[10];
char s[10];

bool valid(){
	FOR(i,6){
		v[s[i]-'0']++;
		if (v[s[i]-'0'] >= 3)
			return false;
		if (i != 0 && i != 5 && s[i-1] - s[i] == s[i] - s[i+1] && abs(s[i-1]-s[i]) == 1)
			return false;
	}
	return true;
}

int main(){
	//read("in.txt");
	int t;
	takei(t);
	while(t--){
		memset(v,0,sizeof v);
		takes(s);
		if (valid())
			printf("ACCEPTABLE\n");
		else
			printf("WEAK\n");
	}
}	
