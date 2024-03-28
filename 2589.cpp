#include<bits/stdc++.h>
using namespace std;

//l = 1, w = 0
int n, m, sx, sy, ex, ey, max_dis;
string str;
int a[54][54], visited[54][54];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int getMaxDistance() {
	int max_ = -1;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			max_ = max(max_, visited[i][j]);
		}
	}
	
	return max_;
}

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
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ny, nx});
			}
		}
	}
	return;
}

int main() {

	cin >> n >> m;
	getline(cin, str);
	
	for(int i =0; i<n; i++) {
		for(int j=0; j<m; j++) {
			char tmp;
			scanf("%1c", &tmp);
			
			if(tmp == 'W')
				a[i][j] = 0;
			if(tmp == 'L')
				a[i][j] = 1;
		}
		
		getline(cin, str);
	}
	
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
				
			fill(&visited[0][0], &visited[0][0]+54*54, 0);
					
			if(a[i][j] == 1 && visited[i][j] == 0) {
				
				bfs(i, j);
				max_dis = max(getMaxDistance(), max_dis);	
			}
		}
	}
	cout << max_dis - 1;
}

