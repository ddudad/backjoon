#include<stdio.h>
#include<algorithm>
#include<math.h>

int main() {
	int n, l, pos=0, cnt=0;
	int arr[1000];
	
	scanf("%d %d", &n, &l);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	
	pos=arr[0];
	
	for(int i=1; i<n; i++) {
		if(arr[i]-pos+1>l) {
			cnt++;
			pos=arr[i];
		}
	}
	
	printf("%d\n", cnt+1);
}
