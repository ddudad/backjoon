#include<stdio.h>
#include<algorithm>

int main() {
	int n, l;
	int arr[1000];
	
	scanf("%d %d", &n, &l);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	
	for(int i=0; i<n; i++) {
		if(l<arr[i]) {
			break;
		}
		l++;
	}
	
	printf("%d\n", l);
}
