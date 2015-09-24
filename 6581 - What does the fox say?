#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); i++)
#define RFOR(i,x,n) for (int i = x; i < (int)(n); i++)
#define takei(n) scanf("%d",&n);
#define takell(n) scanf("%lld",&n);
#define takes(n) scanf("%s",n);
#define ii pair <int,int>
#define is pair <int,string>
#define ll long long
#define N 100010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

map <string,bool> m;

int main(){
	//read("in.txt");
	int t,len;
	cin >> t;
	string s,st,arr[110];
	while(t--){
		vector <string> v;
		len = 0;
		m.clear();
		cin.ignore();
		getline(cin,s);
		stringstream ss(s);
		while(ss >> st){
			arr[len++] = st;
		}
		while(true){
			cin >> s >> st;
			if (st[0] == 'd'){
				cin >> s >> s >> s;
				break;
			}
			cin >> st;
			m[st] = 1;
		}
		FOR(i,len)
			if (m.count(arr[i]));
			else
				v.push_back(arr[i]);
		FOR(i,v.size())
			if (i == v.size()-1)
				cout << v[i];
			else
				cout << v[i] << " ";
		cout << "\n";
	}
}	
