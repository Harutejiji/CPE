#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void ans(int n, int m) {
	if(n % m == 0) {
		v.push_back(n/m);
		return;
	}
	v.push_back(n/m);
	ans(m, n%m);
}
int main() {
	int n, m;
	while(cin >> n >> m) {
		v.clear();
		ans(n, m);
		for(int i=0; i<v.size(); i++) {
			if(i == 0) {
				printf("[%d;", v[i]);
				continue;
			}
			else if(i == v.size() - 1) {
				printf("%d]\n", v[i]);
				break;
			}
			printf("%d,", v[i]);
		}
	}
	return 0;
}
	
