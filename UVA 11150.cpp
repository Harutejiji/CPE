1.
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n) {
		cout << n+n/2 << endl;
	}
	return 0;
}

2.
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  while(cin >> n) {
    int sum = n;
    while(n >= 3) {
      sum += n/3;
      n = n%3 + n/3;
    }
    if(n == 2) sum++;
    cout << sum << endl;
  }
  return 0;
}
