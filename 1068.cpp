#include<bits/stdc++.h>
using namespace std;

int n, cut, cnt, root;
int a[54][54], visited[54];

void dfs(int from) {
	
	//방문처리된 곳이라면 바로 종료 
	if(visited[from] == 1) {
		return;
	}
	
	visited[from] = 1;
	bool flag = true;		//자식 유무 체크 
	
	for(int i=0; i<n; i++) {
		if(a[from][i] == 1 && visited[i] == 0) {
			dfs(i); 
			flag = false;
		}
	}
	
	if(flag) {
		cnt++;
//		cout << from << "으로 부터 발생한 함수 종료\n"; 
	}
		
	return;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		
		if(tmp == -1) {
			root = i;
			continue;
		}
		
		a[i][tmp] = 1;
		a[tmp][i] = 1;
	}
	
	cin >> cut;
	
	//cut 노드 방문처리해버리면?
	visited[cut] = 1; 
	
	if(cut == root)
		cnt = 0;
	
	dfs(root);
	
	cout << cnt << "\n";
}
