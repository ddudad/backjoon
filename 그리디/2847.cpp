#include<stdio.h>
#include<algorithm>

int main() {
	int n, arr[100], sum=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(int i=n-2; i>=0; i--) {
		if(arr[i]>=arr[i+1]) {
			sum+=arr[i]-arr[i+1]+1;
			arr[i]=arr[i+1]-1;
		}
	}
	printf("%d\n", sum);
}
