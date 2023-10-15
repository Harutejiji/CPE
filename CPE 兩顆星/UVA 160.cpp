#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
bool isP[N+1];
vector<int> primes;
int main() {
	for(int i=2; i<=N; i++) isP[i] = true;
	for(int i=2; i<=N; i++) {
		if(isP[i]) primes.push_back(i);
		for(int j=0; j<primes.size(); j++) {
			if(primes[j] > N / i) break;
			isP[i * primes[j]] = false;
			if(i % primes[j] == 0) break;
		}
	}
	int n;
	while(cin >> n && n) {
		int ans[103] = {0};
		for(int i=2; i<=n; i++) {
			int x = 2;
			int temp = i;
			while(temp > 1) {
				if(temp % x == 0) {
					temp /= x;
					ans[x]++;
				}
				else x++;
			}
		}
		printf("%3d! =",n); 
		int end = 0;
		for(int i=2; i<=n; i++) {
			if(isP[i]) {
				if(end == 15) {
					cout << endl << "      ";
					printf("%3d", ans[i]);
					end = 0;
				}else {
					printf("%3d", ans[i]);
					end++;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
