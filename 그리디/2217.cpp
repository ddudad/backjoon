#include<stdio.h>
#include<algorithm>

int main() {
	int n, max=0;
	int arr[100000];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	
	max=arr[0]*n;
	
	for(int i=0; i<n; i++) {
		int tmp=arr[i]*(n-i);
		max=std::max(tmp, max);
	}
	printf("%d", max);
}
