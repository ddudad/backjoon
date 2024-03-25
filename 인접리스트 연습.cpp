#include<bits/stdc++.h>
using namespace std;

const int V = 10;
vector<int> vec[V];
int visit[V];

void go(int idx) {
	cout << idx << '\n';
	
	visit[idx]=1;
	
	for(int there : vec[idx]) {
		if(visit[there] != 0)
			continue;
		go(there);
	}
	return;
}

int main() {
	
	vec[1].push_back(2);
	vec[2].push_back(1);
	
	vec[1].push_back(3);
	vec[3].push_back(1);
	
	vec[3].push_back(4);
	vec[4].push_back(3);
	
	for(int i=0; i<V; i++) {
		if(vec[i].size() && visit[i]==0) {
			go(i);
		}
	}
}
