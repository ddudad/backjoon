#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<int, int> mp_f;
vector<pair<int, int>> v;
int n, c;
int a[1004];

bool cmp(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second) {
		return mp_f[a.first] < mp_f[b.first];
	}
	return a.second > b.second;
}

int main() {
	cin >> n >> c;
	
	for(int i=0; i<n; i++) {
		cin >> a[i];
		mp[a[i]]++;
		if(mp_f[a[i]] == 0)
			mp_f[a[i]] = i+1;
	}
	
	for(auto iter : mp) 
		v.push_back({iter.first, iter.second});
	
	sort(v.begin(), v.end(), cmp);
	
	for(auto iter : v) {
		for(int i=0; i<iter.second; i++) 
			cout << iter.first << ' ';
	}
}
