#include<stdio.h>

int main() {
	int n, i, j, cnt=0, max=0;
	int arr[30000];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n-1; i++) {
		cnt=0;
		for(j=i+1; j<n; j++) {
			if(arr[i]>arr[j]) {
				cnt++;
			}
			else {
				break;
			}
		}
		
		if(cnt>max) {
			max=cnt;
		}
	}
	printf("%d", max);
}
