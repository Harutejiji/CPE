int n;
string res = "";
while(n) {
    res = (n % 2 + '0') + res;
    n /= 2;
}
return res;


int convert(string x) {
	int res = 0;
	for(int i=x.size()-1, j=0; i>=0; i--, j++) {
		res += (x[i] - '0') * pow(2, j);
	}
	return res;
}
