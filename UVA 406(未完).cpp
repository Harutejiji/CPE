#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
bool isP[N+1];
vector <int> primes;
int main() {
	for(int i=1; i<=N; i++) isP[i] = true;
	for(int i=2; i<=N; i++) {
		if(isP[i]) primes.push_back(i);
		for(int j=0; j<primes.size(); j++) {
			if(primes[j] > N / i) break;
			isP[i * primes[j]] = false;
			if(i % primes[j] == 0) break;
		}
	}
	int n, c;
	while(cin >> n >> c) {
		printf("%d %d:", n, c);
		vector <int> ans;
		for(int i=1; i<=n; i++) {
			if(isP[i]) {
				ans.push_back(i);
			}
		}
		int start, end;
		if(ans.size() > 2*c) {
			if(ans.size() % 2) {
				start = ans.size() / 2 - c + 1;
				end = ans.size() / 2 + c - 1;
			}
			else {
				start = ans.size() / 2 - c;
				end = ans.size() / 2 + c - 1;
			}
		}else {
			start = 0;
			end = ans.size() - 1;
		}
		for(int i=start; i<=end; i++) {
			cout << " " << ans[i];
		}
		cout << endl << endl;
	}
	return 0;
}
