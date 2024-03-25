/*
	조합을 이용하는 것
	n개 중에서 2개를 뽑아서 더했을 때 일정 값이 나오면 cnt++
	재귀함수를 이용할 경우 시간초과뜸 
	
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
	조합 관련된 코드는 자주 사용되니 암기하도록 하자 
	요소들을 뽑을 때 인덱스를 기준으로 뽑도록 하자
	인덱스를 통해 원소에 접근할 수 있으니 
	
	뽑는 수가 3개 이하일 경우(3개까지) 반복문을 통해 뽑을 수도 있다.
	3개 뽑을 경우 3중 for문
	2개 뽑을 경우 2중 for문
	1개 뽑을 경우 1중 for문 
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
