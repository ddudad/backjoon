#include<stdio.h>

int main() {
	int n, count=0;
	scanf("%d", &n);
	
	while(1) {
		if(n==0) {
			break;
		}
		else if(n<0) {
			count=-1;
			break;
		}
		
		if(n%5==0) {
			n-=5;
			count++;
		}
		else {
			n-=3;
			count++;
		}
	}
	
	printf("%d\n", count);
}
