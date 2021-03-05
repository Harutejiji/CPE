#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while (cin >> n && n){
		if (n == 0) break;
		if (n%9 == 0) cout << n/9*10-1 << " " << n/9*10 << endl;
		else cout << n+n/9 << endl;
	}
	return 0;
}
