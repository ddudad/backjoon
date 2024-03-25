#include<bits/stdc++.h>
using namespace std;

const int n = 5;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};
int ary[n][n], visited[n][n];
int cnt;

void go(int y, int x) {
	visited[y][x] = 1;
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= n || ny >= n || nx<0 || ny<0)
			continue;
		if(visited[ny][nx] == 1)
			continue;
		if(ary[ny][nx] == 0)
			continue;
		go(ny, nx);
	}
	cout << cnt << '\n';
	return;
}

int main() {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> ary[i][j];
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(ary[i][j] == 1 && visited[i][j] !=1) {
				cnt++;
				go(i, j);
			}
		}
	}
}
