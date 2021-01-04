#include<stdio.h>

int main() {
	int n, k, cnt=0;
	int arr[10];
	
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(int i=n-1; i>=0; i--) {
		int tmp;
		tmp=k/arr[i];
		//printf("arr[%d]=%d tmp=%d\n",i, arr[i], tmp);
		k-=tmp*arr[i];
		
		cnt+=tmp;
	}
	printf("%d", cnt);
}
