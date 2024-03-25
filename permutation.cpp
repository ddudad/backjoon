#include<bits/stdc++.h>
using namespace std;

/*
	next_permuation을 통한 순열 출력
	print를 앞에서 자를 경우 조합으로도 사용 가능(일부 중복 존재) 
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
