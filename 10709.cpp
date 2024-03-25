#include<bits/stdc++.h>
using namespace std;

int h, w, t, cnt;
bool flag = 0;
string s;
vector<int> v[101];

int main() {
	cin >> h >> w;
	
	for(int i=0; i<h; i++) {
		cin >> s;
		t = 0;
		flag = 0;
		
		for(int j=0; j<s.size(); j++) {
			if(s[j] == 'c') {
				flag =1;
				t=0;
			}
			if(flag == 1 && s[j] == '.') {
				t+=1;			
			}
			if(flag == 0 && s[j] == '.') {
				t = -1;
			}
			v[i].push_back(t);
		}
	}
	
	for(int i=0; i<h; i++) {
		for(int j=0; j<v[i].size(); j++) {
			cout << v[i][j] << ' ';		
		}
		cout << "\n";
	}
}
