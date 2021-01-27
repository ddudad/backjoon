#include<iostream>
#include<string>
using namespace std;

int calc(int cnt) {
	
}

int main() {
	string str, str1="";
	int cnt=0;
	cin >> str;
	
	for(int i=0; i<str.length(); ) {
		if(str[i]=='.') {
			str1.push_back('.');
			i++;
		}
		else {
			//str1.push_back(str[i]);
			//i++;
			//X¼ö °è»ê 
			int cnt=0;
			for(int j=i; j<str.length(); j++) {
				if(str[j]!='X') {
					break;
				}
				cnt++;
			}
			if(cnt%2!=0) {
				printf("-1\n");
				return 0;
			}
			
			i+=cnt;
			
			while(1) {
				if(cnt==0) {
					break;
				}
				if(cnt>=4) {
					str1.append("AAAA");
					cnt-=4;
				}
				else {
					str1.append("BB");
					cnt-=2;
				}
			}
		}
	}
	printf("%s", str1.c_str());
}
