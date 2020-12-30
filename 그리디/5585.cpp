#include<stdio.h>

int main() {
	//500, 100, 50, 10, 5, 1
	int n, count=0, change;
	scanf("%d", &n);
	change=1000-n;
	while(1) {
		if(change==0) {
			break;
		}
		
		if(change>=500) {
			change-=500;
			count++;
		}
		else if(change>=100) {
			change-=100;
			count++;
		}
		else if(change>=50) {
			change-=50;
			count++;
		}
		else if(change>=10) {
			change-=10;
			count++;
		}
		else if(change>=5) {
			change-=5;
			count++;
		}
		else if(change>=1) {
			change-=1;
			count++;
		}
	}
	printf("%d\n", count);
}
