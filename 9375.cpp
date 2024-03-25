

/*
	1번 
	만약 headgear 2개(h1, h2), eyewear 1개(e1)가 있다고 가정하자
	모든 경우의 수를 생각해 본다면 
	1개만 입을 경우 (h1), (h2), (e1) 3개
	2개를 입을 경우 (h1, h2), (h1, e1), (h2, e1) 3개
	3개를 입을 경우 (h1, h2, e1) 1개
	총 7개가 나오는데 이건 모든 옷들을 포함해서 n개를 뽑는 
	경우의 수이기 때문에 같은 옷이 중복되는 경우가 생긴다(h1, h2), (h1, h2, e1)
	
	2번 
	하지만 같은 옷은 중복이 있을 수 없기 때문에 생각을 조금만 바꿔보면
	(headgear 2개 중에서 1개 뽑기 * eyewear 1개 중에서 1개 뽑기) + 
	(headgear 2개 중에서 1개 뽑기) + (eyewear 1개 중에서 1개 뽑기) 
	로 생각할 경우 중복 없이 모든 경우의 수를 뽑을 수 있다.
	(headgear 2개 중에서 1개 뽑기 * eyewear 1개 중에서 1개 뽑기)의 경우 headgear, eyewear를 최소 1개씩 입었을 때 
	(headgear 2개 중에서 1개 뽑기) 의 경우 headwear만 1개 입었을 때 
	(eyewear 1개 중에서 1개 뽑기) 의 경우 eyewear만 1개 입었을 때 
	위의 경우의 수는 nCr 공식에 의해서 (2C1 * 1C1) + 2C1 + 1C1로 생각할 수 있고
	2C1 = 2, 1C1 = 1 이기 때문에 (2 * 1) + 2 + 1 = 5 가지의 경우의 수가 나온다.
	하지만 위의 방식으로 할 경우 옷의 종류가 늘어날 수록 계산하는 식도 늘어나기 때문에
	복잡해져서 구현하기 힘들어진다. 
	
	3번 
	여기서 조금만 더 생각해 본다면 옷을 안입는 경우도 추가해서 생각해 볼 수 있는데
	headgear가 2개였지만 안 입는 경우도 추가해서 3개라고 생각하고(h1, h2, hno) 
	eyewear도 1개였지만 안 입는  경우도 추가해서 2개라고 생각하고(e1, eno)
	간단하게 3*2를 하면 6가지의 경우의 수가 나오는데
	(h1, e1), (h1, eno), (h2, e1), (h2, eno), (hno, e1), (hno, eno)
	여기에는 headgear, eyewear 한개도 안입은 1개의 경우의 수가 포함되었기 때문에 (hno, eno)
	6 - 1을 해서 5가 나온다. 
	
	1번의 경우 구현할 수 있겠는데? 생각하면서 해보지만 중복되는 경우를 찾는 방법이 생각보다 복잡해서 
	쉽게 포기하는 경우가 있다.
	2번의 경우 중복을 제외한 경우의 수를 찾을 수 있기 때문에 구현할 수 있지만, 옷의 종류가 많아질 경우
	또 다른 복잡함이 생긴다.
	3번은 옷의 종류와 상관없이 가장 쉽게 찾을 수 있는 방법인데, 발상의 전환이 필요하기 때문에 쉽게 
	떠오르지 않는 방법이다. 알고리즘이 어려운 이유도 이런 발상의 전환이 필요하기 때문인 것 같다.
	이런 케이스도 있구나 경험을 하고 관련 문제를 많이 풀어보는 방법밖에 없는 듯 하다. 
	
	
	그 외의 팁
	경우의 수를 count 할 때는 int형 보다는 long long 형으로 선언하는 것이 좋다.
	(수가 매우 커질 수 있기 때문에) 
*/

#include<bits/stdc++.h>
using namespace std;

int n;
int cnt;
string type;
string name;
	
int main() {
	cin >> n;
	
	for(int i=0; i<n; i++) {
		map<string, int> map1;
		
		cin >> cnt;

		for(int j=0; j<cnt; j++) {
			cin >> name >> type;
			
			if(map1.find(type) != map1.end()) {
				map1.find(type)->second += 1;
			}
			else {
				map1.insert(make_pair(type, 1));	
			}
		}
		
		int mul=1;
		
		for(auto iter = map1.begin(); iter !=map1.end(); iter++) {

			mul = (iter->second + 1) * mul;
		}
		cout << mul - 1 << endl;
		
	}
}































