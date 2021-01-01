#include<stdio.h>

int main() {
	int n, cnt=0;
	
	scanf("%d", &n);
	
	while(1) {
		if(n==0) {
			break;
		}
		else if(n<0) {
			cnt=-1;
			break;
		}
		
		if(n%5==0) {
			n-=5;
			cnt++;
		}
		else {
			n-=3;
			cnt++;
		}
	}
	printf("%d\n", cnt);
}
