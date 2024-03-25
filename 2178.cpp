#include<bits/stdc++.h>
using namespace std;

int n, m;
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
			
			if(nx < 0 || ny < 0 || nx > m || ny > n)
				continue;
			
			if(a[ny][nx] == 1 && visited[ny][nx] == 0) {
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ny, nx});
			}
		}		
	}
	return;
}

int main() {
	cin >> n >> m;	
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}
	
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<m; j++) {
//			cout << a[i][j] << ' ';
//		}
//		cout << "\n";
//	}
	
	bfs(0, 0);
	
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<m; j++) {
//			cout << visited[i][j] << ' ';
//		}
//		cout << "\n";
//	}
	
	cout << visited[n-1][m-1] << endl;
}
