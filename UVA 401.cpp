#include <bits/stdc++.h>
using namespace std;
int main() {
	char m[256];
	m['A'] = 'A';
	m['E'] = '3';
	m['H'] = 'H';
	m['I'] = 'I';
	m['J'] = 'L';
	m['L'] = 'J';
	m['M'] = 'M';
	m['O'] = 'O';
	m['S'] = '2';
	m['T'] = 'T';
	m['U'] = 'U';
	m['V'] = 'V';
	m['W'] = 'W';
	m['X'] = 'X';
	m['Y'] = 'Y';
	m['Z'] = '5';
	m['1'] = '1';
	m['2'] = 'S';
	m['3'] = 'E';
	m['5'] = 'Z';
	m['8'] = '8';
	string a, b;
	while(cin >> a) {
		bool flag = false;
		b = a;
		reverse(a.begin(), a.end());
		if(b == a) {
			for(int i=0; i<a.size()/2; i++) {
				if (m[b[i]] == b[a.size() - i - 1]){
					flag = true;
				}else {
					flag = false;
					break;
				}
			}
			if(flag) printf("%s -- is a mirrored palindrome.\n", b.c_str());
			else printf("%s -- is a regular palindrome.\n", b.c_str());
		}else if(m[b[0]] == b[b.size() - 1]) {
			printf("%s -- is a mirrored string.\n", b.c_str());
		}else printf("%s -- is not a palindrome.\n", b.c_str());
		cout << endl;
	}
	return 0;
}
