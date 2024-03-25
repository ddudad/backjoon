#include<bits/stdc++.h>
using namespace std;

int t, cnt2, cnt5;

int main() {
	
	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		cnt2 = 0;
		cnt5 = 0;
		
		//n까지 2의 배수, 4의 배수, 8의 배수... 등을 구하는 기능 
//		for(int i=2; i<=n; i*=2) {
//			cnt2+=n/i;
//		}
		
		for(int i=5; i<=n; i*=5) {
			cnt5+=n/i;
		}
		
		cout << cnt5 << "\n";
		
	}
}
