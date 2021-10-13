#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	stringstream aa;
	int h, m, sec, v, hh, mm, ssec, sum, i = 0;
	double d;
	while(getline(cin, a)) {
		i++;
		char b;
		aa.clear();
		aa.str("");
		aa << a;
		if(i == 1 || i == 4 || i == 6) {
			if(i == 4) {
				aa >> h >> b >> m >> b >> sec;
				d = ((h*60) + m + (sec/60)) * v / 60;
				aa >> v;
			}else aa >> h >> b >> m >> b >> sec >> v;
		}else {
			cout << a << " ";
			aa >> hh >> b >> mm >> b >> ssec;
			sum = ((hh*60) + mm + (ssec/60)) - ((h*60) + m + (sec/60));
			double s = (v * sum / 60) + d;
			printf("%.2lf km\n", s);
		}
	}
	return 0;
}
/*cout << a << " ";
			aa >> hh >> b >> mm >> b >> ssec;
			sum = ((hh*60) + mm + (ssec/60)) - ((h*60) + m + (sec/60));
			double s = (v * sum / 60) + d;
			printf("%.2lf km\n", s);
			
			
			if(i == 4) {
				aa >> h >> b >> m >> b >> sec;
				d = ((h*60) + m + (sec/60)) * v / 60;
				aa >> v;
			}else aa >> h >> b >> m >> b >> sec >> v;*/
			
