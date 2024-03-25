#include<bits/stdc++.h>
using namespace std;

int n, m, cnt = -1, num_cz, cycle;
int a[104][104], visited[104][104];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	visited[y][x] = 1;
	q.push({y, x});
	
	while(q.size()) {
		tie(y, x) = q.front();
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx < 0 || ny < 0 || nx >= m || ny >= n)
				continue;
				
			if(a[ny][nx] == 1 && visited[ny][nx] == 0) {
				a[ny][nx] = 0;
				visited[ny][nx] = visited[y][x] + 1;
			}
			else if(a[ny][nx] == 0 && visited[ny][nx] == 0) {
				visited[ny][nx] = 1;
				q.push({ny, nx});
			}
		}
	}
}

int main() {
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	
	
	
	while(true) {
		
		fill(&visited[0][0], &visited[0][0] + 104*104, 0);
		cnt = 0;
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(a[i][j] == 1)
					cnt += 1;
			}
		}
		
		if(cnt == 0)
			break;

		bfs(0, 0);

		num_cz = cnt;
		cycle++;
	}
	
	cout << cycle << "\n" << num_cz;
	

}
