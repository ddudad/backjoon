#include<bits/stdc++.h>
using namespace std;

// 97:a 122:z
// 65:A 90:Z
//��ҹ��� ���� ���� �ϴ� ���ϰ� ����ó���� �Ϸ��� ������ ����ó��, ��ҹ��� ����ó�� ������ �����Ͽ�
//��ҹ��ڸ� �����ؼ� ó���ϴ� ���� �� ����� 
string str;

int main() {
	getline(cin, str);
	
	for(int i=0; i<str.size(); i++) {
		if(str[i] >=65 && str[i] <=90) {
			if(str[i] + 13 > 90)
				str[i] = str[i] + 13 - 26;
			else
				str[i] = str[i] + 13;
		} 
		else if(str[i] >=97 && str[i] <=122) {
			if(str[i] + 13 > 122)
				str[i] = str[i] + 13 - 26;
			else
				str[i] = str[i] + 13;
		}
	}
	
	cout << str;
}
