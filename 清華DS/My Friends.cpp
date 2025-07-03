#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0; i<n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    for(int i=0; i<n; i++) {
        cout << i << ":";
        for(auto neighbor : adj[i]) {
            cout << " " << neighbor;
        }
        cout << "\n";
    }
    return 0;
}
