#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t && t) {
		string s;
		cin.get();
		cout << "Case " << ++c << ":" << endl;
		cout << "#include<string.h>\n";
		cout << "#include<stdio.h>\n";
		cout << "int main()\n" << "{\n";
		while(t--) {
			getline(cin, s);
			cout << "printf(\"";
			for(int i=0; i<s.size(); i++) {
				if(s[i] == '"' || s[i] == '\\') cout << '\\' << s[i];
				else cout << s[i];
			}
			cout << "\\n\")" << ';' << endl;
		}
		cout << "printf(\"\\n\")" << ';' << endl;
		cout << "return 0;\n" << '}' << endl;
	}
	return 0;
}
