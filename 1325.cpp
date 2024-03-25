#include<bits/stdc++.h>
using namespace std;

vector<int> v[10004];
int n, m, a, b, max_;
int numch[10004], visited[10004];

int dfs(int from) {
	visited[from] = 1;
	int ret = 1;
	
	for(int there : v[from]) {
		if(visited[there] == 1)
			continue;
		ret += dfs(there);
	}
	
	return ret;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	
	while(m--) {
		cin >> a >> b;
		v[b].push_back(a);
	}
	
	for(int i=1; i<=n; i++) {
		memset(visited, 0, sizeof(visited));
		numch[i] = dfs(i);
		max_ = max(max_, numch[i]);
	}
	
//	for(int i=1; i<=n; i++) {
//		if(v[i].size() == 0) 
//			cout << i << "는 리프노드입니다.\n";
//		else {
//			for(int j : v[i]) {
//				cout << i << "->" << j << ' ';
//			}
//			cout << "\n";
//		}
//	}

	for(int i=1; i<=n; i++) {
		if(numch[i] == max_) 
			cout << i << ' ';
	}
}
