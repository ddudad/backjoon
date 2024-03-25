#include<bits/stdc++.h>
using namespace std;

int n, m, ret = 111111111;
char ary[55][55];
char ary1[55[55];

int check(int a, int b) {
	int cnt = 0;
	for(int i=a; i<n; i++) {
		
		char prev = ary[i][b];
//		cout << "±âÁØ : " << prev << "\n"; 
		
		for(int j=b+1; j<m; j++) {
			if(prev == 'W' && ary[i][j] == 'W') {
				ary[i][j] = 'B';
				cnt++;				
			}
			if(prev == 'B' && ary[i][j] == 'B') {
				ary[i][j] = 'W';
				cnt++;
			}
			prev = ary[i][j];
		}
	}
	
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<m; j++) {
//			cout << ary[i][j];
//		}
//		cout << "\n";
//	}
	
	return cnt;
}

int main() {
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> ary[i][j];
		}
	}
	
//	cout << check(0, 0) << "\n"; 
	
	for(int i=0; i<n-7; i++) {
		for(int j=0; j<m-7; j++) {
			cout << check(i, j) << "\n";
		}
	}
	

}
