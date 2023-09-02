#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	stringstream aa;
	int h, m, sec, v, hh, mm, ssec, sum, i = 0;//105
	double d = 0.0;
	while(getline(cin, a)) {
		i++;
		char b;
		aa.clear();
		aa.str("");
		aa << a;
		if(i == 1 || i == 4 || i == 6) {
			if(i == 4) {
				hh = h;
				mm = m;
				ssec = sec;
				aa >> h >> b >> m >> b >> sec;
				d = abs(((h*3600) + (m*60) + (sec)) - ((hh*3600) + (mm*60) + (ssec))) * v / 3600.0;
				aa >> v;
			}else aa >> h >> b >> m >> b >> sec >> v;
		}else {
			cout << a << " ";
			aa >> hh >> b >> mm >> b >> ssec;
			sum = abs(((hh*3600) + (mm*60) + (ssec)) - ((h*3600) + (m*60) + (sec)));
			double s = (v * sum / 3600.0) + d; // 當寫"/60.0"時會全部除到小數點後
			printf("%.2lf km\n", s);
		}
	}
	return 0;
}
