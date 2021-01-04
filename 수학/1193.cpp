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
	//È¦¼öÀÌ¸é 1/count, Â¦¼öÀÌ¸é count/1 
	printf("%d", count);
}
