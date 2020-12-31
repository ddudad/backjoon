#include<stdio.h>
#include<stdlib.h>

int main() {
	char str[101], pos, target;
	int right=0, left=0, cnt=0;
	
	str[0]='A';
	
	scanf("%s", str+1);
	
	for(int i=0; str[i+1]!='\0'; i++) {
		pos=str[i];
		target=str[i+1];
		
		right=abs(target-pos);
		left=26-abs(pos-target);
		
		if(right>left) {
			cnt+=left;	
		}
		else {
			cnt+=right;
		}
	}
	
	printf("%d\n", cnt);
}
