#include <bits/stdc++.h> //想法 : 找循環節，保存下來
using namespace std;
typedef long long ll;
ll pow2[21];
ll circle[21];
ll solve(ll n, ll m) {
	n = n % circle[m];
	if(m == 0 || n == 0) return 0;
	if(n == 1) return 1;
	ll f1 = 0, f2 = 1, f3;
	for(int i=2; i<=n; i++) {
		f3 = (f1 + f2) % pow2[m];
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main() {
	pow2[0] = 1;
	circle[0] = 1;
	for(int i=1; i<20; i++) pow2[i] = pow2[i-1]*2; //	1 2 4 8 16 32 64 128
	for(int i=1; i<20; i++) {
		ll f1=0, f2=1, f3;
		int j;
		for(j=1;;j++) {
			f3 = (f1 % pow2[i] + f2 % pow2[i]) % pow2[i];
			if(f3 == 1 && f2 == 0) break;
			f1 = f2;
			f2 = f3;
		}
		circle[i] = j;
	}
	int n, m;
	while(cin >> n >> m) {
		cout << solve(n, m) << endl;
	}
	return 0;
}
