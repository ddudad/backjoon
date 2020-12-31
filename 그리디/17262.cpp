#include<stdio.h>

int main() {
	int n, min=100001, max=-1;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		
		if(tmp1>max) {
			max=tmp1;
		}
		if(tmp2<min) {
			min=tmp2;
		}
	}
	
	if(max-min<0) {
		printf("0\n");
	}
	else {
		printf("%d", max-min);
	}
}
