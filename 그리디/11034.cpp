#include<stdio.h>

int main() {
	int kang[3];
	int max;
	
	while(scanf("%d", &kang[0])!=EOF) {
			
		for(int j=1; j<3; j++) {
			scanf("%d", &kang[j]);
		}
		
		if(kang[1]-kang[0]>kang[2]-kang[1]) {
			max=kang[1]-kang[0];
		}
		else {
			max=kang[2]-kang[1];
		}
		
		if(max<=0) {
			printf("0\n");
		}
		else {
			printf("%d\n", max-1);
		}
	}
	return 0;
}
