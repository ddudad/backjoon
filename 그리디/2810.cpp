#include<stdio.h>

int main() {
	int cnt=1, val, tmp=1;
	char ch[51];
	
	scanf("%d", &val);
	
	for(int i=0; i<=val; i++) {
		scanf("%c", &ch[i]);
	}
	
	for(int i=0; i<=val; i++) {
		//printf("%c",ch[i]);
		if(ch[i]=='S') {
			cnt++;
		}
		else if(ch[i]=='L') {
			if(tmp!=2) {
				tmp++;
			}
			else if(tmp==2) {
				cnt++;
				tmp=1;
			}
		}
	}
	
	//컵홀더의 수 > 사람의 수 일 수 있음, 이 때는 사람의 수로 출력 
	if(val>cnt) {
		printf("%d", cnt);
	}
	else {
		printf("%d", val);
	}
}
