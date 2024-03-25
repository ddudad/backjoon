#include<bits/stdc++.h>
using namespace std;

int n, cnt, i;
string str;

int main() {
	
	cin >> n;
	
	while(cnt!=n) {
		string str = to_string(i++);
		if(str.find("666") != string::npos)
			cnt++;
	}
	
	cout << --i;
}
