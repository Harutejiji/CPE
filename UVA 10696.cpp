#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		if(n <= 100) printf("f91(%d) = 91\n", n);
		else printf("f91(%d) = %d\n", n, n - 10);
	}
	return 0;
}
