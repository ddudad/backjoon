#include<bits/stdc++.h>
using namespace std;

/*
	next_permuation�� ���� ���� ���
	print�� �տ��� �ڸ� ��� �������ε� ��� ����(�Ϻ� �ߺ� ����) 
*/


int k=3;

int main() {
	
	vector<int> a = {1,2,3,4,5};
	sort(a.begin(), a.end());
	
	do {
		for(int i : a) {
			cout << i << ' ';
		}
		cout << "\n";
		
	} while(next_permutation(a.begin(), a.end()));
	
}
