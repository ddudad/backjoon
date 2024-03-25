/*
	find component? 랑 똑같은 문제 
*/
#include<bits/stdc++.h>
using namespace std;

int t, n, m, k, cnt;
int x, y;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int adj[51][51], visited[51][51];

void find_compo(int y, int x) {
	visited[y][x] = 1;
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx < 0 || ny < 0 || nx >= m || ny >= n)
			continue;
		if(adj[ny][nx] == 0) 
			continue;
		if(visited[ny][nx] != 0)
			continue;
		find_compo(ny, nx);
	}
	return;
}

int main() {
	cin.tie(NULL);
    cout.tie(NULL);
    
	cin >> t;
	
	while(t--) {
		fill(&adj[0][0], &adj[0][0] + 51 * 51, 0);
	    fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
	    cnt = 0;
	    
	    cin >> m >> n >> k;
	    
	    for(int i = 0; i < k; i++){
            cin >> x >> y;
            adj[y][x] = 1;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(adj[i][j] == 1 && !visited[i][j]){
                    find_compo(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n"; 
	}
	return 0;
}
