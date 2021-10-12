#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	stringstream aa;
	int h, m, sec, v, hh, mm, ssec, sum;
	while(getline(cin, a)) {
		char b;
		aa.clear();
		aa.str("");
		aa << a;
		if(a[8] == ' ') {
			aa >> h >> b >> m >> b >> sec >> v;
		}else {
			cout << a << " ";
			aa >> hh >> b >> mm >> b >> ssec;
			sum = ((hh*60) + mm + (ssec/60)) - ((h*60) + m + (sec/60));
			double s = v * sum / 60;
			printf("%.2lf km\n", s);
		}
	}
	return 0;
}
		
