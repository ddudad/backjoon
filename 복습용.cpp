#include<bits/stdc++.h>
using namespace std;

int n=10, k=3;

void print(vector<int> b) {
	for(auto iter : b) {
		cout << iter << ' ';
	}
	cout << "\n";
}

void combi(int start, vector<int> b) {
	
	if(b.size() == 3) {
		print(b);
		return;
	}
	
	for(int i=start + 1; i<n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}

int main() {
	
	vector<int> b;
	
	combi(-1, b);
}
