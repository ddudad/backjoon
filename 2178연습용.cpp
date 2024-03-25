#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[101][101];
int visited[101][101];

int main() {
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}
