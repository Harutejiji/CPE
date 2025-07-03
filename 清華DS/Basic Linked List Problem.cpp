#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    list<int> li;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        if(s[0] == 'I') {
            int m;
            cin >> m;
            if(s[1] == 'H') li.push_front(m);
            else li.push_back(m);   
        } else if(s[0] == 'R') {
            if(li.empty()) continue;
            if(s[1] == 'H') li.pop_front();
            else li.pop_back();
        } else if(s[0] == 'S') {
            int m;
            cin >> m;
            if(li.empty()) {
                cout << "E" << '\n';
                continue;
            }
            int f = 0;
            for(auto it: li) {
                if(it == m) {
                    f = 1;
                    break;  
                }
            }
            cout << (f ? "Y" : "N") << '\n';
        } else if(s[0] == 'O') {
            if(li.empty()) {
                cout << "E" << '\n';
                continue;
            } else {
                for(auto it: li) cout << it << " ";                   
                cout << '\n';
            }
        }
    }
    return 0;
}
