//decimal => binary
while(n) {
	v.push_back(n % 2);
	n /= 2;
}
for(int i=v.size()-1; i>=0; i--) cout << v[i];

strins s = "";
while(n) {
	s = (char)(n % 2+ '0') + s;
	n /= 2;
}

//binary => decimal
int convert(string x) {
	int res = 0;
	for(int i=x.size()-1, j=0; i>=0; i--, j++) {
		res += (x[i] - '0') * pow(2, j);
	}
	return res;
}
