#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for (int i = 0; i < (int)(n); i++)
#define RFOR(i,x,n) for (int i = x; i < (int)(n); i++)
#define take(n) scanf("%d",&n)
#define takell(n) scanf("%lld",&n)
#define takes(n) scanf("%s",n)
#define takef(n) scanf("%lf",&n)
#define ii pair <int,int>
#define is pair <int,string>
#define ll long long
#define N 4010
#define vi vector <int>
#define vll vector <ll>
#define MOD 1000000007
#define read(s) freopen(s,"r",stdin)

int main(){
	//read("in.txt");
	int t,n,arr[N],MIN,MAX,avg,l,r;
	take(t);
	while(t--){
		take(n);
		FOR(i,n)
			take(arr[i]);
		MIN = arr[min_element(arr,arr+n)-arr];
		MAX = arr[max_element(arr,arr+n)-arr];
		avg = (MAX+MIN)/2;
		l = MIN;
		r = MAX;
		FOR(i,n){
			if (arr[i] > avg && arr[i] < r)
				r = arr[i];
			if (arr[i] <= avg && arr[i] > l)
				l = arr[i];
		}
		printf("%d\n",max(l-MIN,MAX-r));
	}
}
