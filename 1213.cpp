/*
	우선 종료 조건을 생각해 보자
	홀수 알파벳이 2개 이상일 경우 불가능하다. 
	
	이제 펠린드롬 문자열을 만들어야 하는데.. 이 방법을 사용하면 이런 방법도 있구나 하고
	외워야 될 것 같다. 아무리 잔머리를 굴려도 이런 방법을 떠올릴 수 있을 것 같지는 않다.
	오름차순이라는 기준 때문에 이런 방법을 선택했을지도? 
	
	AABB가 있을 경우 Z부터 A까지 조사하면서 알파벳이 있는 경우 빈 문자열에 앞에 하나 뒤에 하나 추가
	1단계 : "" 빈 문자열에 앞에 B하나 뒤에 B 하나 추가 => "BB"
	2단계 : "BB" 문자열에 앞에 A하나 뒤에 A하나 추가 => "ABBA" 
	
	Z문자 부터 시작해야 하는데 이 때 A부터 시작하되 마지막을 알아낼 수 있는 방법을 찾이 말고
	시작을 Z부터 하면됨 
	알파벳 카운트 할 때 굳이 0부터 시작할 필요 없이 A의 인트형인 65부터 시작하도록 하자
	어차피 메모리 크게 먹지도 않는다 
*/

#include<bits/stdc++.h> 
using namespace std;

int alphabet[200]; 
string str;
int odd_cnt;
char mid;
string answer;

int main() {
	cin >> str;
	
	for(int i=0; i<str.length(); i++) {
		alphabet[str[i]]++;	
	}
	
	for(int i=0; i<200; i++) {
		if(alphabet[i] % 2 == 1) {
			mid = i;
			alphabet[i]--;
			odd_cnt++;
		}
	}
	
	if(odd_cnt > 1) {
		answer.append("I'm Sorry Hansoo");
	}
	else {
		for(int i=199; i>0; i--) {
			for(int j=0; j<alphabet[i]; j+=2) {
				answer = answer + (char)(i);
				answer = (char)(i) + answer;
			}
		}	
		if(mid) {
			answer.insert(answer.begin() + answer.size() / 2, mid);	
		}
	}
	cout << answer;
}
