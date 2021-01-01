#include<stdio.h>

int main() {
	int n, m, arr[100], card[3], max=-1;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i+2<n; i++) {
		for(int j=i+1; j+1<n; j++) {
			for(int k=j+1; k<n; k++) {
				int tmp=arr[i]+arr[j]+arr[k];
				if(tmp<=m && tmp>max) {
					max=tmp;
				}
			}
		}
	}
	printf("%d\n", max);
}
