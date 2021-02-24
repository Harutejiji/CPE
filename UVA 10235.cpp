#include <bits/stdc++.h>
using namespace std;
const int N = 1e6; // 1000000
bool isP[N+1];
vector<int>primes;
int main(int argc, char *argv[]) {
	for(int i=2; i<=N; i++) isP[i] = true;
	for(int i=2; i<=N; i++) {
		if (isP[i]) primes.push_back(i);
		for(int j=0; j<primes.size(); j++) {
			if (primes[j] > N / i) break;
			isP[i*primes[j]] = false;
			if (i % primes[j] == 0) break;
		}
	}
	int n;
	while(cin >> n) {
		if (!isP[n]) {
			cout << n << " is not prime.\n";
			continue;
		}
		string temp = to_string(n);
		reverse(temp.begin(), temp.end());
		int m = stoi(temp);
		if (n != m && isP[m]) cout << n << " is emirp.\n";
		else cout << n << " is prime.\n";
	}
    return 0;
}
