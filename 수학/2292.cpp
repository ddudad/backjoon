#include<stdio.h>

int main() {
	int n, tmp=6, sum=7, cnt=1;
	
	scanf("%d", &n);
	
	if(n==1) {
		printf("1");
		return 0;
	}
	
	while(1) {
		if(n>sum) {
			tmp+=6;
			sum+=tmp;
			cnt++;
		}
		else {
			break;
		}	
	}
	printf("%d", cnt+1);
}
