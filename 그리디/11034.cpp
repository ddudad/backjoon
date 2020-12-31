#include<stdio.h>

int main() {
	int a, b, c, cnt=0;
	int ret=0;
	
		cnt=0;
		ret=scanf("%d %d %d", &a, &b, &c);

		
		if( (b-a)>(c-b) ) {
			printf("%d", b-a-1);
		}
		else {
			printf("%d", c-b-1);
		}
		
}
