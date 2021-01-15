#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<ctype.h>

int main() {
	int n, max=0;
	int arr[100000];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	
	for(int i=0; i<n; i++) {
		if(max<(arr[i]*(n-i))) {
			max=(arr[i]*(n-i));
		}
	}
	printf("%d\n", max);
}
