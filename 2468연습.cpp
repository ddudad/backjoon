#include<bits/stdc++.h>
using namespace std;

int n, ret=1, cnt;
int a[101][101], visited[101][101];
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};

void dfs(int y, int x, int d) {
	visited[y][x] = 1;
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx<0 || ny<0 || nx>n || ny>n)
			continue;
		if(a[ny][nx] < d)
			continue;
		if(visited[ny][nx] != 0)
			continue;
		dfs(ny, nx, d);
	}
	return;
}

int main() {
	cin >> n;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	
	for(int i=0; i<101; i++) {
		fill(&visited[0][0], &visited[0][0]+101*101, 0);
		cnt = 0;
		
		for(int j=0; j<n; j++) {
			for(int k=0; k<n; k++) {
				if(a[j][k] >= i && visited[j][k] == 0) {
					dfs(j, k, i);
					cnt++;
				}
			}
		}
		ret = max(ret, cnt);
	}
	cout << ret << ' ';
}
