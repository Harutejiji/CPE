uva10009
先建立adjacent list
之後跑BFS

#include <bits/stdc++.h>
using namespace std;
void printpath(map<string, string> prev, string v) {
	const string u = prev[v];
	if(u != v) printpath(prev, u);
	cout << v[0];
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n;
		cin >> m >> n;
		map<string, vector<string>> adjlist;//建立adjacent list
		for(int i=0; i<m; i++) {
			string a, b;
			cin >> a >> b;
			adjlist[a].push_back(b);
			adjlist[b].push_back(a);
		}
		for(int i=0; i<n; i++) {
			string s, d;
			cin >> s >> d;
			//BFS
			queue<string> q;
			map<string, string> prev;
			prev[s] = s;
			q.push(s);
			while(!q.empty() && !prev.count(d)) {
				string u = q.front();
				q.pop();
				//cout << u << endl;
				for(int j=0; j<adjlist[u].size(); j++) {
					const string v = adjlist[u][j];
					if(!prev.count(v)) {
						prev[v] = u;
						q.push(v);
					}
				}
			}
			printpath(prev, d);
			cout << endl;
		}
		if(t) cout << endl;
	}
	return 0;
}
