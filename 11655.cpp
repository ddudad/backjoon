#include<bits/stdc++.h>
using namespace std;

// 97:a 122:z
// 65:A 90:Z
//대소문자 구분 없이 일단 더하고 예외처리를 하려고 했으나 공백처리, 대소문자 예외처리 문제가 복잡하여
//대소문자를 구분해서 처리하는 것이 더 깔끔함 
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
