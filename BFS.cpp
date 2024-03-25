
/*
수도코드 
BFS(G, u)
    u.visited = 1
    q.push(u);
    while(q.size()) 
        u = q.front() 
        q.pop()
        for each v ∈ G.Adj[u]
            if v.visited == false
                v.visited = u.visited + 1
                q.push(v) 
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100]; 
int nodeList[] = {10, 12, 14, 16, 18, 20, 22, 24};

void bfs(int here) {
	
	queue<int> q;
	visited[here] = 1;
	q.push(here);
	
	while(q.size()) {
		int here = q.front();
		q.pop();
		
		for(int there : adj[here]) {
			if(visited[there] == 1)
				continue;
			visited[there] = visited[here] + 1;
			q.push(there);
		}
	}
}

int main() {
	adj[10].push_back(12);
    adj[10].push_back(14);
    adj[10].push_back(16);
    
    adj[12].push_back(18);
    adj[12].push_back(20);


    adj[20].push_back(22);
    adj[20].push_back(24);
    bfs(10);
    
    for(int i : nodeList){
        cout << i << " : " << visited[i] << '\n';
    }
    
	cout << "10번으로부터 24번까지 최단거리는 : " << visited[24] - 1 << '\n';
    
	return 0; 
}


//void bfs(int y, int x) {
//	queue<pair<int, int>> q;
//	visited[y][x] = 1;
//	q.push({y, x});
//	
//	while(q.size()) {
//		int x, y;
//		tie(y, x) = q.front();
//		q.pop();
//		
//		for(int i=0; i<4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			
//			if(nx < 0 || ny < 0 || nx > m || ny > n) 
//				continue;
//				
//			if(a[ny][nx] == 0)
//				continue;
//				
//			if(visited[ny][nx] != 0)
//				continue;
//			
//			visited[ny][nx] = visited[y][x] + 1;
//			q.push({ny, nx});
//		}
//	}
//	return;
//}
//
//
//}
//
//int main() {
//	
//	cin >> n >> m;
//	cin >> spx >> spy;
//	cin >> epx >> epy;
//	
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	
//	bfs(spx, spy);
//	cout << visited[epy][epx] << "\n";
//}
