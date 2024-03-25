#include<bits/stdc++.h>
using namespace std;

string str;


int main() {
	while(true) {
		getline(cin, str);
		if(str==".") break;
		
		stack<char> stk;
		bool check = true;
		for(int i=0; i<str.length(); i++) {
			if(str[i] == ')') {
				if(stk.size() == 0 || stk.top() == '[') {
					check = false;
					break;	
				}
				else {
					stk.pop();
				}
			}
			if(str[i] == ']') {
				if(stk.size() == 0 || stk.top() == '(') {
					check = false;
					break;
				}
				else {
					stk.pop();
				}
			}
			
			if(str[i] == '(' || str[i] == '[')
				stk.push(str[i]);
		}


		if(check && stk.size() == 0) 
			cout << "yes\n";
		else
			cout << "no\n";
	}
}
