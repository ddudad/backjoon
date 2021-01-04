#include<stdio.h>
#include<algorithm>

int main() {
	int n, arr[1000], sum=0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			sum+=arr[j];
		}
	}
	printf("%d\n", sum);
}
