#include<bits/stdc++.h>
using namespace std;

int n, m, sum, min_ = 1111111111;

int main() {
	cin >> n >> m;
	
	for(int i=n; i<=m; i++) {
		for(int j=1; j<i; j++) {
			if(j*j == i) {
				sum += i;
				if(min_ > i)
					min_ = i;
			}
		}
	}
	
	if(sum != 0)
		cout << sum << "\n" << min_ << "\n";
	else
		cout << -1;
		
}
