#include<bits/stdc++.h>
using namespace std;

int n, c;
map<int, int> mp;
map<int, int> mp_first;

int main() {
	cin >> n >> c;
	
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		mp[tmp]++;
		
		if(mp_first[tmp] == 0)
			mp_first[tmp] = i+1; 
	}
}
