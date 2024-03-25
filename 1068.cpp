#include<bits/stdc++.h>
using namespace std;

int n, cut, cnt, root;
int a[54][54], visited[54];

void dfs(int from) {
	
	//�湮ó���� ���̶�� �ٷ� ���� 
	if(visited[from] == 1) {
		return;
	}
	
	visited[from] = 1;
	bool flag = true;		//�ڽ� ���� üũ 
	
	for(int i=0; i<n; i++) {
		if(a[from][i] == 1 && visited[i] == 0) {
			dfs(i); 
			flag = false;
		}
	}
	
	if(flag) {
		cnt++;
//		cout << from << "���� ���� �߻��� �Լ� ����\n"; 
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
	
	//cut ��� �湮ó���ع�����?
	visited[cut] = 1; 
	
	if(cut == root)
		cnt = 0;
	
	dfs(root);
	
	cout << cnt << "\n";
}
