using namespace std;
int main() {
	string s;
	int ans[100]={0}, len, a, b;
	for(int i=1; i<100; i++) {
		a = i % 10;
		b = i % 10;
		for(int j=2; j<=i; j++) {
			b = b * a % 10;
		}
		ans[i] = (b+ans[i-1])%10;
	}
	while(cin >> s && s != "0") {
		len = s.size();
		if(len > 1) {
			int n = (s[len-1]-'0') + ((s[len-2]-'0')*10);
			cout << ans[n] << endl;
		}else {
			int n = (s[len-1] - '0');
			cout << ans[n] << endl;
		}
	}
	return 0;
}
