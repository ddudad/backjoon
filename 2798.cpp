#include <bits/stdc++.h>
using namespace std;

int n, m, sum, big = -1;
vector<int> vec;

void print(vector<int> b){
	
	sum = 0;
	
	for(int i : b) {
		sum += vec[i];
	}
	
	if(sum <= m && sum > big) {
		big = sum;
	}
}

void combi(int start, vector<int> b){
	if(b.size() == 3){
	print(b);
	return;
	}
	
	for(int i = start + 1; i < n; i++){
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}
int main() {
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	
	vector<int> b;
	combi(-1, b);
	
	cout << big;
	return 0;
}
