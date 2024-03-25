#include<bits/stdc++.h>
using namespace std;

int n, sum;

int combi(int a) {
	
	if(a == 0)
		return 0;
		
	return a%10 + combi(a/10);
}

int main() {
	cin >> n;
	
	
	for(int i=0; i<=n; i++) {
		if((combi(i) + i) == n) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << 0 << "\n";
}
