#include<bits/stdc++.h>
using namespace std;

int alphabet[30];
char str[101];

int main()
{
	cin >> str;
	
	int i=0;
	while(str[i]!='\0') {
		alphabet[str[i]-97]++;
		i++;
	}
	
	for(int i=0; i<26; i++) {
		cout << alphabet[i] << " ";	
	}
}
