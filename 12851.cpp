#include<bits/stdc++.h>
using namespace std;

const int MAX = 200000;
int n, k;
int visited[MAX+4], cnt[MAX+4];
queue<int> q;

int main() {
	cin >> n >> k;
	visited[n] = 1;
	cnt[n] = 1;
	q.push(n);
	
	while(q.size()) {
		int now = q.front();
		q.pop();
		
		for(int next : {now+1, now-1, now*2}) {
			
			if(next < 0 || next > MAX)
				continue;
			
			if(!visited[next]) {
				q.push(next);
				visited[next] = visited[now] + 1;
				cnt[next] += cnt[now];
			
			} else if(visited[next] == visited[now] + 1) {
				cnt[next] += cnt[now];
			}
		}
	}
	cout << visited[k] - 1 << "\n";
	cout << cnt[k] << "\n";
}
