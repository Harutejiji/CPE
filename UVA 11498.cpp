#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	while(cin >> t && t) {
		int x, y, xt, yt;
		cin >> x >> y;
		for(int i=0; i<t; i++) {
			cin >> xt >> yt;
			if (x == xt || y == yt) cout << "divisa\n";
			else if(xt > x && yt > y) cout << "NE\n";
			else if(xt < x && yt > y) cout << "NO\n";
			else if(xt < x && yt < y) cout << "SO\n";
			else if(xt > x && yt < y) cout << "SE\n";
		}
	}
	return 0;
}
