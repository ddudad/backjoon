#include<stdio.h>

int main() {
	int x, count=1, countSum=1;
	
	scanf("%d", &x);
	
	if(x==1) {
		printf("1/1");
		return 0;
	}
	
	while(1) {
		count++;
		countSum+=count;
		if(countSum>=x) {
			printf("countSum=%d", countSum);
			break;
		}
	}
	//Ȧ���̸� 1/count, ¦���̸� count/1 
	printf("%d", count);
}
