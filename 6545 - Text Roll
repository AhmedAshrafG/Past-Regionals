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

vi line[N];
int n;

int solve(){
	int idx = line[0][0];
	RFOR(i,1,n){
		int x = lower_bound(line[i].begin(),line[i].end(),idx)-line[i].begin();
		if (x != line[i].size())
			idx = line[i][x];
	}
	return idx;
}

int main(){
	//read("in.txt");
	string s;
	while(cin >> n && n){
		cin.ignore();
		FOR(i,n){
			line[i].clear();
			getline(cin,s);
			FOR(j,s.length())
				if (s[j] == ' ')
					line[i].push_back(j+1);
			line[i].push_back(s.length()+1);
		}
		cout << solve() << "\n";
	}
}	
