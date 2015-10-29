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
	string s;
	while(cin >> s && s.length() != 1){
		n = s.length();
		FOR(i,n)
			ping[i] = s[i]-'0';
		RFOR(i,1,n){
			if (ping[i])
				for (int j = 2*i; j < n; j+=i)
					ping[j] ^= 1;
		}
		vi v;
		RFOR(i,1,n)
			if (ping[i])
				v.push_back(i);
		FOR(i,v.size()){
			printf("%d",v[i]);
			if(i != v.size()-1)
				printf(" ");
		}
		puts("");
	}
}	
