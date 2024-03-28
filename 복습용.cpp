#include<bits/stdc++.h>
using namespace std;

int n, l, r, sum, cnt;
int a[54][54], visited[54][54];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void dfs(int y, int x, vector<pair<int, int>> &pos) {
	visited[y][x] = 1;
	pos.push_back({y, x});
	sum += a[y][x];
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx < 0 || ny < 0 || nx >= n || ny >= n) 
			continue;
		
		int dif = abs(a[ny][nx] - a[y][x]);
		
		if(dif >= l && dif <= r && visited[ny][nx] == 0)
			dfs(ny, nx, pos);
	}
	
	return;
}

int main() {
	cin >> n >> l >> r;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	
	while(true) {
		fill(&visited[0][0], &visited[0][0]+54*54, 0);
		bool flag = false;
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				
				vector<pair<int, int>> pos;
				sum = 0;
				
				dfs(i, j, pos);
				
				if(pos.size() == 1)
					continue;
				
				for(auto iter : pos) {
					a[iter.first][iter.second] = sum / pos.size();
					flag = true;
				}
			}
		}
		
		if(flag == false)
			break;
		cnt++;
	}
	cout << cnt << "\n";
}
