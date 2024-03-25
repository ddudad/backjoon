#include<bits/stdc++.h>
using namespace std;

/*
	map 자료구조의 특징 및 시간복잡도를 이해하면 map을 이용하여 간단하게 풀 수 있는 문제
	자료구조를 1개로 해결하려는 생각은 하지 말고 여러개의 자료구조를 사용하자 
	map에서 key를 통해 접근하는 경우 logn의 시간(레드블랙이진트리)이 걸리지만 
	value를 통해 접근하는 경우 n의 시간이 걸린다
*/

map<string, int> map1;
map<int, string> map2;
int n, m;
string name;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		cin >> name;
		map1[name] = i+1;
		map2[i+1] = name;
	}
	
	for(int i=0; i<m; i++) {
		string tmp;
		cin >> tmp;
		
		if( atoi(tmp.c_str()) != 0)
			cout << map2[atoi(tmp.c_str())] << "\n";
		else
			cout << map1[tmp] << "\n";
	}
	
}
