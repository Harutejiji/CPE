#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	map<char, int> table;
	for(int i='a', j = 1; i<='z'; i++, j++) table[i] = j;
	for(int i='A', j = 1; i<='Z'; i++, j++) table[i] = j;
	while(cin >> a >> b) {
		int n = 0, m = 0, nn = 0, mm = 0, maxi, mini;
		for(int i=0; i<a.size(); i++) n += table[a[i]];
		for(int i=0; i<b.size(); i++) m += table[b[i]];
		while(n > 9) {
			nn = n;
			n = 0;
			while(nn % 10 || nn > 9) {
				n += nn % 10;
				nn /= 10;
			}
		}
		while(m > 9) {
			mm = m;
			m = 0;
			while(mm % 10 || mm > 9) {
				m += mm % 10;
				mm /= 10;
			}
		}
		maxi = max(n, m);
		mini = min(n, m);
		printf("%.2lf %%\n",(double)mini / maxi * 100);
	}
	return 0;
}
