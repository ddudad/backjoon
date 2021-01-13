#include<stdio.h>
#include<algorithm>

int main() {
	long long n, arr[5000], all=0, cost=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		all+=arr[i];
	}
	
	std::sort(arr, arr+n);
	
	for(int i=0; i<n; i++) {
		cost+=(all-arr[i])*arr[i];
		all-=arr[i];
	}
	printf("%d\n", cost);
}
