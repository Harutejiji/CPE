const int N = 1e6;
bool isP[N+1];
vector<int>primes;
int main() {
	for(int i=2; i<=N; i++) isP[i] = true;
	for(int i=2; i<=N; i++) {
		if (isP[i]) primes.push_back(i);
		for(int j=0; j<primes.size(); j++) {
			if (primes[j] > N / i) break;
			isP[i*primes[j]] = false;
			if (i % primes[j] == 0) break;
		}
	}
	
