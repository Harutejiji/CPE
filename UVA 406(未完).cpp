#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
bool isP[N+1];
vector<int>primes;
int main() {
	for(int i=2; i<=N; i++) isP[i] = true;
	for(int i=2; i<=N; i++) {
		if (isP[i]) primes.push_back(i);
		for(int j=0; j<primes.size(); j++) {
			if(primes[j] > N / i) break;
			isP[i * primes[j]] = false;
			if(i % primes[j] == 0) break;
		}
	}
	int n, m, c;
	while(cin >> n >> m) {
		cout << n << " " << m << ":";
		c = primes.size()- 1 ;
		vector<int> v;
		while(n <= primes[c]) c--;
		v.push_back(1);// there is no '1' in primes' vector
		for(int i=0; i <= c; i++) {
			v.push_back(primes[i]);
		}
		int start = v.size()/2 - m + 1, end = v.size()/2 + m - 1;
		if(!(v.size()%2)) start--;
		if(start < 1) start = 1;
		if(end > v.size()) end = v.size();
		for(int i=start; i<=end; i++) {
			cout << " " << v[i];
		}
		/*if(v.size() % 2) {
			//int l = (int)v.size() / 2;
			for(int i=1; i<=2*m-1; i++) {
			//	cout << v[i] << " ";
			}
		}else {
			for(int i=1; i<=2*m; i++) {
				//cout << v[i] << " ";
			}
		}*/
		cout << endl << endl;
	}
	return 0;
}
