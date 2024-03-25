#include<bits/stdc++.h>
using namespace std;

int n;
bool flag = true;
char name[31];
int alphabet[26];

int main() {
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> name;
		alphabet[name[0]-'a']++;
	}
	
	for(int i=0; i<=26; i++) {
		if(alphabet[i] >= 5) {
			cout << (char)(i+'a');
			flag = false;
		}
	}
	
	if(flag == true) {
		cout << "PREDAJA";
	}
}
