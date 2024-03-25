#include<bits/stdc++.h>
using namespace std;

int n, root, k, cnt;
vector<int> v[54];

void dfs(int from) {
	
	if(v[from].size() == 0) {
		cnt++;
		return;
	}
	
	for(int there : v[from]) {
		dfs(there);
	}
	
	return;
}

int main() {
	cin >> n;
	
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		
		if(tmp == -1) 
			root = tmp;
		
		v[tmp].push_back(i);
	}
	
	cin >> k;
	
	v[k].clear();

	dfs(root);	
	
	if(k == root) {
		cout << 0;
	}
	else {
		cout << cnt - 1;
	}
}
