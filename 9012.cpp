#include<bits/stdc++.h>
using namespace std;


int n;
string str, ans;

int main() {
	cin >> n;
	char c;
	
	while(n--) {
		stack<char> stk;
		
		cin >> str;
		

		for(int i=0; i<str.length(); i++) {
			if(stk.empty()) {
				stk.push(str[i]);
			}
			else {
				if(str[i] == ')' && stk.top() != ')')
					stk.pop();
				else if(str[i] == '(')
					stk.push(str[i]);	
			}
			
		}
		
		if(stk.empty())
			ans = "YES";
		else
			ans = "NO";
		
		cout << ans << "\n";
	}
}
