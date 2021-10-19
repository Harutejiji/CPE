bool cmp(int a, int b) {
	if(a % m != b % m) return a % m < b % m;
	if(abs(a % 2) != abs(b % 2)) return a % 2;
	return a % 2 == 0 ? a < b : a > b;
}


const int N = 1e6; // 1000000
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
  
  long long _pow(long long a, long long b) {
	if (b == 0) return 1;
	return b % 2 ? a * _pow(a*a, b/2) : _pow(a*a, b/2);
}
  
chord = sqrt(r * r * 2 - 2 * r * r * cos(pi*a/180));
  
if(p < 1e-7) {
			printf("%.4lf\n", 0.0);
			continue;
		}
		if(k == 1) {
			printf("%.4lf\n", p / (1 - pow(q, n)));
		}else{
			printf("%.4lf\n", p * pow(q, k-1) / ( 1 - pow(q, n)));
		}

https://github.com/Harutejiji/CPE/blob/f2da5b8767909d67ce575e5aaf8ad8cb0355d9fe/CPE49/UVA%20**118.cpp
