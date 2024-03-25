/*
	나머지 연산을 미리 해주지 않으면 오버플로우가 나는 것 같다.
	return ret % c; 를 해줄 경우 return a,  ret = (ret * ret);, ret = (ret * a); 로도 가능할 것 같다. 
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
