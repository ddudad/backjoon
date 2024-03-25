#include<bits/stdc++.h>
using namespace std;

/*
	map �ڷᱸ���� Ư¡ �� �ð����⵵�� �����ϸ� map�� �̿��Ͽ� �����ϰ� Ǯ �� �ִ� ����
	�ڷᱸ���� 1���� �ذ��Ϸ��� ������ ���� ���� �������� �ڷᱸ���� ������� 
	map���� key�� ���� �����ϴ� ��� logn�� �ð�(���������Ʈ��)�� �ɸ����� 
	value�� ���� �����ϴ� ��� n�� �ð��� �ɸ���
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
