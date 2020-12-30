#include<stdio.h>

int main() {
	char ch[1001], target[4]={'U', 'C', 'P', 'C'};
	int i, j=0;
	
	gets(ch);
	
	for(int i=0 ; ch[i]!='\0'; i++) {
		if(ch[i]==target[j]) {
			j++;
			if(j==4) {
				break;
			}
		}
	}
	
	if(j>=4) {
		printf("I love UCPC");
	}
	else {
		printf("I hate UCPC");
	}
}
