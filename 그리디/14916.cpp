#include<stdio.h>
#include<algorithm>

int main() {
	int n, cnt=0;
	scanf("%d", &n);
	
	while(1) {
		if(n==0) {
			break;
		}
		else if(n<0) {
			printf("-1\n");
			return 0;
		}
		
		if(n%5!=0) {
			n-=2;
			cnt++;
		}
		else {
			n-=5;
			cnt++;
		}
	}
	printf("%d\n", cnt);
}
