#include <bits/stdc++.h>
using namespace std;
int main()  {
	int T;
	cin >> T;
	while (T--)	{
		int n, i, t, a[10] = {0};
		cin >> n;
		for (i = 1; i <= n; i++) {
			t = i;
			while(t) {
				a[t%10]++;
				t /= 10;
			}
		}
		for (i = 0; i < 9; i++) cout  << a[i] << " ";
		cout << a[9] << endl;
	}
	return 0;
}
