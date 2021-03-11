#include <bits/stdc++.h>
#define pi 2 * acos(0)
using namespace std;
int main() {
	double s, a;
	string type;
	while(cin >> s >> a >> type) {
		double r = 6440 + s;
		double arc, chord;
		if(type == "min") a /= 60;
		if(a > 180) a = 360 - a;
		chord = sqrt(r * r * 2 - 2 * r * r * cos(pi*a/180));
		arc = 2 * pi * r * a/360;
		printf("%.6lf %.6lf\n", arc, chord);
	}
	return 0;
}
