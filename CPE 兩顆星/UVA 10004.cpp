#include <bits/stdc++.h>
using namespace std;
int visited[205];//記錄此頂點是否已經被拜訪過
int color[205];//記錄頂點顏色
vector<int> graph[205];//用來建立adjacent list的vector
int check = 0;//檢察是否為BICOLORABLE
void dfs(int now) {//跑DFS檢察
	visited[now] = 1;
	for(int i=0; i<(int)graph[now].size(); i++) {
		int next = graph[now][i];
		if(color[next] == 0) {//此頂點沒被上色的話就上顏色
			color[next] = 0 - color[now];//顏色為上一個頂點的相反色
		}
		if(color[now] == color[next]) check++;
		if(visited[next] == 0) dfs(next);
	}
}
int main() {
	int node, edge;
	while(cin >> node && node) {
		for(int i=0; i<205; i++) {//資料初始
			visited[i] = 0;
			color[i] = 0;
			if(!graph[i].empty()) graph[i].clear();
		}
		check = 0;
		cin >> edge;
		int v1, v2;
		for(int i=0; i<edge; i++) {//建立adjacent list
			cin >> v1 >> v2;
			graph[v1].push_back(v2);
			graph[v2].push_back(v1);
		}
		color[0] = 1;
		dfs(0);
		if(check) cout << "NOT BICOLORABLE.\n";
		else cout << "BICOLORABLE.\n";
	}
	return 0;
}
