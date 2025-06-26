#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long m[n];
  for(int i=0; i<n; i++) cin >> m[i];
  for(int i=0; i<n; i++) {
    	for(int j=n-1; j>0; j--) {
          	if(m[j] > m[j-1]) swap(m[j], m[j-1]);
        }
  }
  for(int i=0; i<n; i++){
    	cout << m[i] << " ";
  }
  cout << endl;
  return 0;
}
