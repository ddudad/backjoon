#include<bits/stdc++.h>
using namespace std;

int n, m, res=999999999;
int a[15][15];
vector<pair<int, int>> h;
vector<pair<int, int>> c;

int check(vector<int> b) {
	
	int min_dis_sum = 0;
	
	for(int j=0; j<h.size(); j++) {
		
		int min_dis = 999999999;
		
//		cout << "start\n";
		
		for(int i : b) {
			int distance = abs(c[i].first - h[j].first) + abs(c[i].second - h[j].second);
//			cout << "distance : " << distance << "\n";
			min_dis = min(min_dis, distance);
		}
		
		min_dis_sum += min_dis;
	}
	
	return min_dis_sum;
}

void combi(int start, vector<int> b) {
	if(b.size() == m) {
		
		int min_dis = check(b);
		res = min(min_dis, res);
		
		return;
	}
	
	for(int i=start+1; i<c.size(); i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}

int main() {
	vector<int> b;
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> a[i][j];
			
			if(a[i][j] == 1)
				h.push_back({i, j});
			if(a[i][j] == 2)
				c.push_back({i, j});
		}
	}
	
	combi(-1, b);
	
	cout << res;
	
}
