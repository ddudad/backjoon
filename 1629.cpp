/*
	������ ������ �̸� ������ ������ �����÷ο찡 ���� �� ����.
	return ret % c; �� ���� ��� return a,  ret = (ret * ret);, ret = (ret * a); �ε� ������ �� ����. 
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a, b, c;

ll go(ll a, ll b) {
	if(b==1)
		return a%c;
	
	ll ret = go(a, b/2);
	ret = (ret * ret) % c;
	if(b%2==1)
		ret = (ret * a) % c;		
	
	cout << "ret : " << ret << endl;
	return ret;
}

int main() {
	cin >> a >> b >> c;
	
	cout << go(a, b);
}
