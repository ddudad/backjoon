/*
	������ �̿��ϴ� ��
	n�� �߿��� 2���� �̾Ƽ� ������ �� ���� ���� ������ cnt++
	����Լ��� �̿��� ��� �ð��ʰ��� 
	
	void combi(int start, vector<int> b) {
		if(b.size() == 2) {
			print(b);
			return;
		}
		
		for(int i=start+1; i<n; i++) {
			b.push_back(i);
			combi(i, b);
			b.pop_back();	
		}
		return;
	}
	���� ���õ� �ڵ�� ���� ���Ǵ� �ϱ��ϵ��� ���� 
	��ҵ��� ���� �� �ε����� �������� �̵��� ����
	�ε����� ���� ���ҿ� ������ �� ������ 
	
	�̴� ���� 3�� ������ ���(3������) �ݺ����� ���� ���� ���� �ִ�.
	3�� ���� ��� 3�� for��
	2�� ���� ��� 2�� for��
	1�� ���� ��� 1�� for�� 
*/

#include<bits/stdc++.h>
using namespace std;

int n, m, cnt, id[15004];

int main() {
	vector<int> b;
//	combi(-1, b);

	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		id[i] = tmp;	
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<i; j++) {
			if((id[i]+id[j]) == m)
				cnt++;	
		}
	}
	
	cout << cnt;
}
