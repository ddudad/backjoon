/*
	이해가 안가는데 
	나머지 연산자 분배법칙 공부 더 하자 
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int main() {
	
	while(scanf("%d", &n) != EOF) {
		int cnt=1, ret=1;
		
		while(true) {
			if(cnt%n == 0) {
				cout << ret << '\n';
				break;
			}
			else {
				cnt = ((cnt * 10) + 1)%n;
				ret++;	
			}
		}
	}
}
