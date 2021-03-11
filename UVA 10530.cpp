#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	int maxi = 10, mini = 0;
	while(cin >> n && n) {
		cin.get();
		getline(cin, s);
		if (s == "too high") maxi = min(maxi, n);		
		else if (s == "too low") mini = max(mini, n);					
		else if (s == "right on") {
			if( n <= maxi && n >= mini ) cout << "Stan may be honest" << endl;
			else cout << "Stan is dishonest" << endl;
			maxi = 10;
			mini = 0;
		}
	}
	return 0;
}
