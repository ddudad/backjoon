/*
	감을 아예 못잡음
	재귀함수에 익숙해질 것 
	(a+b)%c = ((a%c) + (b%c))%c 
	(a*b)%c = ((a%c) * (b%c))%c
	나머지 연산자는 분배법칙이 적용된다.
	
	이 문제의 시간복잡도는 최대 21억*21억으로 어떤 자료형을 써도 불가능하다. 따라서 분배법칙을 이용하여
	각각의 나머지를 구해서 곱해야한다. 
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c, ret;

ll go(ll a, ll b) {
	if(b == 1) {
		return a;
	}
	
	ret = go(a, b/2);
	ret = ret*ret;
	if(b%2==1)
		ret = a * ret;
	cout << "a : " << a << " b : " << b << endl;
	cout << "ret : " << ret << endl;
	
	return ret;
}

int main() {
	a = 2;
	b = 10;
	go(a, b);
}
