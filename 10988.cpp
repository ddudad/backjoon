#include<bits/stdc++.h>
using namespace std;

char word[101];
char word_reverse[101];
int answer=1;

int main() {
	cin >> word;
	
	int size=0;
	while(word[size] != '\0'){
		size++;
	}
	
	for(int i=0; i<size/2; i++) {
		if(word[i] != word[size-1-i])	
			answer=0;
	}
	
	cout << answer;
}
