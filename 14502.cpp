#include<bits/stdc++.h>
using namespace std;

int n, m, k=3, cnt, max_ = -1;
int a[10][10], a_ori[10][10], visited[10][10];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
vector<pair<int, int>> v;

void dfs(int y, int x) {
	visited[y][x] = 1;
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx < 0 || ny < 0 || nx >= m || ny >= n)
			continue;
		
		if(a[ny][nx] == 0 && visited[ny][nx] == 0) 
			dfs(ny, nx);
	}
	return;
}

void check(vector<int> b) {

	fill(&visited[0][0], &visited[0][0] + 10*10, 0);
	memcpy(a, a_ori, sizeof(int)*100);
	cnt=0;
	
	for(int i=0; i<b.size(); i++) {
//		int x = v[b[i]].first;
//		int y = v[b[i]].second;
		int x, y;
		tie(y, x) = v[b[i]];
		
//		cout << "(" << x << "," << y << ")" << ' ';
		a[y][x] = 1;
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(a[i][j] == 2 && visited[i][j] == 0) {
				dfs(i, j);
			}
		}
	}
	
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(a[i][j] == 0 && visited[i][j] == 0)
				cnt++;
		}
	}

	max_ = max(max_, cnt);
	
	return;
}

void combi(int start, vector<int> b) {
	if(b.size() == k) {
		check(b);
		return;
	}
	
	for(int i=start+1; i<v.size(); i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> b;
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
			
			if(a[i][j] == 0) {
				v.push_back({i, j});
			}
		}
	}
	
	memcpy(a_ori, a, sizeof(int)*100);
	
	combi(-1, b);
	
	cout << max_ << "\n";
}
