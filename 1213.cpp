/*
	�켱 ���� ������ ������ ����
	Ȧ�� ���ĺ��� 2�� �̻��� ��� �Ұ����ϴ�. 
	
	���� �縰��� ���ڿ��� ������ �ϴµ�.. �� ����� ����ϸ� �̷� ����� �ֱ��� �ϰ�
	�ܿ��� �� �� ����. �ƹ��� �ܸӸ��� ������ �̷� ����� ���ø� �� ���� �� ������ �ʴ�.
	���������̶�� ���� ������ �̷� ����� ������������? 
	
	AABB�� ���� ��� Z���� A���� �����ϸ鼭 ���ĺ��� �ִ� ��� �� ���ڿ��� �տ� �ϳ� �ڿ� �ϳ� �߰�
	1�ܰ� : "" �� ���ڿ��� �տ� B�ϳ� �ڿ� B �ϳ� �߰� => "BB"
	2�ܰ� : "BB" ���ڿ��� �տ� A�ϳ� �ڿ� A�ϳ� �߰� => "ABBA" 
	
	Z���� ���� �����ؾ� �ϴµ� �� �� A���� �����ϵ� �������� �˾Ƴ� �� �ִ� ����� ã�� ����
	������ Z���� �ϸ�� 
	���ĺ� ī��Ʈ �� �� ���� 0���� ������ �ʿ� ���� A�� ��Ʈ���� 65���� �����ϵ��� ����
	������ �޸� ũ�� ������ �ʴ´� 
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
