#include<bits/stdc++.h>

using namespace std;

vector<string> split(string str, string delimiter) {
	
	vector<string> v;
	int start = 0;
	int end = str.find(delimiter);
	
	while(end != string::npos) {
		v.push_back(str.substr(start, end - start));
		start = end + delimiter.length();
		end = str.find(delimiter, start);
	}
	
	v.push_back(str.substr(start, end - start));
	
	return v;
}

int main() {
	
	vector<string> a;
	
	a = split("aa*bb", "*");
	
	for(string s : a) {
		cout << s << ' ';
	}
	
}
