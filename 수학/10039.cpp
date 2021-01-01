#include<stdio.h>

int main() {
	int sum=0;
	
	for(int i=0; i<5; i++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(tmp>=40) {
			sum+=tmp;
		}
		else {
			sum+=40;
		}
	}
	printf("%d\n", sum/5);
}
