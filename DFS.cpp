/*
수도코드 
	DFS
	
	DFS(u, adj)
	    u.visited = true
	    for each v ∈ adj[u]
	        if v.visited == false
	            DFS(v, adj)
*/

#include<bits/stdc++.h>
using namespace std;

const int n = 6;
vector<int> adj[n];
int visited[n];

void dfs(int u) {
	visited[u] = 1;
	cout << u << "\n";
	
	for(int i : adj[u]) {
		if(visited[i] == 0) 
			dfs(i);
	}
	cout << u << "로부터 발생한 함수 종료\n";
	return; 
}

int main() {

	adj[1].push_back(2);
    adj[1].push_back(3); 
    adj[2].push_back(4);  
    adj[4].push_back(2);  
    adj[2].push_back(5);   
    dfs(1);
}
