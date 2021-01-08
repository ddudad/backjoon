#include<stdio.h>
#include<algorithm>

int main() {
	int n, m, sumA=0, sumB=0;
	int arrA[50], arrB[50];
	
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arrA[i]);
		sumA+=arrA[i];
	}
	
	for(int i=0; i<m; i++) {
		scanf("%d", &arrB[i]);
		sumB+=arrB[i];
	}
	
	printf("%d\n", sumA-sumB);
}
