#include<stdio.h>
#include<algorithm>

bool comp(int a, int b) {
	return a>b;
}

int main() {
	int T;
	int r, c, j, n, cnt=0, sum=0;
	int arr[10001];
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++) {
		cnt=0;
		sum=0;
		scanf("%d %d", &j, &c);
		
		for(int k=0; k<c; k++) {
			scanf("%d %d", &r, &c);
			arr[k]=r*c;
		}
		
		std::sort(arr, arr+c, comp);
		
		for(int k=0; k<c; k++) {
			printf("arr[k]:%d ", arr[k]);
		}
		printf("\n");
		for(int k=0; k<c; k++) {
			if(sum>=j) {
				break;
			}
			sum+=arr[k];
			cnt++;
		}
		printf("%d\n", cnt);
	}
}
