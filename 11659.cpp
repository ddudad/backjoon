#include<bits/stdc++.h>
using namespace std;

int n, m;
int ary[100004];
int sum[100004];

int main() {
	cin >> n >> m;
	
	for(int i=1; i<=n; i++) {
		cin >> ary[i];
		sum[i] = sum[i-1]+ary[i];
	}
	
	
	while(m--) {
		int i, j;
		cin >> i >> j;
		i--;
		cout << sum[j] - sum[i] << "\n";
	}
}
