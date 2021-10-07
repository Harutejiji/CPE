#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		bool flag = true;
		vector <int> v;
		for(int i=1; i<=n; i++) {
			v.push_back(i);
		}
		cout << "Discarded cards:";
		for(int i=0; i<v.size()-1; i++) {
			if(flag) {
				if(i == 0) {
					cout << " " << v[i];
					flag = !flag;
				}else{
					cout << ", " << v[i];
					flag = !flag;
				}
			}else {
				v.push_back(v[i]);
				flag = !flag;
			}
		}
		cout << endl;
		int n = v.back();
		printf("Remaining card: %d\n", n);
	}
	return 0;
}
