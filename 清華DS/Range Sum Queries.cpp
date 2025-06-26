#include<bits/stdc++.h>
using namespace std;
int a[100005] = {};
long long s[100005] = {};
int main() {
  int n, m, o, p;
  cin >> n >> m;
  for(int i=1; i<=n; i++) cin >> a[i];
  for(int i=1; i<=n; i++) {
  	s[i] = s[i-1] + a[i];
  }
 
  for(int i=0; i<m; i++) {
  	cin >> o >> p;
  	cout << s[p] - s[o-1] << endl;
  }
	return 0;
}
