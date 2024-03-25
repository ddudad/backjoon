/*
	���� �ƿ� ������
	����Լ��� �ͼ����� �� 
	(a+b)%c = ((a%c) + (b%c))%c 
	(a*b)%c = ((a%c) * (b%c))%c
	������ �����ڴ� �й��Ģ�� ����ȴ�.
	
	�� ������ �ð����⵵�� �ִ� 21��*21������ � �ڷ����� �ᵵ �Ұ����ϴ�. ���� �й��Ģ�� �̿��Ͽ�
	������ �������� ���ؼ� ���ؾ��Ѵ�. 
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
