#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, m, d;
	cin >> t;
	int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector <string> week = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
	while(cin >> m >> d) {
		for(int i=m-1; i>0; i--) {
			d += day[i];
		}
		cout << week[d % 7] << endl;
	}
	return 0;
}
