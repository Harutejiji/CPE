#include <bits/stdc++.h>
using namespace std;
void output(long long n) {
	if(n >= 1e7) {
		output(n / 1e7);
		cout << " kuti";
		n %= (long long)(1e7);
	}
	if(n >= 1e5) {
		output(n / 1e5);
		cout << " lakh";
		n %= (long long)(1e5);
	}
	if(n >= 1000) {
		output(n / 1000);
		cout << " hajar";
		n %= 1000;
	}
	if(n >= 100) {
		output(n / 100);
		cout << " shata";
		n %= 100;
	}
	if(n != 0) cout << " " << n;
}
int main() {
	long long n, c = 1;
	while(cin >> n) {
		printf("%4d.", c++);
		if(n == 0) cout << " 0";
		output(n);
		cout << endl;
	}
	return 0;
}
