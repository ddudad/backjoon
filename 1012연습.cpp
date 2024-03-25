#include<bits/stdc++.h>
using namespace std;

int n, m, t, k, ret, x, y;
int a[51][51];
int visited[51][51];
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};

void dfs(int y, int x) {
	visited[y][x] = 1;
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx < 0 || ny < 0 || nx>=m || ny >=n)
			continue;
//		if(a[ny][nx] == 1 && !visited[ny][nx]) {
//            dfs(ny, nx);
//        }
		if(visited[ny][nx] != 0)
			continue;
		if(a[ny][nx]!=1)
			continue;
		dfs(ny,nx);
	}
	return;
}

int main() {
	cin >> t;
	
	while(t--) {
		cin >> m >> n >> k;	
		
		fill(&a[0][0], &a[0][0]+51*51, 0);
		fill(&visited[0][0], &visited[0][0]+51*51, 0);
		ret = 0;
		
		for(int i=0; i<k; i++) {
			cin >> x >> y;
			
			a[y][x] = 1;
		}
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(a[i][j]==1 && !visited[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << '\n';
	}
}
