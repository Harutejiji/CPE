#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, tmp, l;
		cin >> n >> m;
		int arr[m];
		for(int i=0; i<m; i++) cin >> arr[i];
		int num = 1;
		for(int i=1; i<m; i++) {
			num <<= 1;//if有四根bar, 則有4個bit --> 1111
			num++;//以位元方式0, 1表示拿與不拿
		}
		cout << num << endl;
		bool flag = false;
		for(int i=0; i<=num; i++) {
			tmp = 0;
			l = i;
			for(int j=0; j<m; j++) {
				if(l & 1) tmp += arr[j];//把所有組合都跑過一遍, 每次做完檢查是否符合題目
				l >>= 1;
			}
			if(tmp == n) {
				flag = true;
				break;
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
