#include<bits/stdc++.h>
using namespace std;

const int INF = 1987654321;
int r, c, ret, sy, sx, y, x;
char a[1004][1004];
int fire_check[1004][1004], person_check[1004][1004];
int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	
	queue<pair<int, int>> q;
	
	cin >> r >> c;
	
	fill(&fire_check[0][0], &fire_check[0][0] + 1004*1004, INF);
	
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> a[i][j];
			
			if(a[i][j] == 'F') {
				fire_check[i][j] = 1;
				q.push({i, j});
			} 
			else if(a[i][j] == 'J') {
				sy = i;
				sx = j;
			}
		}
	}
	
	while(q.size()) {
		tie(y, x) = q.front();
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx < 0 || ny < 0 || nx >= c || ny >= r)
				continue;
			
			if(fire_check[ny][nx] != INF || a[ny][nx] == '#')
				continue;
			
			fire_check[ny][nx] = fire_check[y][x] + 1;
			q.push({ny, nx});
		}
	}
	
//	cout << "\n";
//	for(int i=0; i<r; i++) {
//		for(int j=0; j<c; j++) {
//			cout << fire_check[i][j] << ' ';
//		}
//		cout << "\n";
//	}
//	cout << "\n";
	
	person_check[sy][sx] = 1;
	q.push({sy, sx});
	
	while(q.size()) {
		tie(y, x) = q.front();
		q.pop();
		
		if(x == 0 || y == 0 || x == c-1 || y == r-1) {
			ret = person_check[y][x];
			break;
		}
		
		for(int i=0; i<4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx < 0 || ny < 0 || nx >= c || ny >= r)
				continue;
			if(person_check[ny][nx] != 0 && a[ny][nx] == '#')
				continue;
			if(fire_check[ny][nx] <= person_check[y][x] + 1)
				continue;
			
			person_check[ny][nx] = person_check[y][x] + 1;
			q.push({ny, nx});
		}
	}
	
	if(ret != 0)
		cout << ret << "\n";
	else
		cout << "IMPOSSIBLE\n";
		
}
















