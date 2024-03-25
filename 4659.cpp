#include<bits/stdc++.h>
using namespace std;

string s;
int lcnt, vcnt, is_include_v;
//lcnt 자음, vcnt 모음 

bool isVowel(int idx) {
	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx=='u');
}

int main() {
	
	while(true) {
		cin >> s;	
		if(s == "end")
			break;
			
		lcnt = 0;
		vcnt = 0;
		is_include_v = 0;
		bool flag = 0;
		int prev=-1;
			
		for(int i=0; i<s.length(); i++) {
			int idx = s[i];
			
			if(isVowel(idx)) {
				vcnt++;
				lcnt=0;
				is_include_v = 1;
			}
			else {
				lcnt++;
				vcnt=0;
			}
			
			if(vcnt==3 || lcnt==3)
				flag = 1;
			
			if((prev==idx) && i>1 && (idx!='e' && idx!='o'))
				flag = 1;
				
			prev=idx;
		}
		
		if(is_include_v == 0)
			flag = 1;
		
		if(flag == 1)
			cout << "<" << s << "> " << "is not acceptable.\n";
		else
			cout << "<" << s << "> " << "is acceptable.\n";	
	}
}
