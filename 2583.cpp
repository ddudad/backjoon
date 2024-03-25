/*
알고리즘이라곤 dfs하나지만 내가 직접 풀음ㅎ 
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> ret;
int n, m, k, total_cnt, cnt;
int a[101][101];
int visited[101][101];
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};


void dfs(int y, int x) {
	visited[y][x] = 1;
	cnt++;
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx<0 || ny<0 || nx>=n || ny>=m) 
			continue;
		if(a[ny][nx] != 0)
			continue;
		if(visited[ny][nx] == 1)
			continue;
		dfs(ny, nx);		
	}
	
	return;
}

int main() {
	cin >> m >> n >> k;
	
	for(int i=0; i<k; i++) {
		int ltx, lty, rbx, rby;
		cin >> ltx >> lty >> rbx >> rby;
		
		for(int j=ltx; j<rbx; j++) {
			for(int l=lty; l<rby; l++) {
				if(a[l][j] != 1)
					a[l][j] = 1;
			}
		}
	}
	for(int j=0; j<m; j++) {
		for(int l=0; l<n; l++) {
			if(visited[j][l] == 0 && a[j][l]==0) {
				
				dfs(j, l);
				total_cnt++;
				ret.push_back(cnt);
				cnt=0;
			}
		}
	}
	cout << total_cnt << '\n';
	sort(ret.begin(), ret.end());
	for(int i=0; i<ret.size(); i++) {
		cout << ret[i] << ' ';	
	}
}
