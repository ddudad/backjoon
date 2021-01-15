#include<stdio.h>
#include<algorithm>

int main() {
	int n, cost[100000], price[100000], min=9999999, sum=0;
	scanf("%d", &n);
	
	for(int i=0; i<n-1; i++) {
		scanf("%d", &cost[i]);
	}
	for(int i=0; i<n; i++) {
		scanf("%d", &price[i]);
		if(i!=(n-1) && price[i]<min) {
			min=price[i];
		}
	}
	
	for(int i=0; i<n; i++) {
		if(price[i]==min) {
			int tmp=0;
			for(int j=i; j<n; j++) {
				tmp+=cost[j];
			}
			sum+=price[i]*tmp;
			break;
		}
		else {
			sum+=price[i]*cost[i];
		}
	}
	printf("%d\n", sum);
}
