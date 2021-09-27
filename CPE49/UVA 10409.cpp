#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	while(cin >> t && t) {
		int top = 1, n = 2, w = 3;
		string s;
		for(int i=0; i<t; i++) {
			cin >> s;
			if (s == "north") {
				int temp = n;
				n = top;
				top = 7 - temp;
			} else if(s == "south") {
				int temp = n;
				n = 7 - top;
				top = temp;
			} else if(s == "west") {
				int temp = top;
				top = 7 - w;
				w = temp;
			} else if(s == "east") {
				int temp = top;
				top = w;
				w = 7 - temp;
			}
		}
		cout << top << endl;
	}
	return 0;
}
