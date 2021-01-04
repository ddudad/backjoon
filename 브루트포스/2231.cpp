#include<stdio.h>

int main() {
	int n, tmp, sum=0, i=1;
	
	scanf("%d", &n);
	
	while(1) {
		
		if(i>1000001) {
			break;
		}
		
		tmp=i;
		sum=0; 
		
		while(1) {
			sum+=tmp%10;
			tmp/=10;
			if(tmp==0) {
				break;
			}
		}
		
		if(sum+i==n) {
			break;
		}
		i++;
	}
	
	if(i>1000000) {
		printf("0");
	}
	else {
		printf("%d", i);
	}
}
