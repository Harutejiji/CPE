//https://blog.csdn.net/mobius_strip/article/details/31805403
#include <bits/stdc++.h>
using namespace std;
void deal(int n) {
	int s = (int)sqrt(n+0.0);
	if(s % 2) {
		if(s*s == n) printf("%d %d\n", 1, s);
		else if(n <= s*s+s+1) printf("%d %d\n", n-s*s, s+1);
		else printf("%d %d\n", s+1, s+s+2-n+s*s);
	}else{
		if(s*s == n) printf("%d %d\n", s, 1);
		else if(n <= s*s+s+1) printf("%d %d\n", s+1, n-s*s);
		else printf("%d %d\n", s+s+2-n+s*s, s+1);
	}
}
int main() {
	int n;
	while(cin >> n && n) {
		deal(n);
	}
	return 0;
}
