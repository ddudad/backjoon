#include<bits/stdc++.h>
using namespace std;

int adj[100][100];
int visited[100][100];
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};
int n, m, startx, starty, posx, posy;
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
			
			if(nx < 0 || ny < 0 || nx >= m || ny >= n || adj[ny][nx] == 0)
				continue;
			if(visited[ny][nx])
				continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({nx, ny});
		}
	}
}

int main() {
	cin >> n >> m >> startx >> starty >> posx >> posy;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> adj[i][j];
		}
	}
	
    // 최단거리 디버깅 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        	cout << visited[i][j] << ' '; 
        }
        cout << '\n';
    } 
    return 0;
}
