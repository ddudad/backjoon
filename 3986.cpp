/*
	���� �����ؼ� Ǭ ����
	¦����, ���� => ���� �̿�? 
*/

#include<bits/stdc++.h>
using namespace std;

int n, cnt;

int main() {
	cin >> n;
	
	for(int i=0; i<n; i++) {
		string tmp;
		stack<char> stk;
		
		cin >> tmp;
		
		for(int j=0; j<tmp.length(); j++) {
			
			if(stk.empty()) {
				stk.push(tmp[j]);
			}
			else if(stk.top() == tmp[j]) {
				stk.pop();	
			}
			else {
				stk.push(tmp[j]);	
			}
		}
		
		if(stk.size() == 0)
			cnt++;
	}
	
	cout << cnt;
	
}	
