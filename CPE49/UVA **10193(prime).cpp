#include <bits/stdc++.h>
using namespace std;
int convert(string x) {
	int res = 0;
	for(int i=x.size()-1, j=0; i>=0; i--, j++) {
		res += (x[i] - '0') * pow(2, j);
	}
	return res;
}
int main() {
	int T, c=0;
	cin >> T;
	string a, b;
	while(cin >> a >> b) {
		c++;
		if(__gcd(convert(a), convert(b)) != 1)
			printf("Pair #%d: All you need is love!\n", ++c);
		else 
			printf("Pair #%d: Love is not all you need!\n", ++c);
	}
	return 0;
}
