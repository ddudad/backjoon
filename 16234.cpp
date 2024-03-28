#include<bits/stdc++.h>
using namespace std;

bool flag;
int n, l, r, sum, cnt;
int a[54][54], visited[54][54];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void dfs(int y, int x, vector<pair<int, int>> &pos) {
//	cout << "dfs\n";
	
	visited[y][x] = 1;
	pos.push_back({y, x});
	sum += a[y][x];
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx < 0 || ny < 0 || nx >=n || ny >= n)
			continue;
		
		int dif = abs(a[ny][nx] - a[y][x]);
		
		if(dif >= l && dif <= r && visited[ny][nx] == 0) {
//			cout << "in if\n";
			dfs(ny, nx, pos);
		}
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
	
//		cout << "while\n";
		
		fill(&visited[0][0], &visited[0][0]+54*54, 0);
		flag = false;
				
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(visited[i][j] == 0) {
					vector<pair<int, int>> pos;
					sum = 0;
					
					dfs(i, j, pos);
					
//					cout << "pos size : " << pos.size() << "\n";
					if(pos.size() == 1)
						continue;
					for(pair<int, int> iter : pos) {
						a[iter.first][iter.second] = sum / pos.size();
						flag = true;
//						cout<< iter.first << ' ' << iter.second << "\n";
					}
				}
			}
		}	
		
		if(flag == false) {
			break;
		}
		cnt++;
	}
	
	cout << cnt << "\n";	
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<n; j++) {
//			cout << a[i][j] << ' ';
//		}
//		cout << "\n";
//	}
}
