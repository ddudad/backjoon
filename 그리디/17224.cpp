#include<stdio.h>

int main() {
	int n, l, k;
	int hardCount=0, nomalCount=0;
	int sum=0;
	scanf("%d %d %d", &n, &l, &k);
	
	for(int i=0; i<n; i++) {
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		
		if(l>=tmp2) {
			hardCount++;
		}
		else if(l>=tmp1) {
			nomalCount++;
		}
	}
	
	for(int i=0; i<k; i++) {
		if(hardCount!=0) {
			sum+=140;
			hardCount--;
		}
		else if(nomalCount!=0) {
			sum+=100;
			nomalCount--;
		}
	}
	printf("%d", sum);
}
